using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class PhonePuzle : MonoBehaviour
{
    public GameObject puzleManager;
    public XRSocketInteractor socketInteractor;
    public GameObject phone;

    private bool phoneCharging;
    // Start is called before the first frame update
    void Start()
    {
        phoneCharging= false;
    }

    // Update is called once per frame
    void Update()
    {
        if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, phone) && phoneCharging == false)
        {
            phoneCharging= true;
            puzleManager.GetComponent<PuzlesController>().StartChargePhone();
        }
    }
}
