using System.Collections;
using System.Collections.Generic;

public class Dialog
{
    string persona;
    string codigo;
    string texto;
    string[,] respuestas;

    public Dialog(string persona, string codigo, string texto, string[,] respuestas)
    {
        this.persona = persona;
        this.codigo = codigo;
        this.texto = texto;
        this.respuestas = respuestas;
    }

    public string getPersona()
    {
        return this.persona;
    }

    public string getcodigo() 
    {
        return this.codigo;
    }

    public string getTexto()
    {
        return this.texto;
    }

    public string[,] getRespuestas()
    {
        return this.respuestas;
    }
}
