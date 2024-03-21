using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using System;

public struct PlayerData : IEquatable<PlayerData>, INetworkSerializable
{
    public ulong playerId;
    public int type; //0= laberinto, 1= sala de control

    public bool Equals(PlayerData other)
    {
        return playerId == other.playerId && type == other.type;
    }

    public void NetworkSerialize<T>(BufferSerializer<T> serializer) where T : IReaderWriter
    {
        serializer.SerializeValue(ref playerId);
        serializer.SerializeValue(ref type);
    }
}
