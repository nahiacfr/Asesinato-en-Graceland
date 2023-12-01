using UnityEngine;

public class ActivarRayInteractors : MonoBehaviour
{
    public string jugadorTag = "Jugador";
    public GameObject rightRayInteractor;
    public GameObject leftRayInteractor; 

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(jugadorTag))
        {
            if (rightRayInteractor != null)
            {
                rightRayInteractor.SetActive(true);
            }
            if (leftRayInteractor != null)
            {
                leftRayInteractor.SetActive(true);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(jugadorTag))
        {
            if (rightRayInteractor != null)
            {
                rightRayInteractor.SetActive(false);
            }
            if (leftRayInteractor != null)
            {
                leftRayInteractor.SetActive(false);
            }
        }
    }
}
