using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class CharacterCanvas : MonoBehaviour
{

    public GameObject canvasPersonaje;
   
    private void Start()
    {
        canvasPersonaje.SetActive(false);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
           
            canvasPersonaje.SetActive(true);
            canvasPersonaje.transform.position = other.transform.position;
            canvasPersonaje.transform.rotation = other.transform.rotation;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            canvasPersonaje.SetActive(false);
        }
    }
}
