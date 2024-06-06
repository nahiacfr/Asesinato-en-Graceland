using GLTF.Schema;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class IAEnemigo : MonoBehaviour
{
    public Animator anim;
    public List<Transform> checkPointList;
    public Transform player;

    Transform actualP;
    int cpIndex = 0;

    void Start()
    {
        NextCheckPoint();
        anim.SetTrigger("Walk");
    }

    void Update()
    {
        if(GetComponent<NavMeshAgent>().remainingDistance < 0.5)
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
