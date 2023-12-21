using UnityEngine;
using UnityEngine.SceneManagement;

public class PantallaCarga : MonoBehaviour
{
    public string nombreEscena = "Main";

    public float tiempoEspera = 3.0f;

    void Start()
    {
        Invoke("CargarEscenaPrincipal", tiempoEspera);
    }

    void CargarEscenaPrincipal()
    {
        SceneManager.LoadScene(nombreEscena);
    }
}
