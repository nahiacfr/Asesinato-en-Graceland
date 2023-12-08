using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class WeaponPuzle : MonoBehaviour
{
    public GameObject puzleManager;
    public XRSocketInteractor socketInteractor;
    public GameObject weapon;

    private bool analazingWeapon;
    // Start is called before the first frame update
    void Start()
    {
        analazingWeapon = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (puzleManager.GetComponent<PuzlesController>().socketCheck(socketInteractor, weapon) && analazingWeapon == false)
        {
            analazingWeapon = true;
            puzleManager.GetComponent<PuzlesController>().StartAnalizingWeapon();
        }
    }
}
