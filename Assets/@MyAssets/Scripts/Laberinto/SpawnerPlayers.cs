using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class SpawnerPlayers : NetworkBehaviour
{
    // Referencias a los objetos vacíos en la escena que se usarán como puntos de spawn
    public GameObject spawnPlayer1;
    public GameObject spawnPlayer2;

    void Awake()
    {
        if (IsServer)
        {
            SpawnPlayers();
        }
    }

    private void SpawnPlayers()
    {
        // Verifica si el jugador es Host o Client
        if (IsHost)
        {
            // Si es Host, mueve el jugador a la posición de spawnPlayer1
            GameObject player = NetworkManager.Singleton.LocalClient.PlayerObject.gameObject;
            player.transform.position = spawnPlayer1.transform.position;
            player.transform.rotation = spawnPlayer1.transform.rotation;
        }
        else if (IsClient)
        {
            // Si es Client, mueve el jugador a la posición de spawnPlayer2
            GameObject player = NetworkManager.Singleton.LocalClient.PlayerObject.gameObject;
            player.transform.position = spawnPlayer2.transform.position;
            player.transform.rotation = spawnPlayer2.transform.rotation;
        }
    }
}
