using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Pursue : State
{
    public Pursue(GameObject _npc, UnityEngine.AI.NavMeshAgent _agent, Animator _anim, Transform _player)
        : base(_npc, _agent, _anim, _player)
    {
        name = STATE.PURSUE;
        agent.speed = 5.0f;
        agent.isStopped = false;
    }

    public override void Enter()
    {
        SetAnimatorBooleans(false, false, true);
        base.Enter();
    }

    public override void Update()
    {
        agent.SetDestination(player.position);

        if (agent.hasPath)
        {
            if (!CanSeePlayer())
            {
                nextState = new Patrol(npc, agent, anim, player);
                stage = EVENT.EXIT;
            }
        }
    }

    public override void Exit()
    {
        SetAnimatorBooleans(false, false, false);
        base.Exit();
    }
}
