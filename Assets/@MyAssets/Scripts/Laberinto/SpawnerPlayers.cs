using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class SpawnerPlayers : NetworkBehaviour
{
    public GameObject spawnController; 
    public GameObject spawnRunner; 

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Jugador"))
        {
            if (gameObject.CompareTag("Controller"))
            {
                MovePlayer(other.gameObject, spawnController);
                Destroy(gameObject); 
            }
            else if (gameObject.CompareTag("Runner"))
            {
                MovePlayer(other.gameObject, spawnRunner);
                Destroy(gameObject); 
            }
        }
    }

    private void MovePlayer(GameObject player, GameObject spawnPoint)
    {
        if (player != null && spawnPoint != null)
        {
            player.transform.position = spawnPoint.transform.position;
            player.transform.rotation = spawnPoint.transform.rotation;
        }
        else
        {
            Debug.LogError("Player or spawn point is null.");
        }
    }
}

