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
    public GameObject libro1;
    public GameObject libro2;
    public GameObject libro3;
    public GameObject canvasPista3;

    public GameObject phoneCanvasButon;
    public GameObject phoneCanvasButon2;
    private int counter;
    private int counter2;
    public TextMeshProUGUI textCounter;
    public TextMeshProUGUI textCounter2;

    private GameObject weaponToAnalize;
    private Vector3 libreriaMoveLocation;
    private bool weapon = false;
    public bool analizingWeapon = false;

    public bool puzle1 = false;
    public bool puzle2 = false;
    public bool puzle3 = false;

    // Start is called before the first frame update
    void Start()
    {
        libreriaMoveLocation = new Vector3(libreria.transform.position.x + 3, libreria.transform.position.y, libreria.transform.position.z);
        counter = 0;
        counter2 = 0;
        puzle1 = false;
        puzle2 = false;
        puzle3 = false;
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
        puzle2 = true;
    }

    private void Puzle3Solve()
    { 
        //libreria.GetComponent<Rigidbody>().MovePosition(libreriaMoveLocation);
        libreria.SetActive(false);
        libro1.SetActive(false);
        libro2.SetActive(false);
        libro3.SetActive(false);
        canvasPista3.SetActive(true);
        puzle3 = true;
    }

    public void StartAnalizingWeapon(bool weapon, GameObject weaponToAnalize)
    {
        this.weaponToAnalize = weaponToAnalize;
        this.weapon = weapon;
        this.analizingWeapon = true;
        counter2 = 0;
        textCounter2.text = counter2.ToString();
        AnalizeWeapon();
    }

    private void AnalizeWeapon()
    {
        if (analizingWeapon)
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
        else
        {
            counter2 = 0;
            textCounter2.text = counter2.ToString();
        }  
    }

    private void weaponAnalized()
    {
        if (weapon)
        {
            weaponToAnalize.GetComponent<WeaponPuzle>().analazingWeapon = false;
            phoneCanvasButon2.SetActive(true);
            puzle1= true;
        }
    }
}
