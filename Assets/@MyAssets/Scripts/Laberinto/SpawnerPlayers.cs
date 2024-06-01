using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class SpawnerPlayers : NetworkBehaviour
{
    // Referencias a los objetos vacíos en la escena que se usarán como puntos de spawn
    public GameObject spawnPlayer1;
    public GameObject spawnPlayer2;

    private void Start()
    {
        if (IsServer)
        {
            Debug.Log("Server is setting up callbacks.");
            NetworkManager.Singleton.OnClientConnectedCallback += OnClientConnected;
        }
    }

    private void OnDestroy()
    {
        if (IsServer)
        {
            Debug.Log("Server is removing callbacks.");
            NetworkManager.Singleton.OnClientConnectedCallback -= OnClientConnected;
        }
    }

    private void OnClientConnected(ulong clientId)
    {
        Debug.Log($"Client connected: {clientId}");

        if (IsServer)
        {
            if (clientId == NetworkManager.Singleton.LocalClientId)
            {
                Debug.Log("This is the local client, skipping spawn.");
                return;
            }

            if (NetworkManager.Singleton.ConnectedClients.TryGetValue(clientId, out var networkClient))
            {
                GameObject spawnPoint = IsHost ? spawnPlayer1 : spawnPlayer2;
                SpawnPlayer(networkClient.PlayerObject, spawnPoint);
            }
            else
            {
                Debug.LogError($"Client {clientId} not found in ConnectedClients.");
            }
        }
    }

    public override void OnNetworkSpawn()
    {
        Debug.Log("OnNetworkSpawn called.");

        if (IsOwner)
        {
            Debug.Log("IsOwner is true.");
            GameObject spawnPoint = IsHost ? spawnPlayer1 : spawnPlayer2;
            transform.position = spawnPoint.transform.position;
            transform.rotation = spawnPoint.transform.rotation;
        }
        else
        {
            Debug.Log("IsOwner is false.");
        }
    }

    private void SpawnPlayer(NetworkObject playerObject, GameObject spawnPoint)
    {
        if (playerObject != null)
        {
            Debug.Log($"Moving player to spawn point {spawnPoint.name}.");
            playerObject.transform.position = spawnPoint.transform.position;
            playerObject.transform.rotation = spawnPoint.transform.rotation;
        }
        else
        {
            Debug.LogError("Player object is null.");
        }
    }
}
