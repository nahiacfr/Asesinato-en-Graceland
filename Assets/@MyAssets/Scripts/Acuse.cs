using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Acuse : MonoBehaviour
{
    public GameObject Brian;
    public Transform BrianLocation;
    public GameObject Sophie;
    public Transform SophieLocation;
    public GameObject Amber;
    public Transform AmberLocation;
    public GameObject James;
    public Transform JamesLocation;
    public GameObject Megan;
    public Transform MeganLocation;
    public Transform WangLocation;

    public GameObject actualDialog;
    public GameObject acuseDialog;
    public GameObject cantAcuseDialog;

    public GameObject puzlesController;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void WantToAcuse()
    {
        if (CanAcuse())
        {
            acuseDialog.SetActive(true);
            actualDialog.SetActive(false);
        }
        else
        {
            cantAcuseDialog.SetActive(true);
            actualDialog.SetActive(false);
        }
    }

    public void AcuseSomebody()
    {
        Brian.GetComponent<CharacterCanvas>().moveTo(BrianLocation);
        Brian.GetComponent<CharacterCanvas>().detention = true;
        Sophie.GetComponent<CharacterCanvas>().moveTo(SophieLocation);
        Sophie.GetComponent<CharacterCanvas>().detention = true;
        Amber.GetComponent<CharacterCanvas>().moveTo(AmberLocation);
        Amber.GetComponent<CharacterCanvas>().detention = true;
        James.GetComponent<CharacterCanvas>().moveTo(JamesLocation);
        James.GetComponent<CharacterCanvas>().detention = true;
        Megan.GetComponent<CharacterCanvas>().moveTo(MeganLocation);
        Megan.GetComponent<CharacterCanvas>().detention = true;
        GetComponent<CharacterCanvas>().moveTo(WangLocation);
    }

    public bool CanAcuse()
    {
        if(puzlesController.GetComponent<PuzlesController>().puzle1 && puzlesController.GetComponent<PuzlesController>().puzle2)
        {
            return true;
        }else if(puzlesController.GetComponent<PuzlesController>().puzle1 && puzlesController.GetComponent<PuzlesController>().puzle3)
        {
            return true;
        }else if(puzlesController.GetComponent<PuzlesController>().puzle1 && puzlesController.GetComponent<PuzlesController>().puzle4)
        {
            return true;
        }else if(puzlesController.GetComponent<PuzlesController>().puzle2 && puzlesController.GetComponent<PuzlesController>().puzle3 && puzlesController.GetComponent<PuzlesController>().puzle4)
        {
            return true;
        }
        return false;
    }
}
