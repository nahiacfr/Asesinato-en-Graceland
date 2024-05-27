using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Unity.Netcode;

public class PlayersCounter : MonoBehaviour
{
    const int MAX_PLAYER_AMOUNT = 2;
    public int numberOfPlayers = 0;
    public TextMeshProUGUI playersText;

    private void OnEnable()
    {
        if (NetworkManager.Singleton != null)
        {
            NetworkManager.Singleton.OnClientConnectedCallback += ClientConnected;
            NetworkManager.Singleton.OnClientDisconnectCallback += ClientDisconnected;
        }

        UpdatePlayersCount();
        Debug.Log("OnEnable");
    }

    private void OnDisable()
    {
        if (NetworkManager.Singleton != null)
        {
            NetworkManager.Singleton.OnClientConnectedCallback -= ClientConnected;
            NetworkManager.Singleton.OnClientDisconnectCallback -= ClientDisconnected;
        }
    }

    private void ClientConnected(ulong clientId)
    {
        UpdatePlayersCount();
    }

    private void ClientDisconnected(ulong clientId)
    {
        UpdatePlayersCount();
    }

    private void UpdatePlayersCount()
    {
        if (NetworkManager.Singleton != null)
        {
            numberOfPlayers = NetworkManager.Singleton.ConnectedClientsList.Count;
        }
        UpdatePlayersText();
    }

    private void UpdatePlayersText()
    {
        if (playersText != null)
        {
            playersText.text = numberOfPlayers.ToString();
            if (numberOfPlayers == MAX_PLAYER_AMOUNT)
            {
                Debug.Log("Max Players Reached");
                LabGameManager.Instance.StartGame();
            }
        }
        else
        {
            Debug.LogError("No se ha asignado el componente TextMeshPro para actualizar el número de jugadores.");
        }
    }
}
