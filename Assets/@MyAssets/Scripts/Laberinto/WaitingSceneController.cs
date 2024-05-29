using UnityEngine;
using Unity.Netcode;
using UnityEngine.Networking;

public class WaitingSceneController : NetworkBehaviour
{
    private void Start()
    {
        if (IsServer)
        {
            NetworkManager.Singleton.OnClientConnectedCallback += ClientConnected;
            NetworkManager.Singleton.OnClientDisconnectCallback += ClientDisconnected;
        }
    }

    public override void OnDestroy()
    {
        if (IsServer)
        {
            NetworkManager.Singleton.OnClientConnectedCallback -= ClientConnected;
            NetworkManager.Singleton.OnClientDisconnectCallback -= ClientDisconnected;
        }
    }

    private void ClientConnected(ulong clientId)
    {
        Debug.Log($"Client connected: {clientId}");
        CheckPlayersAndStartGame();
    }

    private void ClientDisconnected(ulong clientId)
    {
        Debug.Log($"Client disconnected: {clientId}");
        CheckPlayersAndStartGame();
    }

    private void CheckPlayersAndStartGame()
    {
        if (IsServer)
        {
            int connectedPlayers = NetworkManager.Singleton.ConnectedClientsList.Count;
            Debug.Log($"Connected players: {connectedPlayers}");

            if (connectedPlayers >= 2)
            {
                GameManager.Instance.LoadMainScene();
            }
        }
    }
}

