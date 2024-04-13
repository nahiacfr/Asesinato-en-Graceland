using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;

public class StartOL : NetworkBehaviour
{
    [SerializeField] Button selectPlayerButton;

    // Start is called before the first frame update
    void Start()
    {
        selectPlayerButton.onClick.AddListener(Connect);
    }

    public void Connect()
    {
        LabGameManager.Instance.StartSelection();
    }
}
