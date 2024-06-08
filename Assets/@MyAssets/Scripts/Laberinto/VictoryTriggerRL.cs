using UnityEngine;

public class VictoryTriggerRL : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Jugador"))
        {
            Application.Quit();
        }
    }
}
