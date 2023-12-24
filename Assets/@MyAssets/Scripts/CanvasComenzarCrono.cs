using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasComenzarCrono : MonoBehaviour
{
    public Crono cronometroScript;
    public GameObject puertaBloqueada;

    public void ComenzarCrono()
    {
        if (cronometroScript != null)
        {
            cronometroScript.IniciarCronometro();
        }

        if (puertaBloqueada != null)
        {
            puertaBloqueada.SetActive(false);
        }
    }
}
