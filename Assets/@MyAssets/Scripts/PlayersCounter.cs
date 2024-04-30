using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PlayersCounter : MonoBehaviour
{
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
        }
        else
        {
            Debug.LogError("No se ha asignado el componente TextMeshPro para actualizar el número de jugadores.");
        }
    }
}
