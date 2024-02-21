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
[RequireComponent(typeof(ScanningEntities))]
public class AIEntity : Entities
{
    private enum MoveBehaviourType { Follow, Random}
    protected AIPath aiPath;
    protected Seeker seek;

    private Transform targetEntity;
    private ScanningEntities scanEntities;

    [Space(10)]
    [Header("Distance Info")]
    [SerializeField] private MoveBehaviourType moveBehaviour = MoveBehaviourType.Follow;
    [SerializeField] [Range(0f, 50f)] protected float stopDistance;
    [SerializeField] [Range(0f, 50f)] protected float fleeDistance;

    [Header("For Random Move Behaviour")]
    [SerializeField] private float minRandomWait;
    [SerializeField] private float maxRandomWait;
    private bool isAlreadyCalculateRandom = false;

    
    protected override void Awake()
    {
        base.Awake();

        scanEntities = GetComponent<ScanningEntities>();
        aiPath = GetComponent<AIPath>();
        seek = GetComponent<Seeker>();
    }
    protected override void Start()
    {
        base.Start();

    }
    protected override void Update()
    {
        targetEntity = scanEntities.GetNearestTarget;

        base.Update();

        if (IsCanMove)
        {
            aiPath.canMove = true;
            switch (moveBehaviour)
            {
                case MoveBehaviourType.Follow:
                    SeekBehaviour();
                    break;
                case MoveBehaviourType.Random:
                    StartCoroutine(RandomBehaviour());
                    break;
            }
        }
        else
        {
            aiPath.canMove = false;
        }
        

        FleeBehaviour();

        FlipEntity(aiPath.velocity.normalized);
    }
    protected override void FixedUpdate()
    {
        base.FixedUpdate();
    }




    protected override void MovementBehaviour()
    {
        PlayMoveAnimation(aiPath.velocity.normalized);
        //aiPath.destination = targetEntity.position;
    }

    private IEnumerator RandomBehaviour()
    {
        if (!isAlreadyCalculateRandom)
        {
            isAlreadyCalculateRandom = true;

            Debug.Log("COROUTINE");
            int lenght = ThesisUtility.RandomGetAmount(500, 1500);
            RandomPath randomPath = RandomPath.Construct(transform.position, lenght);
            randomPath.spread = ThesisUtility.RandomGetAmount(300, 1500);

            if (targetEntity != null)
            {
                randomPath.aim = targetEntity.position;
                randomPath.aimStrength = ThesisUtility.RandomGetFloat();
            }

            aiPath.canMove = true;
            Debug.Log("RANDOM PATH DURATION: " + randomPath.duration);

            Debug.Log("RANDOM IS STARTED");
            seek.StartPath(randomPath, OnPathComplete);


            yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(minRandomWait, maxRandomWait)); //Wait time to change position
            isAlreadyCalculateRandom = false;
        }
    }
    private void SeekBehaviour()
    {
        if (targetEntity == null) { return; }

        var distance = Vector2.Distance(transform.position, targetEntity.position);
        if (distance > stopDistance && distance > fleeDistance)
        {
            aiPath.canMove = true;
            aiPath.destination = targetEntity.position;
            aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;
            //Debug.Log($"Current Speeed: {GetEntityStats.currentMoveSpeed} || Deltatime: {Time.deltaTime} || Total: {GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime}");

        }
        else
        {
            aiPath.canMove = false;
        }
    }
    private void FleeBehaviour()
    {
        if(targetEntity == null) { return; }

        if (Vector2.Distance(transform.position, targetEntity.position) < fleeDistance)
        {
            //TODO: Flee
            Debug.Log("Flee");
            aiPath.canMove = true;

            int lenght = ThesisUtility.RandomGetAmount(450, 1000);
            FleePath fleePath = FleePath.Construct(transform.position, targetEntity.position, lenght);
            fleePath.aimStrength = 0.8f;
            fleePath.spread = 0;

            seek.StartPath(fleePath, OnPathComplete);
        }
    }

    private void OnPathComplete(Path p)
    {
        Debug.Log("Done Path");
    }


    private void OnDrawGizmosSelected()
    {
        if (!debugMode) { return; }

#if UNITY_EDITOR
        Handles.color = Color.magenta;
        Handles.DrawWireDisc(transform.position, transform.forward, stopDistance);

        Handles.color = Color.red;
        Handles.DrawWireDisc(transform.position, transform.forward, fleeDistance);
#endif

    }















}
