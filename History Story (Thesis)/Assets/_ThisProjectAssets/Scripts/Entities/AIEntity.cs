using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Pathfinding;
using ThesisLibrary;
using System;
using Cysharp.Threading.Tasks;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIPath))]
[RequireComponent(typeof(ScanningEntities))]
public class AIEntity : Entities
{
    private enum MoveBehaviourType { Follow, Random }
    protected AIPath aiPath;
    protected Seeker seek;

    private Transform targetEntity;
    private ScanningEntities scanEntities;
    private OverheadHealthbar overHeadHealthbar;

    [Space(10)]
    [Header("Distance Info")]
    [SerializeField] private MoveBehaviourType moveBehaviour = MoveBehaviourType.Follow;
    [SerializeField] [Range(0f, 50f)] protected float stopDistance;
    [SerializeField] [Range(0f, 50f)] protected float fleeDistance;

    [Header("For Random Move Behaviour")]
    [SerializeField] private float minRandomWait;
    [SerializeField] private float maxRandomWait;

    [Space(10)]
    [Header("Use Random Abilties")]
    [SerializeField] private float useAbility_Range = 1;
    [SerializeField] private float minUseTimerDelay = 5;
    [SerializeField] private float maxUseTimerDelay = 5;



    private bool isAlreadyCalculateRandom = false;


    protected override void Awake()
    {
        base.Awake();

        overHeadHealthbar = GetComponentInChildren<OverheadHealthbar>();
        scanEntities = GetComponent<ScanningEntities>();
        aiPath = GetComponent<AIPath>();
        seek = GetComponent<Seeker>();
        GetAbility_Controller.InitializedDefaultAbilities(entityStatsSO.abilities);
    }
    protected override void Start()
    {
        base.Start();

        _ = UseAbilityController();
    }
    protected override void OnEnable()
    {
        base.OnEnable();
        GetEntityStats.ResetCurrentStats();
    }
    protected override void Update()
    {
        targetEntity = scanEntities.GetNearestTarget;

        base.Update();
        FlipEntity(aiPath.velocity.normalized);

        if (IsCanMove)
        {
            aiPath.canMove = true;

            if (targetEntity == null) //Follow the follower host
            {
                if (scanEntities.GetFollowTarget == null) { return; }

                aiPath.destination = scanEntities.GetFollowTarget.position;
                aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;

                return;
            }

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

    }
    protected override void FixedUpdate()
    {
        base.FixedUpdate();
    }


    private async UniTask UseAbilityController()
    {
        List<AbilityScript> availableAbility = new List<AbilityScript>();

        if (GetAbility_Controller.ListOfCurrentAbilities.Count > 0)
            availableAbility = new List<AbilityScript>(GetAbility_Controller.ListOfCurrentAbilities.Where(item => item != null));

        try
        {
            while (availableAbility.Count > 0 && !GetEntityCancellationToken.IsCancellationRequested)
            {
                Debug.Log("EXECUTING: " + availableAbility.Count + " || IS CANCENCELLED: " + GetEntityCancellationToken.IsCancellationRequested);
                await UniTask.WaitUntil(() => GetAttackHandler.GetScannerEntities.GetNearestTarget != null);

                var distance = Vector2.Distance(transform.position, GetAttackHandler.GetScannerEntities.GetNearestTarget.position);

                Debug.Log("WORKING");
                if (distance < useAbility_Range)
                {
                    Debug.Log("TARGET IN RANGE");
                    if (ThesisUtility.RandomGetChanceBool(0.8f)) //Trigger ability in 80% chance
                    {
                        //Use ability, the target is in range
                        var abilityToUse = availableAbility.ToArray().RandomGetObject();

                        if (!abilityToUse.OnCoolDown)
                        {
                            abilityToUse.TriggerAbility(this).Forget();
                        }

                        Debug.Log("USING ABILITY");
                    }
                    else
                    {
                        Debug.Log("NO TIME TO USE ABILITY");
                    }
                    var delayTimer = ThesisUtility.RandomGetFloat(minUseTimerDelay, maxUseTimerDelay);
                    await UniTask.Delay(TimeSpan.FromSeconds(delayTimer), cancellationToken: GetEntityCancellationToken);
                }

                await UniTask.Yield();
            }
        }
        catch (OperationCanceledException)
        {
            Debug.Log("ERROR?");
        }


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

        var distance = Vector2.Distance(GetAttackHandler.GetBaseAttackPosition.position, targetEntity.position);
        if (distance > stopDistance && distance > fleeDistance)
        {
            aiPath.canMove = true;
            aiPath.destination = targetEntity.position;
            aiPath.maxSpeed = GetEntityStats.currentMoveSpeed * Time.fixedDeltaTime;

        }
        else
        {
            aiPath.canMove = false;
        }
    }
    private void FleeBehaviour()
    {
        if (targetEntity == null) { return; }

        if (Vector2.Distance(GetAttackHandler.GetBaseAttackPosition.position, targetEntity.position) < fleeDistance)
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





    public void SetLifeTimer(float time)
    {
        StartCoroutine(LifeTimer(time));
    }
    private IEnumerator LifeTimer(float timer)
    {
        yield return new WaitForSeconds(timer);

        TakeDamage(GetEntityStats.maxHealth + 99, this);
    }













    private void OnDrawGizmosSelected()
    {
        if (!debugMode) { return; }

#if UNITY_EDITOR
        if(GetAttackHandler == null)
        {
            Handles.color = Color.magenta;
            Handles.DrawWireDisc(transform.position, transform.forward, stopDistance);

            Handles.color = Color.red;
            Handles.DrawWireDisc(transform.position, transform.forward, fleeDistance);

            Handles.color = Color.cyan;
            Handles.DrawWireDisc(transform.position, transform.forward, useAbility_Range, 1);
        }
        else
        {
            Handles.color = Color.magenta;
            Handles.DrawWireDisc(GetAttackHandler.GetBaseAttackPosition.position, transform.forward, stopDistance);

            Handles.color = Color.red;
            Handles.DrawWireDisc(GetAttackHandler.GetBaseAttackPosition.position, transform.forward, fleeDistance);

            Handles.color = Color.cyan;
            Handles.DrawWireDisc(GetAttackHandler.GetBaseAttackPosition.position, transform.forward, useAbility_Range, 1);
        }
        
#endif

    }

}
