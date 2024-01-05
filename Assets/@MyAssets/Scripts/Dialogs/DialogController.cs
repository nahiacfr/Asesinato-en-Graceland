using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DialogController : MonoBehaviour
{
    Dialog[] dialogs;

    public TextMeshProUGUI texto;
    public TextMeshProUGUI opcionA;
    public TextMeshProUGUI opcionB;
    public TextMeshProUGUI opcionC;
    public TextMeshProUGUI opcionD;
    public GameObject dialogReader;

    public Dialog actualDialog;
    // Start is called before the first frame update
    void Start()
    {
        //dialogs = dialogReader.GetComponent<DialogReader>().getdialogDic(this.GetComponentInParent<Transform>().gameObject.name);
        //InitDialogs();
    }

    public void InitDialogs(Dialog[] dialogsAux)
    {
        dialogs = dialogsAux;
        if (dialogs == null)
        {
            texto.text = "Texto prueba null";
        }
        actualDialog = dialogs[0];
        fillPanelByCode(actualDialog.getcodigo());
    }

    public void fillPanelByCode(string codigo)
    {

        actualDialog = findDialogByCode(codigo);
        texto.text = actualDialog.getTexto();

        opcionA.text = actualDialog.getRespuestas()[0,0];
        opcionB.text = actualDialog.getRespuestas()[1,0];
        opcionC.text = actualDialog.getRespuestas()[2,0];
        opcionD.text = actualDialog.getRespuestas()[3,0];
    }

    public void fillPanel(int opcion)
    {

        switch (opcion)
        {
            case 1:
                fillPanelByCode(actualDialog.getRespuestas()[0,1]);
                break;
            case 2:
                fillPanelByCode(actualDialog.getRespuestas()[1,1]);
                break;
            case 3:
                fillPanelByCode(actualDialog.getRespuestas()[2,1]);
                break;
            case 4:
                fillPanelByCode(actualDialog.getRespuestas()[3,1]);
                break;
            default:
                texto.text = "Texto prueba 3";
                break;
        }
        
    }

    private Dialog findDialogByCode(string code)
    {
        foreach (Dialog dialog in dialogs)
        {
            if(string.Equals(dialog.getcodigo(), code)) return dialog;
        }
        texto.text = "No Nuevo dialogo";
        return actualDialog;
    }


}
