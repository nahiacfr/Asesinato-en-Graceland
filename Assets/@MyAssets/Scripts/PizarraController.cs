using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PizarraController : MonoBehaviour
{
    public GameObject panelHint1;
    public GameObject panelHint2;
    public GameObject panelHint3;
    public GameObject panelHint4;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Apuntar(int num)
    {
        if(num == 1)
        {
            panelHint1.SetActive(true);
        }else if(num == 2)
        {
            panelHint2.SetActive(true);
        }else if(num == 3)
        {
            panelHint3.SetActive(true);
        }else if(num == 4)
        {
            panelHint4.SetActive(true);
        }
    }
}
