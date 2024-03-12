using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class SelectPlayer : NetworkBehaviour
{

    [SerializeField] float waitTime = 2;
    private float actualTime;
    // Start is called before the first frame update
    void Start()
    {
        NetworkManager.Singleton.StartClient();
        actualTime = waitTime;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(NetworkManager.Singleton.IsClient && !NetworkManager.Singleton.IsHost)
        {
            this.enabled = false;
        }else if (actualTime > 0)
        {
            actualTime -= 0.2f;
        }
        else
        {
            NetworkManager.Singleton.StartHost();
        }
    }
}
