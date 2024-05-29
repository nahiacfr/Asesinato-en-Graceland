using UnityEngine;
using Unity.Netcode;
using UnityEngine.Networking;

public class WaitingSceneController : NetworkBehaviour
{
    public GameObject playerPrefab;
    //jugador laberinto
    public Vector3 player1SpawnPoint = new Vector3(3.6f, -19.31f, 10.80f);
    //jugador parte de arriba
    public Vector3 player2SpawnPoint = new Vector3(3.61f, 6.89f, 10.80f);

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
                SpawnPlayers();
                GameManager.Instance.LoadMainScene();
            }
        }
    }

    private void SpawnPlayers()
    {
        GameObject player1 = Instantiate(playerPrefab, player1SpawnPoint, Quaternion.identity);
        var player1NetworkObject = player1.GetComponent<NetworkObject>();
        player1NetworkObject.Spawn();

        GameObject player2 = Instantiate(playerPrefab, player2SpawnPoint, Quaternion.identity);
        var player2NetworkObject = player2.GetComponent<NetworkObject>();
        player2NetworkObject.Spawn();
    }
}

