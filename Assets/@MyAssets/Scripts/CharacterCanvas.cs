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
        StartCoroutine(Wait(1));
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
            //GetComponentInChildren<DialogController>().fillPanel(1);

            if (rightRayInteractor!=null)
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

    IEnumerator Wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);
    }
}
