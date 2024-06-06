using System;
using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
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

    [SerializeField] Transform hostSpawnPoint;
    [SerializeField] Transform clientSpawnPoint;

    public NetworkVariable<bool> redDoor = new NetworkVariable<bool>(false);
    public NetworkVariable<bool> blueDoor = new NetworkVariable<bool>(false);

    public enum State
    {
        Menu = 0,
        WaitingScene = 1,
        LaOscuridadEnElLaberinto = 2,
        Basic = 3
    }

    private NetworkVariable<State> currentState = new NetworkVariable<State>();

    private Dictionary<ulong, bool> playerReadyDictionary;

    private GameObject[] redDoors, blueDoors;

    private void Awake()
    {
        NetworkManager[] networkManagers = FindObjectsOfType<NetworkManager>();
        if (networkManagers.Length > 1)
            Destroy(networkManagers[1].gameObject);
        else
        {
            NetworkManager.Singleton.ConnectionApprovalCallback += NetworkManager_ConnectionApproval;
            NetworkManager.Singleton.OnClientDisconnectCallback += NetworkManager_OnClientDisconnected;
        }

        if (Instance != null && Instance != this)
            Destroy(gameObject);
        else
            Instance = this;

        DontDestroyOnLoad(gameObject);
        currentState.Value = State.Menu;

        selectedPlayer = new NetworkVariable<PlayerData>();

        redDoor.OnValueChanged += ChangeRedDoors;
        blueDoor.OnValueChanged += ChangeBlueDoors;
    }

    private void ChangeBlueDoors(bool previousValue, bool newValue)
    {
        ChangeDoors("Blue");
    }

    private void ChangeRedDoors(bool previousValue, bool newValue)
    {
        Debug.Log("ChangeRedDoors");
        ChangeDoors("Red");
    }

    private void ChangeDoors(String color)
    {
        if (color == "Red")
        {
            Debug.Log("ChangeDoors - Red");
            foreach (GameObject door in redDoors)
            {
                door.SetActive(false);
                Debug.Log("Red door false");
            }
            foreach (GameObject door in blueDoors)
            {
                door.SetActive(true);
                Debug.Log("Blue door true");
            }
        }
        else if (color == "Blue")
        {
            foreach (GameObject door in redDoors)
            {
                door.SetActive(true);
                Debug.Log("Red door true");
            }
            foreach (GameObject door in blueDoors)
            {
                door.SetActive(false);
                Debug.Log("Blue door false");
            }
        }
    }

    private void Start()
    {
        ResetVariables();
        //StartAsClient();
        StartAsHost();
        chargeDoors();
    }

    public void StartAsHost()
    {
        NetworkManager.Singleton.StartHost();
        LoadSceneWaitingRoom();
    }

    public void StartAsClient()
    {
        NetworkManager.Singleton.StartClient();
        LoadSceneWaitingRoom();
    }

    public void StartGame()
    {
        LoadSceneGame();
    }

    private void NetworkManager_ConnectionApproval(NetworkManager.ConnectionApprovalRequest connectionApprovalRequest, NetworkManager.ConnectionApprovalResponse connectionApprovalResponse)
    {
        if (NetworkManager.Singleton.ConnectedClientsIds.Count >= MAX_PLAYER_AMOUNT)
        {
            connectionApprovalResponse.Approved = false;
            return;
        }
        connectionApprovalResponse.Approved = true;
    }

    private void ResetVariables()
    {
        playerReadyDictionary = new Dictionary<ulong, bool>();
        selectedPlayer.Value = new PlayerData
        {
            type = -1
        };
    }

    public void LoadInitialMenu()
    {
        NetworkManager.Singleton.Shutdown();
        LoadSceneMenu();
    }

    public void SpawnPlayers()
    {
        GameObject playerGO;
        foreach (ulong id in NetworkManager.Singleton.ConnectedClientsIds)
        {
            if (id == selectedPlayer.Value.playerId)
            {
                if (selectedPlayer.Value.type == 0)
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
        selectedPlayer.Value = new PlayerData
        {
            playerId = _params.Receive.SenderClientId,
            type = _left ? 0 : 1
        };

        playerReadyDictionary[_params.Receive.SenderClientId] = true;

        if (NetworkManager.Singleton.ConnectedClientsIds.Count < MAX_PLAYER_AMOUNT)
            return;

        bool allClientsReady = true;
        foreach (ulong clientId in NetworkManager.Singleton.ConnectedClientsIds)
        {
            if (!playerReadyDictionary.ContainsKey(clientId) || !playerReadyDictionary[clientId])
            {
                allClientsReady = false;
                break;
            }
        }

        if (allClientsReady)
        {
            StartGame();
        }
    }

    private void NetworkManager_OnClientDisconnected(ulong _clientID)
    {
        switch (currentState.Value)
        {
            case State.Menu:
                ClientDisconnected.Invoke();
                break;
            case State.WaitingScene:
                if (_clientID == NetworkManager.ServerClientId)
                {
                    LoadInitialMenu();
                }
                else
                {
                    if (selectedPlayer.Value.type != -1 && selectedPlayer.Value.playerId == _clientID)
                    {
                        selectedPlayer.Value = new PlayerData
                        {
                            type = -1
                        };
                    }
                }
                break;
            case State.LaOscuridadEnElLaberinto:
                LoadInitialMenu();
                break;
        }
    }

    public void SpawnPlayer2(float hostX, float hostY, float clientX, float clientY)
    {
        Vector3 spawnPosition;

        if (NetworkManager.Singleton.IsHost)
        {
            spawnPosition = new Vector3(hostX, hostY, 1);
        }
        else
        {
            spawnPosition = new Vector3(clientX, clientY, -1);
        }

        UnityEngine.Object.Instantiate(leftPlayerPrefab, spawnPosition, Quaternion.identity);
    }

    private void LoadSceneMenu()
    {
        if (!NetworkManager.Singleton.IsHost)
            return;
        currentState.Value = State.Menu;
        LoadNetworkScene();
    }

    private void LoadSceneGame()
    {
        if (!NetworkManager.Singleton.IsHost)
            return;
        currentState.Value = State.LaOscuridadEnElLaberinto;
        StartCoroutine(WaitAndLoad());
    }

    IEnumerator WaitAndLoad()
    {
        yield return new WaitForSeconds(1);
        LoadNetworkScene();
    }

    private void LoadSceneWaitingRoom()
    {
        if (!NetworkManager.Singleton.IsHost)
            return;
        currentState.Value = State.WaitingScene;
        LoadNetworkScene();
    }

    private void LoadNetworkScene()
    {
        Time.timeScale = 1;
        NetworkManager.Singleton.SceneManager.LoadScene(currentState.Value.ToString(), LoadSceneMode.Single);
    }

    public void Quit()
    {
        Application.Quit();
    }

    public void OpenCloseDoors(String color)
    {
        if (!IsHost) return;
        if (color == "Red")
        {
            redDoor.Value = true;
            blueDoor.Value = false;
        }
        else if (color == "Blue")
        {
            redDoor.Value = false;
            blueDoor.Value = true;
        }
    }

    public void chargeDoors()
    {
        redDoors = GameObject.FindGameObjectsWithTag("RedDoor");
        blueDoors = GameObject.FindGameObjectsWithTag("BlueDoor");
    }
}
