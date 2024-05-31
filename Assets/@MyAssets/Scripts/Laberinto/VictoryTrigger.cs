using UnityEngine;

public class VictoryTrigger : MonoBehaviour
{
    [SerializeField] private GameObject trofeoPrefab;
    [SerializeField] private ParticleSystem confetti1;
    [SerializeField] private ParticleSystem confetti2;
    [SerializeField] private AudioSource victorySound;

    private Vector3 playerNewPosition = new Vector3(3.610956f, 6.89674f, 10.80618f);
    private Vector3 trofeoPosition = new Vector3(3.610956f, 6.89674f, 5.4f);

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {

            other.transform.position = playerNewPosition;

            Instantiate(trofeoPrefab, trofeoPosition, Quaternion.identity);

            confetti1.gameObject.SetActive(true);
            confetti2.gameObject.SetActive(true);

            confetti1.Play();
            confetti2.Play();

            if (victorySound != null)
            {
                victorySound.Play();
            }
        }

    }
}

