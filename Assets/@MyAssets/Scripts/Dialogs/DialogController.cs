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

    public GameObject coop1;
    public GameObject coop2;
    public GameObject coop3;
    public GameObject coop4;

    public GameObject nerv1;
    public GameObject nerv2;
    public GameObject nerv3;
    public GameObject nerv4;

    public int cooperatividad;
    public int nerviosismo;
    public GameObject puzleController;

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
        actualDialog = findDialogByCode(dialogVerifyer(codigo));
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
                ActualizarCooperatividad(0);
                ActualizarNerviosismo(0);
                fillPanelByCode(actualDialog.getRespuestas()[0, 1]);
                break;
            case 2:
                ActualizarCooperatividad(1);
                ActualizarNerviosismo(1);
                fillPanelByCode(actualDialog.getRespuestas()[1,1]);
                break;
            case 3:
                ActualizarCooperatividad(2);
                ActualizarNerviosismo(2);
                fillPanelByCode(actualDialog.getRespuestas()[2,1]);
                break;
            case 4:
                ActualizarCooperatividad(3);
                ActualizarNerviosismo(3);
                fillPanelByCode(actualDialog.getRespuestas()[3,1]);
                break;
            default:
                texto.text = "Texto prueba 3";
                break;
        }
        
    }

    private void ActualizarCooperatividad(int i)
    {
        if (actualDialog.getRespuestas()[i, 3] == "1")
        {
            cooperatividad++;
        }
        else if (actualDialog.getRespuestas()[i, 3] == "-1")
        {
            cooperatividad--;
        }
        switch (cooperatividad)
        {
            case 1:
                coop1.SetActive(true);
                coop2.SetActive(false);
                coop3.SetActive(false);
                coop4.SetActive(false);
                break;
            case 2:
                coop1.SetActive(true);
                coop2.SetActive(true);
                coop3.SetActive(false);
                coop4.SetActive(false);

                break;
            case 3:
                coop1.SetActive(true);
                coop2.SetActive(true);
                coop3.SetActive(true);
                coop4.SetActive(false);
                break;
            case 4:
                coop1.SetActive(true);
                coop2.SetActive(true);
                coop3.SetActive(true);
                coop4.SetActive(true);
                break;
            default:
                coop1.SetActive(true);
                coop2.SetActive(false);
                coop3.SetActive(false);
                coop4.SetActive(false);
                break;
        }
    }

    private void ActualizarNerviosismo(int i)
    {
        if (actualDialog.getRespuestas()[i, 4] == "1")
        {
            nerviosismo++;
        }
        else if (actualDialog.getRespuestas()[i, 4] == "-1")
        {
            nerviosismo--;
        }
        switch (nerviosismo)
        {
            case 1:
                nerv1.SetActive(true);
                nerv2.SetActive(false);
                nerv3.SetActive(false);
                nerv4.SetActive(false);
                break;
            case 2:
                nerv1.SetActive(true);
                nerv2.SetActive(true);
                nerv3.SetActive(false);
                nerv4.SetActive(false);
                break;
            case 3:
                nerv1.SetActive(true);
                nerv2.SetActive(true);
                nerv3.SetActive(true);
                nerv4.SetActive(false);
                break;
            case 4:
                nerv1.SetActive(true);
                nerv2.SetActive(true);
                nerv3.SetActive(true);
                nerv4.SetActive(true);
                break;
            default:
                nerv1.SetActive(true);
                nerv2.SetActive(false);
                nerv3.SetActive(false);
                nerv4.SetActive(false);
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

    private string dialogVerifyer(string codigo)
    {
        //Verificar el codigo
        //Si el codigo depende de la cooperacion
        if (codigo[0] == 'C')
        {
            if (codigo[2] == '+')
            {
                if (codigo[1] > cooperatividad)
                {
                    //Devuelve el codigo del dialogo si se cumple
                    return "0" + codigo[3] + codigo[4];
                }
                else
                {
                    //Devuelve el codigo del dialogo si no se cumple
                    return "0" + codigo[6] + codigo[7];
                }
            }
            else
            {
                if (codigo[1] < cooperatividad)
                {
                    //Devuelve el codigo del dialogo si se cumple
                    return "0" + codigo[3] + codigo[4];
                }
                else
                {
                    //Devuelve el codigo del dialogo si no se cumple
                    return "0" + codigo[6] + codigo[7];
                }
            }
        }
        //Si el codigo depende del Nerviosismo
        else if (codigo[0] == 'N')
        {
            if (codigo[2] == '+')
            {
                if (codigo[1] > nerviosismo)
                {
                    //Devuelve el codigo del dialogo si se cumple
                    return "0" + codigo[3] + codigo[4];
                }
                else
                {
                    //Devuelve el codigo del dialogo si no se cumple
                    return "0" + codigo[6] + codigo[7];
                }
            }
            else
            {
                if (codigo[1] < nerviosismo)
                {
                    //Devuelve el codigo del dialogo si se cumple
                    return "0" + codigo[3] + codigo[4];
                }
                else
                {
                    //Devuelve el codigo del dialogo si no se cumple
                    return "0" + codigo[6] + codigo[7];
                }
            }
        }
        //Si el codigo depende de los puzles
        else if (codigo[0] == 'P')
        {
            switch (codigo[1])
            {
                case '1':
                    if (puzleController.GetComponent<PuzlesController>().puzle1)
                    {
                        return "0" + codigo[3] + codigo[4];
                    }
                    break;
                case '2':
                    if (puzleController.GetComponent<PuzlesController>().puzle2)
                    {
                        return "0" + codigo[3] + codigo[4];
                    }
                    break;
                case '3':
                    if (puzleController.GetComponent<PuzlesController>().puzle3)
                    {
                        return "0" + codigo[3] + codigo[4];
                    }
                    break;
                default:
                    return "0" + codigo[6] + codigo[7];
            }
            return "0" + codigo[6] + codigo[7];
        }
        //Si no es especial
        else
        {
            return codigo;
        }
    }
}
