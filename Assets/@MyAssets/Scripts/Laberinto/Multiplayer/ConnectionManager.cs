using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class ConnectionManager : MonoBehaviour
{
    public void StartHost()
    {
        NetworkManager.Singleton.StartHost();
        //NetworkManager.Singleton.SceneManager.LoadScene("Main_MP", UnityEngine.SceneManagement.LoadSceneMode.Single);
    }

    public void StartClient()
    {
        NetworkManager.Singleton.StartClient();
    }
}
