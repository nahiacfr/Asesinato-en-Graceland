using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;

public class Player1Agent : Agent
{
    public GameObject blueCube;
    public GameObject redCube;
    public LabGameManager doorController;  // Script to control the doors

    public override void OnEpisodeBegin()
    {
        // Optional: Reset player and environment states here if needed
    }

    public override void CollectObservations(VectorSensor sensor)
    {
        // Collect observations on the positions of the player and the cubes
        sensor.AddObservation(transform.localPosition);
        sensor.AddObservation(blueCube.transform.localPosition);
        sensor.AddObservation(redCube.transform.localPosition);
    }

    public override void OnActionReceived(ActionBuffers actionBuffers)
    {
        // Get actions from the neural network
        var action = actionBuffers.DiscreteActions[0];

        // Implement the actions: 0 = do nothing, 1 = touch blue cube, 2 = touch red cube
        if (action == 1)
        {
            TouchCube(blueCube);
        }
        else if (action == 2)
        {
            TouchCube(redCube);
        }
    }

    private void TouchCube(GameObject cube)
    {
        if (cube == blueCube)
        {
            doorController.OpenCloseDoors("Blue");
        }
        else if (cube == redCube)
        {
            doorController.OpenCloseDoors("Red");
        }
    }

    public override void Heuristic(in ActionBuffers actionsOut)
    {
        // Manual control for testing: map keys to actions
        var discreteActionsOut = actionsOut.DiscreteActions;
        discreteActionsOut[0] = 0; // Default action: do nothing
        if (Input.GetKey(KeyCode.Alpha1))
        {
            discreteActionsOut[0] = 1; // Action: touch blue cube
        }
        else if (Input.GetKey(KeyCode.Alpha2))
        {
            discreteActionsOut[0] = 2; // Action: touch red cube
        }
    }
}
