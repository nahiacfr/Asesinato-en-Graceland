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
        Sophie.GetComponent<CharacterCanvas>().moveTo(SophieLocation);
        Amber.GetComponent<CharacterCanvas>().moveTo(AmberLocation);
        James.GetComponent<CharacterCanvas>().moveTo(JamesLocation);
        Megan.GetComponent<CharacterCanvas>().moveTo(MeganLocation);
        GetComponent<CharacterCanvas>().moveTo(WangLocation);
    }
}
