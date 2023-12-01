using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class GameMenuManager : MonoBehaviour
{
    public Transform head;
    public float spawnDistance = 4;
    public GameObject menu;
    public InputActionProperty showButoon;
    public GameObject rightRay;
    public GameObject leftRay;

    void Update()
    {
        if (showButoon.action.WasPressedThisFrame())
        {
            menu.SetActive(!menu.activeSelf);

            menu.transform.position = head.position + new Vector3(head.forward.x, 2, head.forward.z).normalized * spawnDistance;

            rightRay.SetActive(!rightRay.activeSelf);
            leftRay.SetActive(!leftRay.activeSelf);
        }

        menu.transform.LookAt(new Vector3(head.position.x, menu.transform.position.y, head.position.z));
        menu.transform.forward *= -1;
    }
}
