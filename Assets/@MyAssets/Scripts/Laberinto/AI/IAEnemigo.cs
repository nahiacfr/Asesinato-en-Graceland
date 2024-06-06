using GLTF.Schema;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IAEnemigo : MonoBehaviour
{
    NavMeshAgent agent;
    Animator anim;
    State currentState;

    public List<Transform> checkPointList;
    public Transform player;

    Transform actualP;
    int cpIndex = 0;

    void Start()
    {
        anim = GetComponent<Animator>();
        NextCheckPoint();
        anim.SetTrigger("Walk");
        /*
        agent = GetComponent<NavMeshAgent>();
        currentState = new Idle(gameObject, agent, anim, player);
        */
    }

    void Update()
    {
        /*
        currentState = currentState.Process();
        */
        if (GetComponent<NavMeshAgent>().remainingDistance < 0.5)
        {
            NextCheckPoint();
        }
    }

    private void NextCheckPoint()
    {
        Debug.Log(checkPointList.Count);
        if(cpIndex >= checkPointList.Count -1)
        {
            cpIndex = 0;
        }
        else
        {
            cpIndex= cpIndex + 1;
        }
        actualP = checkPointList[cpIndex];
        GetComponent<NavMeshAgent>().destination = actualP.transform.position;
    }
}
