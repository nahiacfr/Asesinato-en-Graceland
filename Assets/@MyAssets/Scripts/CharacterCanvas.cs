using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CharacterCanvas : MonoBehaviour
{

    public GameObject canvasPersonaje;
    public GameObject rightRayInteractor;
    public GameObject leftRayInteractor;

    private void Start()
    {
        canvasPersonaje.SetActive(false);
        rightRayInteractor.SetActive(false);
        leftRayInteractor.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {  
            canvasPersonaje.SetActive(true);
            rightRayInteractor.SetActive(true);
            leftRayInteractor.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            canvasPersonaje.SetActive(false);
            rightRayInteractor.SetActive(false);
            leftRayInteractor.SetActive(false);
        }
    }
}
