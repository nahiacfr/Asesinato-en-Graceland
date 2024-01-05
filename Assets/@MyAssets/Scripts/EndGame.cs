using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class EndGame : MonoBehaviour
{
    public static string endText = null;

    public GameObject culpable = null;

    private string win = "Felicidades, has capturado al culpable";
    private string loseByTime = "Se te a acabado el tiempo";
    private string loseByChoice = "Has detenido a un inocente, el asesino a escapado";

    public TextMeshProUGUI texto = null;
    // Start is called before the first frame update
    void Start()
    {
        if (endText== null)
        {
            texto.text = loseByChoice;
        }
        else
        {
            texto.text = endText;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void acuse(GameObject acusado)
    {
        if(acusado == culpable)
        {
            endText = win;
            SceneManager.LoadScene("Lose");
        }
        else
        {
            endText = loseByChoice;
            SceneManager.LoadScene("Lose");
        }
    }
}
