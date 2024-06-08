using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class State
{
    public enum STATE
    {
        IDLE,
        PATROL,
        PURSUE
    };

    public enum EVENT
    {
        ENTER,
        UPDATE,
        EXIT
    };

    public STATE name;
    protected EVENT stage;
    protected GameObject npc;
    protected Animator anim;
    protected Transform player;
    protected State nextState;
    protected NavMeshAgent agent;

    float visDist = 10.0f;
    float visAngle = 30.0f;

    public State(GameObject _npc, NavMeshAgent _agent, Animator _anim, Transform _player)
    {
        npc = _npc;
        agent = _agent;
        anim = _anim;
        player = _player;
        stage = EVENT.ENTER;
    }

    public virtual void Enter() { stage = EVENT.UPDATE; }
    public virtual void Update() { stage = EVENT.UPDATE; }
    public virtual void Exit() { stage = EVENT.EXIT; }

    public State Process()
    {
        if (stage == EVENT.ENTER) Enter();
        if (stage == EVENT.UPDATE) Update();
        if (stage == EVENT.EXIT)
        {
            Exit();
            return nextState;
        }
        return this;
    }

    public bool CanSeePlayer()
    {
        Vector3 direction = player.position - npc.transform.position;
        float angle = Vector3.Angle(direction, npc.transform.forward);

        if (direction.magnitude < visDist && angle < visAngle)
        {
            RaycastHit hit;
            if (Physics.Raycast(npc.transform.position, direction.normalized, out hit, visDist))
            {
                if (hit.collider.gameObject == player.gameObject)
                {
                    return true;
                }
            }
        }

        return false;
    }

    protected void SetAnimatorBooleans(bool isIdle, bool isPatrolling, bool isRunning)
    {
        anim.SetBool("isIdle", isIdle);
        anim.SetBool("isPatrolling", isPatrolling);
        anim.SetBool("isRunning", isRunning);
    }
}

public class IdleState : State
{
    public IdleState(GameObject _npc, NavMeshAgent _agent, Animator _anim, Transform _player)
        : base(_npc, _agent, _anim, _player)
    {
        name = STATE.IDLE;
    }

    public override void Enter()
    {
        SetAnimatorBooleans(true, false, false);
        agent.isStopped = true;
        base.Enter();
    }

    public override void Update()
    {
        if (CanSeePlayer())
        {
            nextState = new PursueState(npc, agent, anim, player);
            stage = EVENT.EXIT;
        }
    }

    public override void Exit()
    {
        agent.isStopped = false;
        base.Exit();
    }
}

public class PatrolState : State
{
    public PatrolState(GameObject _npc, NavMeshAgent _agent, Animator _anim, Transform _player)
        : base(_npc, _agent, _anim, _player)
    {
        name = STATE.PATROL;
    }

    public override void Enter()
    {
        SetAnimatorBooleans(false, true, false);
        agent.speed = 1.0f; // Set patrol speed
        base.Enter();
    }

    public override void Update()
    {
        if (CanSeePlayer())
        {
            nextState = new PursueState(npc, agent, anim, player);
            stage = EVENT.EXIT;
        }
    }

    public override void Exit()
    {
        base.Exit();
    }
}

public class PursueState : State
{
    public PursueState(GameObject _npc, NavMeshAgent _agent, Animator _anim, Transform _player)
        : base(_npc, _agent, _anim, _player)
    {
        name = STATE.PURSUE;
    }

    public override void Enter()
    {
        SetAnimatorBooleans(false, false, true);
        agent.speed = 1.5f; // Set pursue speed
        base.Enter();
    }

    public override void Update()
    {
        agent.SetDestination(player.position);
        if (!CanSeePlayer())
        {
            nextState = new PatrolState(npc, agent, anim, player);
            stage = EVENT.EXIT;
        }
    }

    public override void Exit()
    {
        base.Exit();
    }
}

public class NPCController : MonoBehaviour
{
    private State currentState;
    public Transform player;
    public Animator anim;
    public NavMeshAgent agent;

    void Start()
    {
        currentState = new IdleState(gameObject, agent, anim, player);
    }

    void Update()
    {
        currentState = currentState.Process();
    }
}
