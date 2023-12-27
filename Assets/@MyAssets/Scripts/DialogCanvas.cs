using TMPro;
using UnityEngine;
using UnityEngine.UI; // Añade esta línea para resolver el error

public class DialogCanvas : MonoBehaviour
{
    public TMP_Text text1;
    public TMP_Text text2;
    public ButtonGroup buttonGroup;
    public ButtonGroup buttonGroup1;

    public void OnButtonClick()
    {
        if (text1 != null)
        {
            text1.gameObject.SetActive(false);
        }

        if (text2 != null)
        {
            text2.gameObject.SetActive(true);
        }

        if (buttonGroup != null)
        {
            buttonGroup.DeactivateButtons();
        }

        if (buttonGroup1 != null)
        {
            buttonGroup1.ActivateButtons();
        }
    }
}

[System.Serializable]
public class ButtonGroup
{
    public Button[] buttons;

    public void ActivateButtons()
    {
        if (buttons != null)
        {
            foreach (Button button in buttons)
            {
                button.gameObject.SetActive(true);
            }
        }
    }

    public void DeactivateButtons()
    {
        if (buttons != null)
        {
            foreach (Button button in buttons)
            {
                button.gameObject.SetActive(false);
            }
        }
    }
}
