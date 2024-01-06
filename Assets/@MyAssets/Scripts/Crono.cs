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
    [SerializeField] TextMeshProUGUI textoSmith;
    [SerializeField] TextMeshProUGUI textoTrevor;

    public GameObject block;
    public GameObject block1;

    bool iniciaCrono = false;

    private int tiempoMinutos, tiempoSegundos, tiempoDecimasSegundo;

    void Cronometro()
    {
        if (iniciaCrono)
        {
            tiempo -= Time.deltaTime;
            block.SetActive(false);
            block1.SetActive(false);

            textoSmith.text = "Pase para dentro que tiene poco tiempo para investigar";
            textoTrevor.text = "El tiempo esta corriendo. Aligerando Jude, que ya tengo ganas de que te vayas de aquí. Es imposible que puedas resolver este caso a tiempo.";
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
