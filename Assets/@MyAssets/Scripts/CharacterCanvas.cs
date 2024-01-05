using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.AI;

public class CharacterCanvas : MonoBehaviour
{

    public GameObject canvasPersonaje = null;
    public GameObject canvasDetention = null;
    public GameObject rightRayInteractor = null;
    public GameObject leftRayInteractor = null;

    public bool detention = false;

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

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.GameObject().CompareTag("Jugador"))
        {
            if(canvasPersonaje != null && detention == false)
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
            if (canvasPersonaje != null && detention == false)
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
        canvasDetention.SetActive(true);
        GetComponent<NavMeshAgent>().destination = destination.position;
        GetComponent<NavMeshAgent>().speed = 1000;
        GetComponent<NavMeshAgent>().acceleration = 100;
    }
}