using System.Collections;
using System.Collections.Generic;
using Unity.Netcode;
using UnityEngine;

public class NetworkPlayer : NetworkBehaviour
{
    [SerializeField] Transform root;
    [SerializeField] Transform head;
    [SerializeField] Transform leftHand;
    [SerializeField] Transform rightHand;

    [SerializeField] Renderer[] meshesToDisable;

    public override void OnNetworkSpawn()
    {
        base.OnNetworkSpawn();

        if (!IsOwner)
            return;

        foreach (Renderer r in meshesToDisable)
        {
            r.enabled = false;
        }
    }
    void Update()
    {
        if (!IsOwner)
            return;

        root.position = VRRigReferences.Instance.root.position;
        root.rotation = VRRigReferences.Instance.root.rotation;

        head.position = VRRigReferences.Instance.head.position;
        head.rotation = VRRigReferences.Instance.head.rotation;

        leftHand.position = VRRigReferences.Instance.leftHand.position;
        leftHand.rotation = VRRigReferences.Instance.leftHand.rotation;

        rightHand.position = VRRigReferences.Instance.rightHand.position;
        rightHand.rotation = VRRigReferences.Instance.rightHand.rotation;

    }
}
