using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using Unity.Netcode;

public class WaitingSceneController : NetworkBehaviour
{
    private void Start()
    {
        NetworkManager.Singleton.OnClientConnectedCallback += ClientConnected;
        NetworkManager.Singleton.OnServerStarted += ServerStarted;
    }

    private void OnDestroy()
    {
        NetworkManager.Singleton.OnClientConnectedCallback -= ClientConnected;
        NetworkManager.Singleton.OnServerStarted -= ServerStarted;
    }

    private void ClientConnected(ulong clientId)
    {
        if (NetworkManager.Singleton.IsServer && NetworkManager.Singleton.ConnectedClientsList.Count >= 2)
        {
            GameManager.Instance.LoadMainScene();
        }
    }

    private void ServerStarted()
    {
        if (NetworkManager.Singleton.IsServer && NetworkManager.Singleton.ConnectedClientsList.Count >= 2)
        {
            GameManager.Instance.LoadMainScene();
        }
    }
}