using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CharacterCanvas : MonoBehaviour
{

    public GameObject canvasPersonaje;
    public GameObject rightRayInteractor = null;
    public GameObject leftRayInteractor = null;

    private void Start()
    {
        canvasPersonaje.SetActive(false);
        if (rightRayInteractor != null)
        {
            rightRayInteractor.SetActive(false);
            leftRayInteractor.SetActive(false);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {  
            canvasPersonaje.SetActive(true);

            if(rightRayInteractor!=null)
            {
                rightRayInteractor.SetActive(true);
                leftRayInteractor.SetActive(true);
                this.GetComponent<Animator>().SetTrigger("Salute");
            }
            this.gameObject.transform.LookAt(other.transform.position);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            canvasPersonaje.SetActive(false);
            if (rightRayInteractor != null)
            {
                rightRayInteractor.SetActive(false);
                leftRayInteractor.SetActive(false);
            }
            this.gameObject.transform.LookAt(other.transform.position);
        }
    }
}
