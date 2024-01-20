using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCBehaviour : MonoBehaviour
{
    private enum MovementBehaviourState
    {
        Idle, Random, SetLocation
    }
    private enum Loops 
    { 
        Loop, PingPong
    }

    [SerializeField] private MovementBehaviourState moveBehaviour = MovementBehaviourState.Idle;

    //For Random state
    [Header("For Random State")]
    [SerializeField] private Collider2D areaCollider;
    [SerializeField] private float minRandom = 1f;
    [SerializeField] private float maxRandom = 2f;

    //For SetLocation state
    [Header("For Setlocation State")]
    [SerializeField] private Transform[] targetLocations;
    [SerializeField] private Loops loopState = Loops.Loop;

    [Header("NPC stats")]
    [SerializeField] private float moveSpeed;



    











}
