using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class MenuOptions : MonoBehaviour
{
    public GameObject menuCanvas;
    public GameObject controlsPanel;
    public GameObject principalPanel;
    public GameObject rightRay;
    public GameObject leftRay;

    public void OnReturnButtonClick()
    {
        menuCanvas.SetActive(false);
        rightRay.SetActive(false);
        leftRay.SetActive(false);
    }

    public void OnExitButtonClick()
    {
        SceneManager.LoadScene("MainMenu");
    }

    public void OnControlsButtonClick()
    {
        controlsPanel.SetActive(true);
        principalPanel.SetActive(false);
    }

    public void OnReturnButtonControlsClick()
    {
        controlsPanel.SetActive(false);
        principalPanel.SetActive(true);
    }
}
