using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuLose : MonoBehaviour
{
    public void CargarMenu()
    {
        SceneManager.LoadScene("Menu");
    }

    public void SalirJuego()
    {
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false; // Detiene la reproducci�n en el Editor de Unity
#else
        Application.Quit();
#endif
    }
}
