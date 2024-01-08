using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class EndGame : MonoBehaviour
{
    public GameObject culpable = null;
    public GameObject winVideo = null;
    public GameObject loseVideo = null;
    private static bool win = false;

    private VideoPlayer winVideoPlayer;
    private VideoPlayer loseVideoPlayer;
    private AudioSource winVideoAudioSource;
    private AudioSource loseVideoAudioSource;

    void Start()
    {
        winVideoPlayer = winVideo.GetComponent<VideoPlayer>();
        loseVideoPlayer = loseVideo.GetComponent<VideoPlayer>();
        winVideoAudioSource = winVideo.GetComponent<AudioSource>();
        loseVideoAudioSource = loseVideo.GetComponent<AudioSource>();

        winVideoPlayer.Stop();
        loseVideoPlayer.Stop();
        winVideoAudioSource.Stop();
        loseVideoAudioSource.Stop();

        if (win)
        {
            loseVideo.SetActive(false);
            winVideo.SetActive(true);
            winVideoPlayer.Play();
        }
        else
        {
            loseVideo.SetActive(true);
            winVideo.SetActive(false);
            loseVideoPlayer.Play();
        }
    }

    public void acuse(GameObject acusado)
    {
        if (acusado == culpable)
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
