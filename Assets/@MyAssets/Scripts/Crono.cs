using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.InputSystem;

public class Crono : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textoCrono;
    [SerializeField] private float tiempo;
    [SerializeField] private GameObject tiempoTerminado;

    bool tiempoDetenido;

    private int tiempoMinutos, tiempoSegundos, tiempoDecimasSegundo;

    void Cronometro()
    {
        if (!tiempoDetenido)
        {
            tiempo -= Time.deltaTime;
        }

        tiempoMinutos = Mathf.FloorToInt(tiempo / 60);
        tiempoSegundos = Mathf.FloorToInt(tiempo % 60);
        tiempoDecimasSegundo = Mathf.FloorToInt((tiempo % 1) * 100);

        textoCrono.text = string.Format("{0:00}:{1:00}:{2:00}", tiempoMinutos, tiempoSegundos, tiempoDecimasSegundo);

        if (tiempo <= 0)
        {
            tiempoDetenido = true;
            tiempo = 0;
            tiempoTerminado.SetActive(true);
        }
    }

    void Update()
    {
        Cronometro();
    }

    public void IniciarCronometro()
    {
        tiempoDetenido = false;
    }
}
