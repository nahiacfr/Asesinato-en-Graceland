using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

public class Crono : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textoCrono;
    [SerializeField] private float tiempo;
    [SerializeField] private GameObject tiempoTerminado;

    bool iniciaCrono = false;

    private int tiempoMinutos, tiempoSegundos, tiempoDecimasSegundo;

    void Cronometro()
    {
        if (iniciaCrono)
        {
            tiempo -= Time.deltaTime;
        }

        tiempoMinutos = Mathf.FloorToInt(tiempo / 60);
        tiempoSegundos = Mathf.FloorToInt(tiempo % 60);
        tiempoDecimasSegundo = Mathf.FloorToInt((tiempo % 1) * 100);

        textoCrono.text = string.Format("{0:00}:{1:00}:{2:00}", tiempoMinutos, tiempoSegundos, tiempoDecimasSegundo);

        if (tiempo <= 0)
        {
            tiempo = 0;
            tiempoTerminado.SetActive(true);

            SceneManager.LoadScene("Lose");
        }
    }

    void Update()
    {
        if (iniciaCrono)
        {
            Cronometro();
        }
    }

    public void IniciarCronometro()
    {
        iniciaCrono = true;
    }
}
