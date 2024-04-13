using System.Collections;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.SceneManagement;
using Unity.Netcode;

public class UIControllerMenu : MonoBehaviour
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
