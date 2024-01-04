using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class WeaponPuzle : MonoBehaviour
{
    public GameObject puzleManager;
    public XRSocketInteractor socketInteractor;
    public GameObject trueWeapon;
    public GameObject falseWeapon1;
    public GameObject falseWeapon2;

    public bool analazingWeapon;

    private GameObject actualWeaponSocket;

    // Start is called before the first frame update
    void Start()
    {
        analazingWeapon = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, trueWeapon) && analazingWeapon == false)
        {
            analazingWeapon = true;
            actualWeaponSocket = trueWeapon;
            puzleManager.GetComponent<PuzlesController>().StartAnalizingWeapon(true, gameObject);
        }else if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, falseWeapon1) && analazingWeapon == false)
        {
            analazingWeapon = true;
            actualWeaponSocket = falseWeapon1;
            puzleManager.GetComponent<PuzlesController>().StartAnalizingWeapon(false, gameObject);
        }
        else if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, falseWeapon2) && analazingWeapon == false)
        {
            analazingWeapon = true;
            actualWeaponSocket = falseWeapon2;
            puzleManager.GetComponent<PuzlesController>().StartAnalizingWeapon(false, gameObject);
        }

        if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, actualWeaponSocket) == false && analazingWeapon == true)
        {
            analazingWeapon = false;
            puzleManager.GetComponent<PuzlesController>().analizingWeapon = false;
        }
    }
}
