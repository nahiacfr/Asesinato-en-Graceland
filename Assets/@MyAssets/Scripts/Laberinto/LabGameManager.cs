using System;
using System.Collections.Generic;
using Unity.Netcode;
using Unity.Netcode.Transports.UTP;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.SceneManagement;

public class LabGameManager : NetworkBehaviour
{
    const int MAX_PLAYER_AMOUNT = 2;
    public static LabGameManager Instance { get; private set; }

    [SerializeField] GameObject leftPlayerPrefab, rightPlayerPrefab;

    public UnityEvent ClientDisconnected = new UnityEvent();

    public NetworkVariable<PlayerData> selectedPlayer;


    public enum State
    {
        Menu = 0,
        WaitingScene = 1,
        LaOscuridadEnElLaberinto = 2
    }

    private NetworkVariable<State> currentState = new NetworkVariable<State>();

    private Dictionary<ulong, bool> playerReadyDictionary;


    private void Awake()
    {
        //To do not duplicate the Network Manager
        NetworkManager[] networkManagers = FindObjectsOfType<NetworkManager>();
        if (networkManagers.Length > 1)
            Destroy(networkManagers[1].gameObject);
        else
        {
            NetworkManager.Singleton.ConnectionApprovalCallback +=
                NetworkManager_ConnectionApproval;
            NetworkManager.Singleton.OnClientDisconnectCallback += NetworkManager_OnClientDisconnected;
        }

        if (Instance != null && Instance != this)
            Destroy(gameObject);
        else
            Instance = this;

        DontDestroyOnLoad(gameObject);
        currentState.Value = State.Menu;

        selectedPlayer = new NetworkVariable<PlayerData>();
    }

    private void Start()
    {
        StartAsHost();
    }

    /*  StartAsHost
     *
     *  Start a connection as a Host
     *  Load the waiting room scene
     */
    public void StartAsHost()
    {
        NetworkManager.Singleton.StartHost();
// SelectedPlayer(true);
        LoadSceneWaitingRoom();
    }

    /*  StartAsClient
     *
     *  Start a connection as a Client
     *  Load the waiting room scene
     */
    public void StartAsClient()
    {
        NetworkManager.Singleton.StartClient();
// SelectedPlayer(false);
        LoadSceneWaitingRoom();
    }

    /*  StartGame
     *
     *  Load the game scene
     */
    public void StartGame()
    {
        LoadSceneGame();
    }

    /*  NetworkManager_ConnectionApproval
     *
     *  If there are more than MAX_PLAYER_AMOUNT conected 
     *  the connection is declined, else the conecction is
     *  aproved
     */
    private void NetworkManager_ConnectionApproval(NetworkManager.ConnectionApprovalRequest
        connectionApprovalRequest, NetworkManager.ConnectionApprovalResponse
        connectionApprovalResponse)
    {
        if (NetworkManager.Singleton.ConnectedClientsIds.Count >= MAX_PLAYER_AMOUNT)
        {
            connectionApprovalResponse.Approved = false;
            return;
        }
        connectionApprovalResponse.Approved = true;
    }
    /*
        Reseteamos las variables:
            - playerReadyDictionary --> Diccionario con los jugadores listos para jugar
            - selectedPlayer --> El estado del jugador actual pasa a -1
     */
    //TODO
    private void ResetVariables()
    {
        playerReadyDictionary = new Dictionary<ulong, bool>();
        selectedPlayer.Value = new PlayerData
        {
            type = -1
        };
    }

    /*
     *  Volver al menu inicial
     *  
     *  Tiramos abajo el servidor y cargamos la escena inicial
     */
    public void LoadInitialMenu()
    {
        NetworkManager.Singleton.Shutdown();
        LoadSceneMenu();
    }

    /*
     *  Spawneamos los jugadores
     */
    //TODO
    public void SpawnPlayers()
    {
        GameObject playerGO;
        foreach (ulong id in NetworkManager.Singleton.ConnectedClientsIds)
        {
            if (id == selectedPlayer.Value.playerId)
            {
                if (selectedPlayer.Value.type == 0) //it's left
                    playerGO = Instantiate(leftPlayerPrefab);
                else
                    playerGO = Instantiate(rightPlayerPrefab);
            }
            else
            {
                if (selectedPlayer.Value.type == 0)
                    playerGO = Instantiate(rightPlayerPrefab);
                else
                    playerGO = Instantiate(leftPlayerPrefab);
            }
            playerGO.GetComponent<NetworkObject>().SpawnAsPlayerObject(id, true);
        }
    }

    public void SelectedPlayer(bool _left)
    {
        SelectedPlayerServerRpc(_left);
    }

    [ServerRpc(RequireOwnership = false)]
    private void SelectedPlayerServerRpc(bool _left, ServerRpcParams _params = default)
    {
        //Creamos un selectedPlayer y le asignamos el id y el tipo(si es player left o player right)
        selectedPlayer.Value = new PlayerData
        {
            playerId = _params.Receive.SenderClientId,
            type = _left ? 0 : 1
        };

        //Marcamos como ready al jugador
        playerReadyDictionary[_params.Receive.SenderClientId] = true;

        //Esperamos a que esten todos los jugadores conectados
        if (NetworkManager.Singleton.ConnectedClientsIds.Count < MAX_PLAYER_AMOUNT)
            return;

        //Cuando estan ya todos conectados...
        bool allClientsReady = true;
        //Comprobamos que todos los jugadores estan ready (han seleccionado left o right)
        foreach (ulong clientId in NetworkManager.Singleton.ConnectedClientsIds)
        {
            if (!playerReadyDictionary.ContainsKey(clientId) || !playerReadyDictionary[clientId])
            {
                allClientsReady = false;
                break;
            }
        }

        //Si estan todos listos iniciamos el juego
        if (allClientsReady)
        {
            StartGame();
        }
    }

    /*
     *  Gestion de la desconexion de un usuario
     */
    private void NetworkManager_OnClientDisconnected(ulong _clientID)
    {
        switch (currentState.Value)
        {
            case State.Menu:
                ClientDisconnected.Invoke();
                break;
            case State.WaitingScene:
                //Si se desconecta el servidor
                if (_clientID == NetworkManager.ServerClientId)
                {
                    //Volvemos al menu inicial
                    LoadInitialMenu();
                }
                else
                {
                    //TODO
                    //Si se desconecta un cliente y este NO es de tipo -1
                    if (selectedPlayer.Value.type != -1 && selectedPlayer.Value.playerId == _clientID)
                    {
                        selectedPlayer.Value = new PlayerData
                        {
                            type = -1
                        };
                        //ClientDisconnected.Invoke();
                    }
                }
                break;
            //Si estamos en la partida
            case State.LaOscuridadEnElLaberinto:
                //Volvemos al menu inicial
                LoadInitialMenu();
                break;
        }
    }

    //LoadScene functions

    private void LoadSceneMenu()
    {
        currentState.Value = State.Menu;
        LoadNetworkScene();
    }

    private void LoadSceneGame()
    {
        currentState.Value = State.LaOscuridadEnElLaberinto;
        LoadNetworkScene();
    }

    private void LoadSceneWaitingRoom()
    {
        currentState.Value = State.WaitingScene;
        LoadNetworkScene();
    }

    /*
     *  Cargamos la escena asignada a CurrentState
     */
    private void LoadNetworkScene()
    {
        Time.timeScale = 1;
        NetworkManager.Singleton.SceneManager.LoadScene(currentState.Value.ToString(),
            LoadSceneMode.Single);
    }

    /*
     *  Cerramos la aplicacion
     */
    public void Quit()
    {
        Application.Quit();
    }
}
