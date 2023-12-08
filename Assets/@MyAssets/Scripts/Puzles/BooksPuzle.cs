using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class BooksPuzle : MonoBehaviour
{
    public GameObject puzleManager;
    public XRSocketInteractor socketInteractor;
    public GameObject book;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, book))
        {
            puzleManager.GetComponent<PuzlesController>().LibroColocado();
        }
    }
}
