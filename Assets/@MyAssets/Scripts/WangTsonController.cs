using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

public class WangTsonController : MonoBehaviour
{
    public GameObject player;
    public Transform pizarraLocation;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /*
        GetComponent<NavMeshAgent>().destination = player.transform.position;
        if (GetComponent<NavMeshAgent>().remainingDistance > 2)
        {
            Walk();
        }
        else
        {
            Stop();
        }
        */
    }

    private void Stop()
    {
        GetComponent<Animator>().SetTrigger("Stand");
    }

    private void Walk()
    {
        GetComponent<Animator>().SetTrigger("Walk");
    }

    private void OnTriggerEnter(Collider other)
    {
        transform.LookAt(other.transform.position);
    }

    public void ApuntarEnPizarra(int numPista)
    {
        //Animacion de caminar

        //Moverse hasta la pizarra

        //Actualizar la pizarra con la pista

    }
}
