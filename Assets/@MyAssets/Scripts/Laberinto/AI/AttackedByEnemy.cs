using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class AttackedByEnemy : NetworkBehaviour
{
    public GameObject spawnRunner; // Referencia al punto de inicio SpawnRunner

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Enemy"))
        {
            MoveToSpawnPointServerRpc();
        }
    }

    [ServerRpc]
    private void MoveToSpawnPointServerRpc()
    {
        MoveToSpawnPointClientRpc(spawnRunner.transform.position, spawnRunner.transform.rotation);
    }

    [ClientRpc]
    private void MoveToSpawnPointClientRpc(Vector3 newPosition, Quaternion newRotation)
    {
        if (IsOwner)
        {
            transform.position = newPosition;
            transform.rotation = newRotation;
        }
    }
}
