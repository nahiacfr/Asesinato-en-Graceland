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
        selectPlayerButton.onClick.AddListener(() =>
        {
            LabGameMannager.Instance.StartGame();
        });
        LabGameMannager.Instance.ClientDisconnected.AddListener(() => StartCoroutine(ClientQuit()));
    }   

    private IEnumerator ClientQuit()
    {
        yield return null;
    }

    public override void OnDestroy()
    {
        LabGameMannager.Instance.ClientDisconnected.RemoveListener(() => StartCoroutine(ClientQuit()));
        base.OnDestroy();
    }
}
