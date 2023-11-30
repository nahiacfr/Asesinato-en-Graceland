using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class TVController1 : MonoBehaviour
{
    public GameObject tvScreen;
    public AudioSource tvAudioSource;

    private bool isTVOn = false;

    private void Start()
    {
        tvScreen.SetActive(false);
        isTVOn = false;


        tvAudioSource.Stop();
        tvAudioSource.enabled = false;
    }

    public void ToggleTV()
    {
        isTVOn = !isTVOn;
        tvScreen.SetActive(isTVOn);


        if (isTVOn)
        {
            tvAudioSource.enabled = true;
            tvAudioSource.Play();
        }
        else
        {
            tvAudioSource.enabled = false;
            tvAudioSource.Stop();
        }
    }
}