using GLTF.Schema;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IAEnemigo : MonoBehaviour
{
    NavMeshAgent agent;
    public Animator anim;
    State currentState;

    Transform actualP;
    public Transform p1;
    public Transform p2;
    public Transform player;

    void Start()
    {
        //agent = GetComponent<NavMeshAgent>();
        //anim = GetComponent<Animator>();
        //currentState = new Idle(gameObject, agent, anim, player);
        actualP = p1;
        GetComponent<NavMeshAgent>().destination = actualP.transform.position;
        anim.SetTrigger("Walk");
    }

    void Update()
    {
        //currentState = currentState.Process();
    }
}
