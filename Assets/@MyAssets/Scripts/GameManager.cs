using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using Unity.Netcode;

public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
            return;
        }

        Instance = this;
        DontDestroyOnLoad(gameObject);

        NetworkManager.Singleton.OnClientDisconnectCallback += NetworkManager_OnClientDisconnected;
    }

    private void OnDestroy()
    {
        NetworkManager.Singleton.OnClientDisconnectCallback -= NetworkManager_OnClientDisconnected;
    }

    public void StartAsHost()
    {
        NetworkManager.Singleton.StartHost();
        SceneManager.LoadScene("WaitingScene");
    }

    public void StartAsClient()
    {
        NetworkManager.Singleton.StartClient();
        SceneManager.LoadScene("WaitingScene");
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void LoadMainScene()
    {
        SceneManager.LoadScene("LaOscuridadEnElLaberinto");
    }

    private void NetworkManager_OnClientDisconnected(ulong _clientID)
    {
        switch (currentState.Value)
        {
            case State.Init:
                ClientDisconnected.Invoke();
                break;
            case State.SelectPlayer:
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
            case State.Main:
                LoadInitialMenu();
                break;
        }
    }
}
