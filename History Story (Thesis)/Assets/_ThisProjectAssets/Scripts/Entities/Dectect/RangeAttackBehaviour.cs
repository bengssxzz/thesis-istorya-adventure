using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System;
using System.Linq;
using System.Threading;
using MoreMountains.Feedbacks;
using UnityEngine.Events;

#if UNITY_EDITOR
using UnityEditor;
#endif



[DisallowMultipleComponent]
[RequireComponent(typeof(AttackHandler))]
public class RangeAttackBehaviour : MonoBehaviour
{
    [System.Serializable]
    public class AttackState
    {
        public float delayCast = 0; //Delay before casting the attack types
        public bool canMoveWhileCasting = true; //Is player can move while casting
        public List<RangeAttackTypeSO> attackTypes = new List<RangeAttackTypeSO>();
    }


    [SerializeField] private bool showGizmos = false;
    [Space(20)]

    [SerializeField] private MMF_Player castingFeedback;


    [Tooltip("override attack speed. If 0, this will depend on the current attack speed of the entity")]
    [SerializeField] private float overrideAttackSpeed = 0;
    [SerializeField] private float attackRadius;
    [SerializeField] private List<AttackState> attackTypes = new List<AttackState>();

    private float attackSpeed;

    private AttackHandler attackHandler;
    private CancellationTokenSource rangeCancellationToken;

    private Quaternion q;
    private float angle = 0;
    private Vector2 dir;




    public float GetAttackRadius { get { return attackRadius; } }




    private void Awake()
    {
        attackHandler = GetComponent<AttackHandler>();

        attackSpeed = overrideAttackSpeed;
    }

    private async void OnEnable()
    {
        if (attackHandler.GetEntity.GetEntityStats != null)
        {
            if (overrideAttackSpeed <= 0)
                attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;

            attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange += EntityStatsChanges;
        }
        

        if(attackHandler.GetScannerEntities != null)
        {
            rangeCancellationToken?.Cancel();
            rangeCancellationToken = new CancellationTokenSource();
            await RangeAttack(rangeCancellationToken.Token);
        }
    }
    private void OnDisable()
    {
        rangeCancellationToken?.Cancel();
        attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange -= EntityStatsChanges;
    }

    private async void Start()
    {
        if (attackHandler.GetEntity.GetEntityStats != null)
        {
            if (overrideAttackSpeed <= 0)
                attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;

            attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange -= EntityStatsChanges;
            attackHandler.GetEntity.GetEntityStats.OnCurrentStatsChange += EntityStatsChanges;
        }
        else
        {
            Debug.LogError("ENTITY STATS CANT FOUND");
        }


        if (attackHandler.GetScannerEntities != null)
        {
            rangeCancellationToken?.Cancel();
            rangeCancellationToken = new CancellationTokenSource();
            await RangeAttack(rangeCancellationToken.Token);
        }
        else
        {
            Debug.LogError("ENTITY SCANNER CANT FOUND IN RANGE ATTACK BEHAVIOUR.");
        }
    }



    private void Update()
    {
        Aiming();
    }

    private void EntityStatsChanges()
    {
        if(overrideAttackSpeed <= 0)
            attackSpeed = attackHandler.GetEntity.GetEntityStats.currentAttackSpeed;
    }
    private void Aiming() //Controll the aiming of the entity toward to nearest enemy
    {
        if (attackHandler.GetBaseAttackPosition == null) { return; }

       
        var nearestTarget = attackHandler?.GetScannerEntities.GetNearestTarget;
        var basePosition = attackHandler.GetBaseAttackPosition;

        if (nearestTarget != null)
        {
            //Direct rotation toward to the enemy position
            dir = nearestTarget.position - basePosition.position;

            angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            q = Quaternion.AngleAxis(angle, Vector3.forward);
            basePosition.rotation = Quaternion.Slerp(basePosition.rotation, q, 150 * Time.deltaTime);
        }
        else
        {

            if (attackHandler.GetEntity.GetMoveDirection != Vector2.zero)
            {
                dir = attackHandler.GetEntity.GetMoveDirection;
                //Direct rotation toward to the direction movement
                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
                q = Quaternion.AngleAxis(angle, Vector3.forward);
                basePosition.rotation = Quaternion.Slerp(basePosition.rotation, q, 5 * Time.deltaTime);
            }
        }

        //Fliping the holder
        Vector3 Scale = Vector3.one;
        if (angle > 90 || angle < -90)
        {
            Scale.x = -1;
            Scale.y = -1;
        }
        basePosition.localScale = new Vector3(1 * transform.localScale.x, Scale.y, 1);
    }


    private async UniTask RangeAttack(CancellationToken rangeCancelToken)
    {
        if(attackTypes.Count == 0) { return; }
        await UniTask.Delay(100);

        while (!attackHandler.GetCancellationToken.IsCancellationRequested && !rangeCancelToken.IsCancellationRequested)
        {
            await UniTask.WaitUntil(() => attackHandler.GetScannerEntities.GetNearestTarget != null, cancellationToken: attackHandler.GetCancellationToken.Token);
            foreach (var type in attackTypes)
            {
                if(attackHandler.GetScannerEntities.GetNearestTarget == null) { break; }
                
                if (type == null)
                    continue;

                Debug.LogWarning("CASTING TYPES");
                await CastAllTypes(type);
                Debug.LogWarning("DONE CASTING");

                await UniTask.Delay(TimeSpan.FromSeconds(attackHandler.CalculateAttackSpeed(attackSpeed)));

                Debug.LogWarning("CURRENT TYPE " + attackTypes.IndexOf(type));
                await UniTask.WaitUntil(() => attackHandler.GetScannerEntities.GetNearestTarget != null, cancellationToken: attackHandler.GetCancellationToken.Token);
            }

            await UniTask.Yield();
        }
        
    }

    private async UniTask CastAllTypes(AttackState attackType)
    {
        bool isPlaying = false;


        if (!attackType.canMoveWhileCasting)
        {
            attackHandler.GetEntity.StopMovement(true); //Stop movement
        }


        await UniTask.Delay(TimeSpan.FromSeconds(attackType.delayCast)); //Delay casting



        foreach (var typeSO in attackType.attackTypes)
        {
            typeSO.TriggerFire(attackHandler, attackHandler.GetCancellationToken.Token, TriggerAttackCallBack);
        }


        do
        {
            if (attackHandler.GetCancellationToken.IsCancellationRequested)
                break;

            Debug.LogWarning("STILL PLAYING STATE");
            isPlaying = attackType.attackTypes.Any(x => x.GetAttackDone == false);
            await UniTask.Yield();
        } while (isPlaying && attackHandler.GetScannerEntities.GetNearestTarget != null);

        Debug.LogWarning("DONE PLAYING STATE");
        await UniTask.Yield();

        //Continue moving when the attack state is done
        attackHandler.GetEntity.StopMovement(false); //Continue moving
    }

    private void TriggerAttackCallBack()
    {
        Debug.LogWarning("PLAYING FEEDBACKS");
        castingFeedback?.PlayFeedbacks();
    }





















    private void OnDrawGizmosSelected()
    {
        if (!showGizmos) { return; }

#if UNITY_EDITOR
        if(attackHandler == null)
        {
            Handles.color = Color.red;
            Handles.DrawWireDisc(transform.position, transform.forward, attackRadius, 3);
        }
        else
        {
            Handles.color = Color.red;
            Handles.DrawWireDisc(attackHandler.GetBaseAttackPosition.position, transform.forward, attackRadius, 3);
        }
       
#endif

    }
}
