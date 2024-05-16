using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;


public class CheckpointsEnvironment : MonoBehaviour
{
    private static CheckpointsEnvironment instance;
    private List<GameObject> checkpoints = new List<GameObject>();

    public List<GameObject> Checkpoints { get { return checkpoints; } }

    public static CheckpointsEnvironment Singleton
    {
        get
        {
            if (instance == null)
            {
                instance = new CheckpointsEnvironment();
                instance.Checkpoints.AddRange(GameObject.FindGameObjectsWithTag("Checkpoint"));
                instance.checkpoints = instance.checkpoints.OrderBy(waypoint => waypoint.name).ToList();
            }
            return instance;
        }
    }
}