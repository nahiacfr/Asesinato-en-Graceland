using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class Player1Agent : Agent
{
    public Transform exit;
    public GameObject[] enemies;

    public override void OnEpisodeBegin()
    {
        // Optional: Reset player and environment states here if needed
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        // Collect observations on the positions of the player, exit, and enemies
        sensor.AddObservation(transform.localPosition);
        sensor.AddObservation(exit.localPosition);
        foreach (var enemy in enemies)
        {
            sensor.AddObservation(enemy.transform.localPosition);
        }
    }

    public override void OnActionReceived(ActionBuffers actionBuffers)
    {
        // Get movement actions from the neural network
        var continuousActions = actionBuffers.ContinuousActions;
        var moveX = continuousActions[0];
        var moveZ = continuousActions[1];

        // Move the player based on the actions
        transform.Translate(new Vector3(moveX, 0, moveZ) * Time.deltaTime * 5f);

        // Reward and end episode if the player reaches the exit
        if (Vector3.Distance(transform.localPosition, exit.localPosition) < 1.0f)
        {
            SetReward(1.0f);
            EndEpisode();
        }

        // Penalize and end episode if the player touches an enemy
        foreach (var enemy in enemies)
        {
            if (Vector3.Distance(transform.localPosition, enemy.transform.localPosition) < 1.0f)
            {
                SetReward(-1.0f);
                EndEpisode();
            }
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        // Manual control for testing: map keyboard inputs to actions
        var continuousActionsOut = actionsOut.ContinuousActions;
        continuousActionsOut[0] = Input.GetAxis("Horizontal"); // X-axis movement
        continuousActionsOut[1] = Input.GetAxis("Vertical");   // Z-axis movement
    }
}
