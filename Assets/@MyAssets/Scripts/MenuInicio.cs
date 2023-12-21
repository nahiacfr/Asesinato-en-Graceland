using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuInicio : MonoBehaviour
{
    public GameObject panelInicio;
    public GameObject panelInstrucciones;
    public GameObject panelControles;

    public void IniciarJuego()
    {
        SceneManager.LoadScene("Loading");
    }

    public void MostrarInstrucciones()
    {
        panelInicio.SetActive(false);
        panelInstrucciones.SetActive(true);
        panelControles.SetActive(false);
    }

    public void MostrarControles()
    {
        panelInicio.SetActive(false);
        panelInstrucciones.SetActive(false);
        panelControles.SetActive(true);
    }

    public void VolverAlInicio()
    {
        panelInstrucciones.SetActive(false);
        panelControles.SetActive(false);
        panelInicio.SetActive(true);
    }

    public void SalirJuego()
    {
        Application.Quit();
    }
}
