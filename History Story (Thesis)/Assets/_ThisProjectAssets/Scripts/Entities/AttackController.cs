using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using MoreMountains.Feedbacks;

#if UNITY_EDITOR
using UnityEditor;
#endif

public class AttackController : DetectMyEnemies
{
    [System.Serializable]
    public class AttackState
    {
        public List<BaseAttackBehaviour> attackTypes = new List<BaseAttackBehaviour>();
        public float delayCast;
        public bool movingWhileCasting = false;

        public bool IsAllBehaviourIsDone()
        {
            foreach (var item in attackTypes)
            {
                if (item.attackIsPlaying)
                    return false; //Not all behaviour is done;
            }

            //All attack behaviour is done
            return true;
        }
        public void TriggerAllAttackBehaviours(AttackController attackController)
        {
            foreach (var item in attackTypes)
            {
                item.TriggerFire(attackController);
            }
        }

    }

    public Entities GetThisEntity { get; private set; }

    [SerializeField] private bool canAttack = true;

    [Header("Attack Info")]
    [Header("Range")]
    [SerializeField] private Transform attackHolder;
    [SerializeField] private float fireRate = 0.1f;
    [SerializeField] [Range(0f, 50f)] private float rangedAttackDistance;
    [SerializeField] private List<AttackState> attackStates = new List<AttackState>();

    [Space(20)]
    [Header("Melee")]
    [SerializeField] private Vector2 offsetPosition;
    [SerializeField] [Range(0f, 50f)] private float meleeAttackDistance;
    [SerializeField] private float delayAttack = 1f;
    private bool meleeAttackOnCooldown = false;

    private float _fireRate = 0;
    private int currentAttackState = 0;

    // public Transform EnemyInsideArea;


    //[Space(20)]
    //[Header("Ranged Attack Type")]
    //[SerializeField] private bool canRangeAttack = true;
    //[SerializeField] private List<Projectile> projectileShot = new List<Projectile>();
    //[SerializeField] private float inBetweenTime = 0.1f;
    //[SerializeField] private bool canMoveOnShoot = false;
    //private bool readyRangedAttack = true;

    //[Space(10)]
    //[Header("Melee Attack Type")]
    //[SerializeField] private bool canMeleeAttack = true;
    //[SerializeField] [Range(0f, 50f)] private float meleeAttackDistance;
    //[SerializeField] [Range(0, 360)] private float viewAngle;
    //[SerializeField] private float intervalTime = 0.3f;
    //[SerializeField] private int slashCount = 1;
    //[SerializeField] private float knockBackPower = 15f;
    //private bool readyMeleeAttack = true;

    public bool EnableAttacking { get { return canAttack; } set { canAttack = value; } }
    public Transform GetAttackHolder { get { return attackHolder; } }

    public float GetRangedAttackDistance { get { return rangedAttackDistance; } }
    public float GetMeleeAttackDistance { get { return meleeAttackDistance; } }


    private bool isAlreadyTriggerAttack = false;

    private bool stopAiming = false;
    private Vector3 dir;
    private float angle;



    private void Awake()
    {
        GetThisEntity = GetComponent<Entities>();

    }

    protected override void Start()
    {
        base.Start();

    }
    private void Update()
    {
        if (EnableAttacking == false) { return; } //


        Aiming(); //Aim the holder


        if (GetNearestEnemy != null && distanceToNearestEnemy < rangedAttackDistance)
        {
            //StartCoroutine(TriggerAttack());
            if (isAlreadyTriggerAttack == false)
            {
                StartCoroutine(TriggerAttack());
            }
        }

        if (GetNearestEnemy != null && distanceToNearestEnemy < meleeAttackDistance)
        {
            if (!meleeAttackOnCooldown)
            {
                StartCoroutine(MeleeAttack());
                Debug.Log("MELEE ATTACK");
            }
        }




        if (detectRadius <= -1)
        {
            detectRadius = rangedAttackDistance;
        }
    }


    #region RangeAttack
    private void Aiming() //Controll the aiming of the entity toward to nearest enemy
    {
        Quaternion q;

        if (stopAiming || attackHolder == null) { return; }

        if (GetNearestEnemy != null)
        {
            //Direct rotation toward to the enemy position
            dir = GetNearestEnemy.position - attackHolder.position;

            angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            q = Quaternion.AngleAxis(angle, Vector3.forward);
            attackHolder.rotation = Quaternion.Slerp(attackHolder.rotation, q, 150 * Time.deltaTime);
        }
        else
        {
            if (GetThisEntity.GetMoveDirection != Vector2.zero)
            {
                dir = GetThisEntity.GetMoveDirection;
                //Direct rotation toward to the direction movement
                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
                q = Quaternion.AngleAxis(angle, Vector3.forward);
                attackHolder.rotation = Quaternion.Slerp(attackHolder.rotation, q, 5 * Time.deltaTime);
            }
        }

        //Fliping the holder
        Vector3 Scale = Vector3.one;
        if (angle > 90 || angle < -90)
        {
            Scale.x = -1;
            Scale.y = -1;
        }
        attackHolder.localScale = new Vector3(1 * transform.localScale.x, Scale.y, 1);
    }
    public Vector2 GetDirectionTowardsEnemy() => (GetNearestEnemy.position - attackHolder.position).normalized;


    private IEnumerator TriggerAttack()
    {
        isAlreadyTriggerAttack = true;

        if (fireRate > 0)
        {
            //isFiring = Input.GetMouseButton(0);
            if (Time.time > _fireRate)
            {
                Debug.Log("Start state attack");

                yield return StartCoroutine(TriggerAttackStates());

                _fireRate = Time.time + 1 / fireRate;

                //Debug.Log("Done state attack: " + Time.time + " :: " + _fireRate);


            }
        }

        isAlreadyTriggerAttack = false;
    }
    private IEnumerator TriggerAttackStates() //Trigger the attack states
    {
        int previousStateIndex = 0;

        GetThisEntity.StopMovement(attackStates[currentAttackState].movingWhileCasting
            );  //Set entity can move accoding to movingWhileCasting var

        yield return new WaitForSeconds(attackStates[currentAttackState].delayCast); //Wait for the delay to finish

        //One attack state only
        if (attackStates.Count == 1)
            attackStates[0].TriggerAllAttackBehaviours(this);
        else
        {
            //If attack state has multiple state

            //Trigger the attack state index
            attackStates[currentAttackState].TriggerAllAttackBehaviours(this);

            previousStateIndex = currentAttackState; //Save the state index before increment
            currentAttackState++;

            if (currentAttackState == attackStates.Count)
            {
                //Reset to the first index of attack states
                currentAttackState = 0;
            }

        }


        while (!attackStates[previousStateIndex].IsAllBehaviourIsDone()) //Wait to finish before continue
        {
            Debug.Log("WAITING FOR STATE TO FINISH");
            yield return null;
        }
        Debug.Log("ATTACK STATE IS DONE");

        if (!attackStates[previousStateIndex].movingWhileCasting)  //If moving while casting is false then back to normal
            GetThisEntity.StopMovement(true);



    }
    #endregion
















    private IEnumerator MeleeAttack()
    {
        meleeAttackOnCooldown = true;

        Collider2D[] myEnemy = Physics2D.OverlapCircleAll(transform.position + (Vector3)offsetPosition, meleeAttackDistance, GetMyEnemyLayer());
        foreach (var item in myEnemy)
        {
            IDamageable entity = item.GetComponent<IDamageable>();

            //var damage_critical = GetThisEntity.GetCalculatedDamage();
            //var calculatedDamage = damage_critical.Item1;
            //var isCritical = damage_critical.Item2;

            var calculatedDamage = GetThisEntity.GetCalculatedDamage(out var isCriticalHit);

            entity.TakeDamage(calculatedDamage, GetThisEntity, isCriticalHit);

        }

        yield return new WaitForSeconds(delayAttack);


        meleeAttackOnCooldown = false;
    }


    protected override void OnDrawGizmosSelected()
    {
        //base.OnDrawGizmosSelected();
        if (!debugMode) { return; }

        base.OnDrawGizmosSelected();

#if UNITY_EDITOR
        Handles.color = Color.red;
        Handles.DrawWireDisc(transform.position, transform.forward, rangedAttackDistance);

        Handles.color = Color.red;
        Handles.DrawWireDisc(transform.position + (Vector3)offsetPosition, transform.forward, meleeAttackDistance);
#endif



    }

}
