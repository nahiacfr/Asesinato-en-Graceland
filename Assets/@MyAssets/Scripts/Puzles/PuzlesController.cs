using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.XR.CoreUtils;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

public class PuzlesController : MonoBehaviour
{
    public int numLibros;
    public GameObject libreria;
    public GameObject phoneCanvasButon;
    public GameObject phoneCanvasButon2;
    private int counter;
    private int counter2;
    public TextMeshProUGUI textCounter;
    public TextMeshProUGUI textCounter2;
    private Vector3 libreriaMoveLocation;

    // Start is called before the first frame update
    void Start()
    {
        libreriaMoveLocation = new Vector3(libreria.transform.position.x + 3, libreria.transform.position.y, libreria.transform.position.z);
        counter = 0;
        counter2 = 0;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool socketCheck(XRSocketInteractor socketInteractor, GameObject objectToVerify)
    {
        IXRSelectInteractable objName = socketInteractor.GetOldestInteractableSelected();
        if (objName.transform.name == objectToVerify.name)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public void LibroColocado()
    {
        
        numLibros--;
        if (numLibros <= 0)
        {
            Puzle3Solve();
        }
    }

    public void StartChargePhone()
    {
        ChargingPhone();
    }

    private void ChargingPhone()
    {
        counter++;
        textCounter.text = counter.ToString();
        if (counter >= 5)
        {
            PhoneCharged();
        }
        else
        {
            Invoke("ChargingPhone", 5f);
        }
    }

    private void PhoneCharged()
    {
        phoneCanvasButon.SetActive(true);
    }

    private void Puzle3Solve()
    { 
        libreria.GetComponent<Rigidbody>().MovePosition(libreriaMoveLocation);
    }

    public void StartAnalizingWeapon()
    {
        AnalizeWeapon();
    }

    private void AnalizeWeapon()
    {
        counter2++;
        textCounter2.text = counter2.ToString();
        if (counter2 >= 10)
        {
            weaponAnalized();
        }
        else
        {
            Invoke("AnalizeWeapon", 2f);
        }
    }

    private void weaponAnalized()
    {
        phoneCanvasButon2.SetActive(true);
    }
}
