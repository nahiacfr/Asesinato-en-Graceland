using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Acuse : MonoBehaviour
{
    public GameObject Brian;
    public Transform BrianLocation;
    public GameObject Sophie;
    public Transform SophieLocation;
    public GameObject Amber;
    public Transform AmberLocation;
    public GameObject James;
    public Transform JamesLocation;
    public GameObject Megan;
    public Transform MeganLocation;
    public Transform WangLocation;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AcuseSomebody()
    {
        Brian.GetComponent<CharacterCanvas>().moveTo(BrianLocation);
        Brian.GetComponent<CharacterCanvas>().detention = true;
        Sophie.GetComponent<CharacterCanvas>().moveTo(SophieLocation);
        Sophie.GetComponent<CharacterCanvas>().detention = true;
        Amber.GetComponent<CharacterCanvas>().moveTo(AmberLocation);
        Amber.GetComponent<CharacterCanvas>().detention = true;
        James.GetComponent<CharacterCanvas>().moveTo(JamesLocation);
        James.GetComponent<CharacterCanvas>().detention = true;
        Megan.GetComponent<CharacterCanvas>().moveTo(MeganLocation);
        Megan.GetComponent<CharacterCanvas>().detention = true;
        GetComponent<CharacterCanvas>().moveTo(WangLocation);
    }
}
