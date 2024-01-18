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
    [System.Serializable] public class AttackState
    {
        public List<BaseAttackBehaviour> attackTypes = new List<BaseAttackBehaviour>();
        public float delayCast;
        public bool movingWhileCasting = false;

        public bool IsAllBehaviourIsDone()
        {
            foreach (var item in attackTypes)
            {
                if(item.attackIsPlaying)
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
    
    [Space(25)]
    [Header("Attack Info")]
    [SerializeField] private List<AttackState> attackStates = new List<AttackState>();

    [Space(20)]
    [SerializeField] private Transform attackHolder;
    [SerializeField] private float fireRate = 0.1f;
    [SerializeField] [Range(0f, 50f)] private float rangedAttackDistance;


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

    public bool EnableAttacking { get; set; }
    public Transform GetAttackHolder { get { return attackHolder; } }


    //[Space]
    //private float rangedAttackField, meleeAttackField;
    private bool isAlreadyTriggerAttack = false;

    private bool stopAiming = false;
    private Vector3 dir;
    private float angle;

    private Timer timer = new Timer();


    private void Awake()
    {
        GetThisEntity = GetComponent<Entities>();

    }

    protected override void Start()
    {
        base.Start();

        //attackStates[0].TriggerAllAttackBehaviours(this);
    }

    private float time = 0;
    private void Update()
    {
        time = Time.time;
        Aiming(); //Aim the holder


        if(GetNearestEnemy != null &&  distanceToNearestEnemy < rangedAttackDistance)
        {
            //StartCoroutine(TriggerAttack());
            if (isAlreadyTriggerAttack == false)
            {
                //if (timer.TimerNode(fireRate))
                //{
                //    //Trigger attack state
                //    StartCoroutine(TriggerAttackStates());
                //}
                //isAlreadyTriggerAttack = true;
                //StartCoroutine(TriggerAttack());
                StartCoroutine(TriggerAttack());
            }
        }




        if (detectRadius <= -1)
        {
            detectRadius = rangedAttackDistance;
        }

        if (GetNearestEnemy != null)
        {
            //if (!EnableAttacking) { return; } //To stop the attack

            //if (canRangeAttack && distanceToNearestEnemy <= rangedAttackDistance && distanceToNearestEnemy > meleeAttackDistance)
            //{
            //    //RangedAttackBehaviour();
            //    EnemyInsideArea = GetNearestEnemy;
            //    StartCoroutine(RangedAttack(entity.GetEntityStats.currentAttackSpeed));
            //}
            //else if (canMeleeAttack && distanceToNearestEnemy <= meleeAttackDistance)
            //{
            //    StartCoroutine(MeleeAttack(intervalTime));
            //}

            //EnemyInsideArea = null;

        }
    }


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

        GetThisEntity.StopMovement(attackStates[currentAttackState].movingWhileCasting);  //Set entity can move accoding to movingWhileCasting var

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
















        //if (attackStates.Count > 0)
        //{
        //    //Debug.Log("Trigger Attack");

        //    int previousCurrentState = 0;

        //    //isAlreadyTriggerAttack = true;

        //    GetThisEntity.StopMovement(attackStates[currentAttackState].movingWhileCasting);  //Set entity can move accoding to movingWhileCasting var

        //    yield return new WaitForSeconds(attackStates[currentAttackState].delayCast);

        //    if (attackStates.Count == 1)
        //    {
        //        //One attack state only
        //        attackStates[0].TriggerAllAttackBehaviours(this);
        //    }
        //    else
        //    {
        //        //More than states

        //        attackStates[currentAttackState].TriggerAllAttackBehaviours(this);

        //        previousCurrentState = currentAttackState;
        //        currentAttackState++;

        //        if (currentAttackState == attackStates.Count)
        //        {
        //            //Reset to the first index of attack states
        //            currentAttackState = 0;
        //        }
        //    }



        //    while (!attackStates[previousCurrentState].IsAllBehaviourIsDone())
        //    {
        //        Debug.Log("WAITING FOR STATE TO FINISH");
        //        yield return null;
        //    }
        //    Debug.Log("ATTACK STATE IS DONE");

        //    yield return new WaitForSeconds(fireRate);

        //    isAlreadyTriggerAttack = false;

        //    if (!attackStates[previousCurrentState].movingWhileCasting)  //If moving while casting is false then back to normal
        //        GetThisEntity.StopMovement(true);
        //}
        //else
        //{
        //    //No attack states
        //    Debug.LogWarning(gameObject.name + "doesn't have attack states");
        //}






















        //isAlreadyTriggerAttack = true;

        //if (attackStates.Count > 0)
        //{
        //    if (!isAlreadyTriggerAttack)
        //    {
        //        //Debug.Log("Trigger Attack");

        //        int previousCurrentState = 0;

        //        isAlreadyTriggerAttack = true;

        //        GetThisEntity.StopMovement(attackStates[currentAttackState].movingWhileCasting);  //Set entity can move accoding to movingWhileCasting var

        //        yield return new WaitForSeconds(attackStates[currentAttackState].delayCast);

        //        if (attackStates.Count == 1)
        //        {
        //            //One attack state only
        //            attackStates[0].TriggerAllAttackBehaviours(this);
        //        }
        //        else
        //        {
        //            //More than states

        //            attackStates[currentAttackState].TriggerAllAttackBehaviours(this);

        //            previousCurrentState = currentAttackState;
        //            currentAttackState++;

        //            if (currentAttackState == attackStates.Count)
        //            {
        //                //Reset to the first index of attack states
        //                currentAttackState = 0;
        //            }
        //        }



        //        while (attackStates[previousCurrentState].IsAllBehaviourIsDone() == false)
        //        {
        //            yield return null;
        //        }
        //        //Debug.Log("Attack State is done");

        //        yield return new WaitForSeconds(fireRate);

        //        isAlreadyTriggerAttack = false;

        //        if (!attackStates[previousCurrentState].movingWhileCasting)  //If moving while casting is false then back to normal
        //            GetThisEntity.StopMovement(true);

        //    }
        //}
        //else
        //{
        //    //No attack states
        //    Debug.LogWarning(gameObject.name + "doesn't have attack states");
        //}


    }

    private bool GetIsCurrentAttackStateIsDone() //Check if the current state is done
    {
        return attackStates[currentAttackState].IsAllBehaviourIsDone();
    }






    protected override void OnDrawGizmosSelected()
    {
        //base.OnDrawGizmosSelected();
        if (!debugMode) { return; }

        base.OnDrawGizmosSelected();

#if UNITY_EDITOR
        Handles.color = Color.white;
        Handles.DrawWireDisc(transform.position, transform.forward, rangedAttackDistance);

        //if (canRangeAttack)
        //{
        //    Handles.color = Color.white;
        //    Handles.DrawWireDisc(transform.position, transform.forward, rangedAttackDistance);
        //}

        //if (canMeleeAttack)
        //{
        //    Handles.color = Color.white;
        //    Handles.DrawWireDisc(transform.position, transform.forward, meleeAttackDistance);
        //    Vector3 angle1 = DirFromAngle(-attackHolder.eulerAngles.z + 90, -viewAngle / 2);
        //    Vector3 angle2 = DirFromAngle(-attackHolder.eulerAngles.z + 90, viewAngle / 2);
        //    Handles.DrawLine(transform.position, transform.position + angle1 * meleeAttackDistance);
        //    Handles.DrawLine(transform.position, transform.position + angle2 * meleeAttackDistance);
        //}
#endif



    }
























































    //    private Entities entity;

    //    [Space(10)]
    //    [SerializeField] private Transform attackHolder;
    //    [SerializeField] private string projectileTag;

    //    public Transform EnemyInsideArea;
    //    [Space(20)]
    //    [Header("Ranged Attack Type")]
    //    [SerializeField] private bool canRangeAttack = true;
    //    [SerializeField] private List<Projectile> projectileShot = new List<Projectile>();
    //    [SerializeField][Range(0f, 50f)] private float rangedAttackDistance;
    //    [SerializeField] private float inBetweenTime = 0.1f;
    //    [SerializeField] private bool canMoveOnShoot = false;
    //    private bool readyRangedAttack = true;

    //    [Space(10)]
    //    [Header("Melee Attack Type")]
    //    [SerializeField] private bool canMeleeAttack = true;
    //    [SerializeField] [Range(0f, 50f)] private float meleeAttackDistance;
    //    [SerializeField] [Range(0, 360)] private float viewAngle;
    //    [SerializeField] private float intervalTime = 0.3f;
    //    [SerializeField] private int slashCount = 1;
    //    [SerializeField] private float knockBackPower = 15f;
    //    private bool readyMeleeAttack = true;

    //    public bool EnableAttacking { get; set; }
    //    public Transform GetAttackHolder { get { return attackHolder; } }


    //    //[Space]
    //    //private float rangedAttackField, meleeAttackField;

    //    private bool stopAiming = false;
    //    private Vector3 dir;
    //    private float angle;



    //    private void Awake()
    //    {
    //        entity = GetComponent<Entities>();
    //    }

    //    protected override void Start()
    //    {
    //        base.Start();

    //        //rangedAttackField = entity.GetEntityStats.rangedAttackField;
    //        //meleeAttackField = entity.GetEntityStats.meleeAttackField;
    //    }


    //    private void Update()
    //    {
    //        Aiming(); //Aim the holder

    //        if (detectRadius <= -1)
    //        {
    //            detectRadius = rangedAttackDistance;
    //        }

    //        if (GetNearestEnemy != null)
    //        {
    //            if(!EnableAttacking) { return; } //To stop the attack

    //            if (canRangeAttack && distanceToNearestEnemy <= rangedAttackDistance && distanceToNearestEnemy > meleeAttackDistance)
    //            {
    //                //RangedAttackBehaviour();
    //                EnemyInsideArea = GetNearestEnemy;
    //                StartCoroutine(RangedAttack(entity.GetEntityStats.currentAttackSpeed));
    //            }else if (canMeleeAttack && distanceToNearestEnemy <= meleeAttackDistance)
    //            {
    //                StartCoroutine(MeleeAttack(intervalTime));
    //            }

    //            EnemyInsideArea = null;

    //        }
    //    }


    //    private void Aiming() //Controll the aiming of the entity toward to nearest enemy
    //    {
    //        Quaternion q;

    //        if (stopAiming || attackHolder == null) { return; }

    //        if (GetNearestEnemy != null)
    //        {
    //            //Direct rotation toward to the enemy position
    //            dir = GetNearestEnemy.position - attackHolder.position;

    //            angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
    //            q = Quaternion.AngleAxis(angle, Vector3.forward);
    //            attackHolder.rotation = Quaternion.Slerp(attackHolder.rotation, q, 150 * Time.deltaTime);
    //        }
    //        else
    //        {
    //            if (entity.GetMoveDirection != Vector2.zero)
    //            {
    //                dir = entity.GetMoveDirection;
    //                //Direct rotation toward to the direction movement
    //                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
    //                q = Quaternion.AngleAxis(angle, Vector3.forward);
    //                attackHolder.rotation = Quaternion.Slerp(attackHolder.rotation, q, 5 * Time.deltaTime);
    //            }
    //        }

    //        //Fliping the holder
    //        Vector3 Scale = Vector3.one;
    //        if (angle > 90 || angle < -90)
    //        {
    //            Scale.x = -1;
    //            Scale.y = -1;
    //        }
    //        attackHolder.localScale = new Vector3(1 * transform.localScale.x, Scale.y, 1);
    //    }
    //    private Vector2 GetDirectionTowardsEnemy() => (GetNearestEnemy.position - attackHolder.position).normalized;







    //    private IEnumerator RangedAttack(float attackSpeed) //Handle the range attack
    //    {
    //        if (readyRangedAttack)
    //        {
    //            readyRangedAttack = false;

    //            //attackSpeed = attackSpeed / 100;
    //            float triggerTime = 10f / attackSpeed;

    //            Debug.Log("Ranged Attack Speed: " + attackSpeed);

    //            foreach (Projectile projectile in projectileShot)
    //            {
    //                //Create new projectile
    //                GameObject newProjectile = ObjectPooling.instance.GetObjectInPool(projectileTag, projectile.gameObject);
    //                var projectileScript = newProjectile.GetComponent<Projectile>();
    //                projectileScript.InitializeProjectile(entity, GetDirectionTowardsEnemy(), rangedAttackDistance, myEnemyLayer);
    //                projectileScript.transform.position = attackHolder.position;
    //                projectileScript.transform.rotation = attackHolder.localRotation;

    //                if (projectileShot.Count > 1)
    //                {
    //                    //If the projectile is more than 0, run the timeinterval of each projectile
    //                    yield return new WaitForSeconds(inBetweenTime);
    //                }
    //            }

    //            yield return new WaitForSeconds(triggerTime);
    //            readyRangedAttack = true;
    //        }
    //    }
    //    private IEnumerator MeleeAttack(float meleeAttackSpeed) //Handle the melee attack
    //    {
    //        if (readyMeleeAttack)
    //        {
    //            readyMeleeAttack = false;

    //            Collider2D[] enemies = GetEnemyInsideMeleeAngle().ToArray();

    //            foreach (var enemy in enemies)
    //            {
    //                var damageable = enemy.GetComponent<IDamageable>();
    //                if (damageable != null)
    //                {
    //                    Debug.Log("Taking malee damage");
    //                    damageable.TakeDamage(entity.GetEntityStats.damage, entity);
    //                    StartCoroutine(damageable.KnockBack(gameObject.transform, knockBackPower));

    //                }

    //            }

    //            yield return new WaitForSeconds(meleeAttackSpeed);
    //            readyMeleeAttack = true;

    //        }

    //    }

    //    private List<Collider2D> GetEnemyInsideMeleeAngle() //Get the enemy inside the angle of the melee attack
    //    {
    //        List<Collider2D> enemyInsideAngle = new List<Collider2D>();

    //        Collider2D[] enemyInsideArea = Physics2D.OverlapCircleAll(transform.position, meleeAttackDistance, myEnemyLayer);

    //        if(enemyInsideArea.Length > 0)
    //        {
    //            foreach (var item in enemyInsideArea)
    //            {
    //                Vector2 dir = (item.transform.position - transform.position).normalized;

    //                if(Vector2.Angle(attackHolder.transform.right, dir) < viewAngle / 2)
    //                {
    //                    enemyInsideAngle.Add(item);
    //                }
    //            }
    //        }

    //        return enemyInsideAngle;
    //    }


    //    private Vector2 DirFromAngle(float eulerY, float angleInDegree)
    //    {
    //        angleInDegree += eulerY;

    //        return new Vector2(Mathf.Sin(angleInDegree * Mathf.Deg2Rad), Mathf.Cos(angleInDegree * Mathf.Deg2Rad));

    //    }

    //    protected override void OnDrawGizmosSelected()
    //    {
    //        //base.OnDrawGizmosSelected();
    //        if (!debugMode) { return; }

    //        base.OnDrawGizmosSelected();

    //#if UNITY_EDITOR
    //        if (canRangeAttack)
    //        {
    //            Handles.color = Color.white;
    //            Handles.DrawWireDisc(transform.position, transform.forward, rangedAttackDistance);
    //        }

    //        if (canMeleeAttack)
    //        {
    //            Handles.color = Color.white;
    //            Handles.DrawWireDisc(transform.position, transform.forward, meleeAttackDistance);
    //            Vector3 angle1 = DirFromAngle(-attackHolder.eulerAngles.z + 90, -viewAngle / 2);
    //            Vector3 angle2 = DirFromAngle(-attackHolder.eulerAngles.z + 90, viewAngle / 2);
    //            Handles.DrawLine(transform.position, transform.position + angle1 * meleeAttackDistance);
    //            Handles.DrawLine(transform.position, transform.position + angle2 * meleeAttackDistance);
    //        }
    //#endif



    //    }


}
