using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LaberintoDoorController : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        LabGameManager.Instance.chargeDoors();
        Debug.Log("Start Door");
        StartCoroutine( WaitAndLoadRed());
        StartCoroutine(WaitAndLoadBlue());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator WaitAndLoadRed()
    {
        yield return new WaitForSeconds(2);
        OpenDoors("Red");
    }

    IEnumerator WaitAndLoadBlue()
    {
        yield return new WaitForSeconds(5);
        OpenDoors("Blue");
    }

    public void OpenDoors(string color)
    {
        if (color == "Red")
        {
            Debug.Log("Red");
            LabGameManager.Instance.OpenCloseDoors("Red");
            Debug.Log("Red2");
        }
        else if (color == "Blue")
        {
            LabGameManager.Instance.OpenCloseDoors("Blue");
        }
        
    }
}
