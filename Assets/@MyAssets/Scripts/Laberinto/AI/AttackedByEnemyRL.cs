using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackedByEnemyRL : MonoBehaviour
{
    // This method is called when another collider enters the trigger collider attached to this object
    void OnTriggerEnter(Collider other)
    {
        // Check if the object that triggered the event has the tag "enemy"
        if (other.CompareTag("Enemy"))
        {
            Application.Quit();
        }
    }
}
