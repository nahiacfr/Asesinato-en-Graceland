using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class DialogReader : MonoBehaviour
{
    public GameObject dialogBrian;
    void Start()
    {
        Dictionary<string, Dialog[]> dialogDicAux;

        TextAsset file = Resources.Load<TextAsset>("Dialogs.txt");
        string contenido = file.text;

        dialogDicAux = ReadFromTXT(contenido);

        dialogBrian.GetComponent<DialogController>().InitDialogs(dialogDicAux.GetValueOrDefault("Brian"));
    }

    private Dictionary<string, Dialog[]> ReadFromTXT(string data)
    {
        Dictionary<string, Dialog[]> dicFinal = new Dictionary<string, Dialog[]>();
        // Ruta del archivo de texto

        // Leer y mostrar línea por línea
        string[] lineas = data.Split("\r\n");
        string[] lineaAux;
        int indexRespuesta = 0;
        string[,] respuestasAux = { { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" } };
        List<Dialog> dialogList = new List<Dialog>();
        string personaAux = null;
        string codigoAux = null;
        string textoAux = null;
        foreach (string linea in lineas) 
        {

            lineaAux = linea.Split("#");

            switch (lineaAux[1])
            {
                case "N":
                    personaAux = lineaAux[2];
                    break;
                case "C":
                    codigoAux = lineaAux[2];
                    break;
                case "T":
                    textoAux = lineaAux[2];
                    break;
                case "R":
                    string[] lineaRespuesta;
                    lineaRespuesta = lineaAux[2].Split("||");
                    respuestasAux[indexRespuesta, 0] = lineaRespuesta[0];
                    respuestasAux[indexRespuesta, 1] = lineaRespuesta[1];
                    respuestasAux[indexRespuesta, 2] = lineaRespuesta[2];
                    respuestasAux[indexRespuesta, 3] = lineaRespuesta[3];
                    indexRespuesta++;
                    break;
                case "F":
                    Dialog dialogAux = new Dialog(personaAux, codigoAux, textoAux, respuestasAux);
                    indexRespuesta = 0;
                    string[,] respuestasAux2 = { { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" } };
                    respuestasAux = respuestasAux2;
                    dialogList.Add(dialogAux);
                    break;
                case "NEXT":
                    indexRespuesta = 0;
                    string[,] respuestasAux3 = { { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" }, { "", "", "", "" } };
                    respuestasAux = respuestasAux3;
                    dicFinal.Add(personaAux, dialogList.ToArray());
                    break;
                default:

                    break;
            }
        }

        return dicFinal;
    }


}
