using UnityEngine;
using Unity.Netcode;

public class VictoryTrigger : NetworkBehaviour
{
    [SerializeField] private GameObject trofeo;
    [SerializeField] private ParticleSystem confetti1;
    [SerializeField] private ParticleSystem confetti2;
    [SerializeField] private Transform spawnController; // El punto de spawn al que moveremos al jugador
    [SerializeField] private AudioSource victorySound;
    [SerializeField] private AudioSource currentSound;

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Finish"))
        {
            MovePlayerToSpawnPoint();
            ActivateEffectsAndSound();
        }
    }

    private void MovePlayerToSpawnPoint()
    {
        // Mueve al jugador a la posición del spawnController
        transform.position = spawnController.position;
        transform.rotation = spawnController.rotation;
    }

    private void ActivateEffectsAndSound()
    {
        // Activa y reproduce efectos visuales y de sonido
        if (trofeo != null)
        {
            trofeo.SetActive(true);
        }

        if (confetti1 != null)
        {
            confetti1.gameObject.SetActive(true);
            confetti1.Play();
        }

        if (confetti2 != null)
        {
            confetti2.gameObject.SetActive(true);
            confetti2.Play();
        }

        if (victorySound != null)
        {
            victorySound.Play();
        }

        if (currentSound != null)
        {
            currentSound.Stop();
        }
    }
}
