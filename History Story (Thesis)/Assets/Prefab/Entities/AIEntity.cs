using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using ThesisLibrary;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIPath))]
public class AIEntity : Entities
{
    protected AIPath aiPath;
    protected Seeker seek;

    private Transform targetEntity;


    [Space(10)]
    [Header("Distance Info")]
    [SerializeField] [Range(0f, 50f)] protected float stopDistance;
    [SerializeField] [Range(0f, 50f)] protected float fleeDistance;


    //Tryer
    private bool doFlee = true;

    protected override void Awake()
    {
        base.Awake();

        aiPath = GetComponent<AIPath>();
        seek = GetComponent<Seeker>();
    }
    protected override void Start()
    {
        base.Start();

    }
    protected override void Update()
    {
        //targetEntity = Attack_Controller.GetNearestEnemy;

        base.Update();

        //StartCoroutine(FleeTryer());
        //SeekBehaviour();
        //FleeBehaviour();

    }
    protected override void FixedUpdate()
    {
        base.FixedUpdate();
    }


    protected override void MovementBehaviour()
    {

        //aiPath.destination = targetEntity.position;
    }

    //private void SeekBehaviour()
    //{
    //    var distance = Vector2.Distance(transform.position, targetEntity.position);
    //    if (distance >  stopDistance && distance > fleeDistance)
    //    {
    //        aiPath.canMove = true;
    //        aiPath.destination = targetEntity.position;
    //        aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
    //        //Debug.Log($"Current Speeed: {GetEntityStats.currentMoveSpeed} || Deltatime: {Time.deltaTime} || Total: {GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime}");

    //    }
    //    else
    //    {
    //        aiPath.canMove = false;
    //    }
    //}
    //private void FleeBehaviour()
    //{
    //    if (Vector2.Distance(transform.position, targetEntity.position) < fleeDistance)
    //    {
    //        //TODO: Flee
    //        Debug.Log("Flee");
    //        aiPath.canMove = true;

    //        FleePath fleePath = FleePath.Construct(transform.position, targetEntity.position, 450);
    //        fleePath.aimStrength = 0.8f;
    //        fleePath.spread = 0;


    //        seek.StartPath(fleePath, OnPathComplete);
    //    }
    //}

    //private void OnPathComplete(Path p)
    //{
    //    Debug.Log("Done Path");
    //}


    private void OnDrawGizmosSelected()
    {
        if (!debugMode) { return; }

#if UNITY_EDITOR
        Handles.color = Color.green;
        Handles.DrawWireDisc(transform.position, transform.forward, stopDistance);

        Handles.color = Color.red;
        Handles.DrawWireDisc(transform.position, transform.forward, fleeDistance);
#endif

    }















}
