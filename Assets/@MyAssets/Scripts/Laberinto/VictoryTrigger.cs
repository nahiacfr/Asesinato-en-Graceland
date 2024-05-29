using UnityEngine;

public class VictoryTrigger : MonoBehaviour
{
    public GameObject victoryCanvas;


    void OnTriggerEnter(Collider other)
    {

        if (other.CompareTag("Player"))
        {

            victoryCanvas.SetActive(true);
        }
    }

}
