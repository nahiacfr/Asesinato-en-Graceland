using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class AttackedByEnemy : NetworkBehaviour
{
    public GameObject spawnRunner; // Referencia al punto de inicio SpawnRunner

    private void OnTriggerEnter(Collider other)
    {
        if (!IsHost)
        {
            if (other.CompareTag("Enemy"))
            {
                transform.position = spawnRunner.transform.position;
            }
        }  
    }
}