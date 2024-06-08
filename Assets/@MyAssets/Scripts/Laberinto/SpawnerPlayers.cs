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
        if (!IsOwner) return; // Asegúrate de que solo el propietario ejecute esta lógica

        if (CompareTag("Controller"))
        {
            MovePlayerServerRpc(spawnController.transform.position, spawnController.transform.rotation);
        }
        else if (CompareTag("Runner"))
        {
            MovePlayerServerRpc(spawnRunner.transform.position, spawnRunner.transform.rotation);
        }
    }

    [ServerRpc]
    private void MovePlayerServerRpc(Vector3 newPosition, Quaternion newRotation)
    {
        MovePlayerClientRpc(newPosition, newRotation);
        DestroyObjectServerRpc();
    }

    [ClientRpc]
    private void MovePlayerClientRpc(Vector3 newPosition, Quaternion newRotation)
    {
        transform.position = newPosition;
        transform.rotation = newRotation;
    }

    [ServerRpc]
    private void DestroyObjectServerRpc()
    {
        Destroy(gameObject);
    }
}
