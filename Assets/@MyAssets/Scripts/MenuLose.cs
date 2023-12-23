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
            UnityEditor.EditorApplication.isPlaying = false; // Detiene la reproducción en el Editor de Unity
#else
        Application.Quit();
#endif
    }
}
