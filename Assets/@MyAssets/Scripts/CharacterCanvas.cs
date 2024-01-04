using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

public class CharacterCanvas : MonoBehaviour
{

    public GameObject canvasPersonaje = null;
    public GameObject rightRayInteractor = null;
    public GameObject leftRayInteractor = null;

    private void Start()
    {
        StartCoroutine(Wait(1));
        if(canvasPersonaje != null)
        {
            canvasPersonaje.SetActive(false);
        }
        if (rightRayInteractor != null)
        {
            rightRayInteractor.SetActive(false);
            leftRayInteractor.SetActive(false);
        }
    }

    private void Update()
    {
        if (GetComponent<NavMeshAgent>().remainingDistance > 1)
        {
            Walk();
        }
        else
        {
            Stop();
        }
    }

    private void Stop()
    {
        GetComponent<Animator>().SetTrigger("Stand");
    }

    private void Walk()
    {
        GetComponent<Animator>().SetTrigger("Walk");
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            if(canvasPersonaje != null)
            {
                canvasPersonaje.SetActive(true);
                this.GetComponent<Animator>().SetTrigger("Salute");
                this.gameObject.transform.LookAt(other.transform.position);
            }
            
            //GetComponentInChildren<DialogController>().fillPanel(1);

            if (rightRayInteractor!=null)
            {
                rightRayInteractor.SetActive(true);
                leftRayInteractor.SetActive(true);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            if (canvasPersonaje != null)
            {
                canvasPersonaje.SetActive(false);
                this.gameObject.transform.LookAt(other.transform.position);
            }
            if (rightRayInteractor != null)
            {
                rightRayInteractor.SetActive(false);
                leftRayInteractor.SetActive(false);
            }
        }
    }

    IEnumerator Wait(float seconds)
    {
        yield return new WaitForSeconds(seconds);
    }

    public void moveTo(Transform destination)
    {
        GetComponent<NavMeshAgent>().destination = destination.position;
    }
}
