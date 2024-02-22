using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using System.Threading;
using MoreMountains.Tools;



[DisallowMultipleComponent]
[RequireComponent(typeof(ScanningEntities))]
public class AttackHandler : MonoBehaviour
{
    private const float MIN_ATTACKSPEED = 0.3f;
    private const float MAX_ATTACKSPEED = 5f;


    private Entities entity;
    private ScanningEntities scanner;
    private RangeAttackBehaviour rangeAttacker;
    private MeleeAttackBehaviour meleeAttacker;
    private CancellationTokenSource cancellationToken;

    private bool rangeAttackIsPlaying = false;
    private bool meleeAttackIsPlaying = false;

    [SerializeField] private bool canAttack = true;
    [SerializeField] private Transform baseAttackPosition;
    [SerializeField] private Transform attackPositionEndPoint;

    [SerializeField] private Color colorType;

    #region Public Getter & Setter
    public Entities GetEntity { get { return entity; } }
    public ScanningEntities GetScannerEntities { get { return scanner; } }
    public RangeAttackBehaviour GetRangedAttackBehaviour { get { return rangeAttacker; } }
    public MeleeAttackBehaviour GetMeleeAttackBehaviour { get { return meleeAttacker; } }

    public bool IsCanAttack { get { return canAttack; } set { canAttack = value; } }
    public bool IsRangeAttackPlaying { get { return rangeAttackIsPlaying; } set { rangeAttackIsPlaying = value; } }
    public bool IsMeleeAttackPlaying { get { return meleeAttackIsPlaying; } set { meleeAttackIsPlaying = value; } }
    public Color GetColorType { get { return colorType; } }
    public CancellationTokenSource GetCancellationToken { get { return cancellationToken; } }
    public Transform GetBaseAttackPosition { get { return baseAttackPosition; } }
    public Transform GetAttackPositionEndPoint { get  { 
            if(attackPositionEndPoint == null)
            {
                return baseAttackPosition;
            }

            return attackPositionEndPoint; 
        } 
    }
    #endregion

    private void Awake()
    {
        entity = GetComponent<Entities>();
        scanner = GetComponent<ScanningEntities>();


        TryGetComponent<RangeAttackBehaviour>(out rangeAttacker);
        TryGetComponent<MeleeAttackBehaviour>(out meleeAttacker);
    }

    private void OnEnable()
    {
        cancellationToken = new CancellationTokenSource();
    }


    private void OnDisable()
    {
        cancellationToken.Cancel();
    }
    private void OnDestroy()
    {
        cancellationToken?.Cancel();
    }















    public float GetCalculatedDamage(out bool isCritical)
    {
        var entityStats = entity.GetEntityStats;

        var plainDamage = entityStats.currentDamage; //Current damage

        //Calculate if this is critical damage
        isCritical = ThesisUtility.RandomGetChanceBool(entityStats.currentCriticalChance);

        if (isCritical)
        {
            //Critical Damage
            //float criticalDamage = damage * sourceDamage.GetEntityStats.maxCriticalDamage / 100f;
            //damage += criticalDamage;
            plainDamage += entityStats.currentCriticalDamage;
        }

        return plainDamage;
    }
    public float CalculateAttackSpeed(float attackSpeed)
    {
        // Map the attack speed value from 0 to 100 to a range between minBaseDelay and maxBaseDelay
        float normalizedSpeed = Mathf.Clamp01(attackSpeed / 100f);

        float attackDelay = Mathf.Lerp(MAX_ATTACKSPEED, MIN_ATTACKSPEED, normalizedSpeed);

        return attackDelay;
    }






}
