using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasComenzarCrono : MonoBehaviour
{
    private bool cronometroActivo;
    public Crono cronometroScript;

    void Start()
    {
        cronometroActivo = false;
    }

    public void ComenzarCrono()
    {
        cronometroActivo = true;
        if (cronometroScript != null)
        {
            cronometroScript.IniciarCronometro();
        }
    }
}
