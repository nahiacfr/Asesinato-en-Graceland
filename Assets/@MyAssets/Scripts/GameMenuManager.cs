using UnityEngine;
using UnityEngine.InputSystem;

public class GameMenuManager : MonoBehaviour
{
    public Transform head;
    public float spawnDistance = 4f;
    public GameObject menu;
    public InputActionProperty showButton;
    public GameObject rightRay;
    public GameObject leftRay;

    private bool menuActive = false;

    void Start()
    {
        menu.SetActive(false);
        rightRay.SetActive(false);
        leftRay.SetActive(false);
    }

    void Update()
    {
        if (showButton.action.WasPressedThisFrame())
        {
            menuActive = !menuActive;

            menu.SetActive(menuActive);
            rightRay.SetActive(menuActive);
            leftRay.SetActive(menuActive);

            if (menuActive)
            {
                Vector3 spawnPosition = head.position + head.forward * spawnDistance;
                menu.transform.position = new Vector3(spawnPosition.x, menu.transform.position.y, spawnPosition.z);

                menu.transform.LookAt(new Vector3(head.position.x, menu.transform.position.y, head.position.z));
                menu.transform.forward *= -1;
            }
        }
    }
}
