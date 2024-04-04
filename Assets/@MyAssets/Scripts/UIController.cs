using System.Collections;
using UnityEngine;
using UnityEngine.UI;

using UnityEngine.SceneManagement;
using Unity.Netcode;

public class UIController : MonoBehaviour
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
        GameManager.Instance.StartAsHost();
    }

    public void OnClientButtonClicked()
    {
        GameManager.Instance.StartAsClient();
    }

    public void OnQuitButtonClicked()
    {
        GameManager.Instance.QuitGame();
    }
}
