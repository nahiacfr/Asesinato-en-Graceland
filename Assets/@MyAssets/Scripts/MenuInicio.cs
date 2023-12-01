using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuInicio : MonoBehaviour
{
    public GameObject panelInicio;
    public GameObject panelInstrucciones;

    public void IniciarJuego()
    {
        SceneManager.LoadScene("Main");
    }

    public void MostrarInstrucciones()
    {
        panelInicio.SetActive(false);
        panelInstrucciones.SetActive(true);
    }

    public void VolverAlInicio()
    {
        panelInstrucciones.SetActive(false);
        panelInicio.SetActive(true);
    }

    public void SalirJuego()
    {
        Application.Quit();

    }
}
