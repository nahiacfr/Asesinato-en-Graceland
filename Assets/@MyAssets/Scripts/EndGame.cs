using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndGame : MonoBehaviour
{

    public GameObject culpable = null;

    public GameObject winVideo;
    public GameObject loseVideo;

    public void acuse(GameObject acusado)
    {
        if(acusado == culpable)
        {
            loseVideo.SetActive(false);
            SceneManager.LoadScene("Lose");
            winVideo.SetActive(true);
        }
        else
        {
            SceneManager.LoadScene("Lose");
            loseVideo.SetActive(true);
        }
    }
}
