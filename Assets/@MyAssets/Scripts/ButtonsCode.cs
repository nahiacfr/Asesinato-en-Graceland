using UnityEngine;
using UnityEngine.UI;

public class ButtonsCode : MonoBehaviour
{
    public GameObject currentCanvas;
    public GameObject nextCanvas;
    public Button[] buttons;

    void Start()
    {
        currentCanvas.SetActive(true);
        nextCanvas.SetActive(false);
    }

    public void OnButtonClick()
    {
        currentCanvas.SetActive(false);
        nextCanvas.SetActive(true);
    }

}


