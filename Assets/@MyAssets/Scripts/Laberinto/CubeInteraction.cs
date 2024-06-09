using UnityEngine;

public class CubeInteraction : MonoBehaviour
{
    public string color; // Este es el color del cubo, "Red" o "Blue"

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("PlayerHand")) // Asegúrate de que la mano del jugador tenga el tag "PlayerHand"
        {
            Debug.Log("Player hand entered trigger with color: " + color);
            LaberintoDoorController doorController = FindObjectOfType<LaberintoDoorController>();
            if (doorController != null)
            {
                doorController.OpenDoors(color);
            }
        }
    }
}
