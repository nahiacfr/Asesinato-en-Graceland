using UnityEngine;
using Unity.Netcode;

public class VictoryTrigger : NetworkBehaviour
{
    [SerializeField] private GameObject trofeo;
    [SerializeField] private ParticleSystem confetti1;
    [SerializeField] private ParticleSystem confetti2;
    [SerializeField] private AudioSource victorySound;
    [SerializeField] private AudioSource currentSound;
    [SerializeField] private Transform spawnController; // El punto de spawn al que moveremos al jugador

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Jugador") && IsServer)
        {
            var networkObject = other.GetComponent<NetworkObject>();
            if (networkObject != null)
            {
                MovePlayerToSpawnPoint(networkObject);
                ActivateEffectsAndSound();
            }
        }
    }

    private void MovePlayerToSpawnPoint(NetworkObject playerNetworkObject)
    {
        // Mueve al jugador en el servidor
        playerNetworkObject.transform.position = spawnController.position;
        playerNetworkObject.transform.rotation = spawnController.rotation;
    }

    [ClientRpc]
    private void ActivateEffectsAndSoundClientRpc()
    {
        // Activa y reproduce efectos visuales y de sonido en todos los clientes
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

    private void ActivateEffectsAndSound()
    {
        // Llama a un ClientRpc para activar efectos y sonido en todos los clientes
        ActivateEffectsAndSoundClientRpc();
    }
}
