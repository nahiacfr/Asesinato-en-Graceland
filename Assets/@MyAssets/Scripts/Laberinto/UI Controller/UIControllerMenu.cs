using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using Unity.Netcode;
using UnityEngine;
using UnityEngine.UI;

public class UIControllerMenu : NetworkBehaviour
{
    public Button hostButton;
    public Button clientButton;

    private void Start()
    {
        hostButton.onClick.AddListener(OnHostButtonClicked);
        clientButton.onClick.AddListener(OnClientButtonClicked);
    }

    public void OnHostButtonClicked()
    {
        LabGameManager.Instance.StartAsHost();
    }

    public void OnClientButtonClicked()
    {
        LabGameManager.Instance.StartAsClient();
    }
}
