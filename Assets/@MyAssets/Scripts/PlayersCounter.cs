using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayersCounter : MonoBehaviour
{
    const int MAX_PLAYER_AMOUNT = 1;
    public int numberOfPlayers = 0;
    public TextMeshProUGUI playersText;

    private void OnEnable()
    {
        GameObject[] players = GameObject.FindGameObjectsWithTag("Jugador");
        numberOfPlayers = players.Length;
        UpdatePlayersText();
        Debug.Log("OnEnable");
    }

    private void OnDisable()
    {
        GameObject[] players = GameObject.FindGameObjectsWithTag("Jugador");
        numberOfPlayers = players.Length;
        UpdatePlayersText();
        Debug.Log("OnDisable");
    }

    private void UpdatePlayersText()
    {
        if (playersText != null)
        {
            playersText.text = numberOfPlayers.ToString();
            if (numberOfPlayers == MAX_PLAYER_AMOUNT)
            {
                Debug.Log("Max Players Reach");
                LabGameManager.Instance.SelectedPlayer(false);
            }
        }
        else
        {
            Debug.LogError("No se ha asignado el componente TextMeshPro para actualizar el número de jugadores.");
        }
    }
}
