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
    public Transform baseLocation;
    public GameObject pizarra;

    private int numeroPista;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        transform.LookAt(other.transform.position);
    }

    public void ApuntarEnPizarra(int numPista)
    {
        numeroPista = numPista;
        pizarra.GetComponent<PizarraController>().Apuntar(numeroPista);
    }

    private bool Arrive()
    {
        if (GetComponent<NavMeshAgent>().remainingDistance <= 0.5f)
        {
            return true;
        }
        else
        {
            Invoke("Arrive", 0.2f);
            return false;
        }
    }

    private void GoTo(Transform destination)
    {
        GetComponent<NavMeshAgent>().SetDestination(destination.position);
    }
}
