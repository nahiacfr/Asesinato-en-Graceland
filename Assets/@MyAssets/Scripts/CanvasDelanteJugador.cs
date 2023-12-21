using UnityEngine;

public class CanvasDelanteJugador : MonoBehaviour
{
    public Transform personaje;
    public Vector3 offset = new Vector3(0f, 1f, 0f);

    void Update()
    {
        if (personaje != null)
        {
            Vector3 posicionPersonaje = personaje.position + offset;
            transform.position = Camera.main.WorldToScreenPoint(posicionPersonaje);
        }
    }
}
