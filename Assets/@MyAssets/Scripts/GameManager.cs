using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using Unity.Netcode;
using Unity.Networking.Transport;


public class GameManager : MonoBehaviour
{
    public static GameManager Instance { get; private set; }

    [SerializeField] private string ipAddress = "127.0.0.1"; // Dirección IP por defecto

    public enum State
    {
        Init,
        Main
    }

    private State currentState;

    public delegate void ClientDisconnectedDelegate();
    public event ClientDisconnectedDelegate ClientDisconnected;

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
        SetConnectionData(ipAddress);
        NetworkManager.Singleton.StartHost();
        SceneManager.LoadScene("WaitingScene");
    }

    public void StartAsClient()
    {
        SetConnectionData(ipAddress);
        NetworkManager.Singleton.StartClient();
        SceneManager.LoadScene("WaitingScene");
    }

    public void SetIPAddress(string newIPAddress)
    {
        ipAddress = newIPAddress;
    }

    private void SetConnectionData(string ip)
    {
        NetworkManager.Singleton.GetComponent<NetworkManager>().NetworkConfig.ConnectionData =
            new Unity.Networking.Transport.ConnectionEndPoint[]
            {
                new Unity.Networking.Transport.ConnectionEndPoint
                {
                    Address = ip
                }
            };
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
        switch (currentState)
        {
            case State.Init:
                ClientDisconnected?.Invoke();
                break;
            case State.Main:
                SceneManager.LoadScene("Menu");
                break;
        }
    }
}

