using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndGame : MonoBehaviour
{
    public GameObject culpable = null;
    public GameObject winVideo = null;
    public GameObject loseVideo = null;
    private static bool win = false; 

    void Start()
    {
        if (win)
        {
            loseVideo.SetActive(false);
            winVideo.SetActive(true);
        }
        else
        {
            loseVideo.SetActive(true);
            winVideo.SetActive(false);
        }
    }

    public void acuse(GameObject acusado)
    {
        if(acusado == culpable)
        {
            win = true;
            SceneManager.LoadScene("Lose");
        }
        else
        {
            win = false;
            SceneManager.LoadScene("Lose");
        }
    }
}
