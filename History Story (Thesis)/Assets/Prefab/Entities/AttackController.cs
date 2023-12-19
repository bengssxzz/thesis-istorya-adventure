using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

#if UNITY_EDITOR
using UnityEditor;
#endif

public class AttackController : DetectMyEnemies
{
    private Entities entity;

    [Space(10)]
    [SerializeField] private Transform attackHolder;
    [SerializeField] private string projectileTag;

    public Transform EnemyInsideArea;
    public bool EnableAttacking { get; set; }
    [Space(20)]
    [Header("Ranged Attack Type")]
    [SerializeField] private bool canRangeAttack = true;
    [SerializeField] private List<Projectile> projectileShot = new List<Projectile>();
    [SerializeField][Range(0f, 50f)] private float rangedAttackDistance;
    [SerializeField] private float inBetweenTime = 0.1f;
    [SerializeField] private bool canMoveOnShoot = false;
    private bool readyRangedAttack = true;

    [Space(10)]
    [Header("Melee Attack Type")]
    [SerializeField] private bool canMeleeAttack = true;
    [SerializeField] [Range(0f, 50f)] private float meleeAttackDistance;
    [SerializeField] [Range(0, 360)] private float viewAngle;
    [SerializeField] private float intervalTime = 0.3f;
    [SerializeField] private int slashCount = 1;
    [SerializeField] private float knockBackPower = 15f;
    private bool readyMeleeAttack = true;

   

    //[Space]
    //private float rangedAttackField, meleeAttackField;

    private bool stopAiming = false;
    private Vector3 dir;
    private float angle;



    private void Awake()
    {
        entity = GetComponent<Entities>();
    }

    protected override void Start()
    {
        base.Start();

        //rangedAttackField = entity.GetEntityStats.rangedAttackField;
        //meleeAttackField = entity.GetEntityStats.meleeAttackField;
    }


    private void Update()
    {
        Aiming(); //Aim the holder

        if (detectRadius <= -1)
        {
            detectRadius = rangedAttackDistance;
        }

        if (GetNearestEnemy != null)
        {
            if(!EnableAttacking) { return; } //To stop the attack

            if (canRangeAttack && distanceToNearestEnemy <= rangedAttackDistance && distanceToNearestEnemy > meleeAttackDistance)
            {
                //RangedAttackBehaviour();
                EnemyInsideArea = GetNearestEnemy;
                StartCoroutine(RangedAttack(entity.GetEntityStats.currentAttackSpeed));
            }else if (canMeleeAttack && distanceToNearestEnemy <= meleeAttackDistance)
            {
                StartCoroutine(MeleeAttack(intervalTime));
            }

            EnemyInsideArea = null;

        }
    }


    private void Aiming() //Controll the aiming of the entity toward to nearest enemy
    {
        Quaternion q;

        if (stopAiming) { return; }

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
            if (entity.GetMoveDirection != Vector2.zero)
            {
                dir = entity.GetMoveDirection;
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
    private Vector2 GetDirectionTowardsEnemy() => (GetNearestEnemy.position - attackHolder.position).normalized;

    private IEnumerator RangedAttack(float attackSpeed) //Handle the range attack
    {
        if (readyRangedAttack)
        {
            readyRangedAttack = false;

            //attackSpeed = attackSpeed / 100;
            float triggerTime = 10f / attackSpeed;

            Debug.Log("Ranged Attack Speed: " + attackSpeed);
            
            foreach (Projectile projectile in projectileShot)
            {
                //Create new projectile
                GameObject newProjectile = ObjectPooling.instance.GetObjectInPool(projectileTag, projectile.gameObject);
                var projectileScript = newProjectile.GetComponent<Projectile>();
                projectileScript.InitializeProjectile(entity, GetDirectionTowardsEnemy(), rangedAttackDistance, myEnemyLayer);
                projectileScript.transform.position = attackHolder.position;
                projectileScript.transform.rotation = attackHolder.localRotation;

                if (projectileShot.Count > 1)
                {
                    //If the projectile is more than 0, run the timeinterval of each projectile
                    yield return new WaitForSeconds(inBetweenTime);
                }
            }

            yield return new WaitForSeconds(triggerTime);
            readyRangedAttack = true;
        }
    }
    private IEnumerator MeleeAttack(float meleeAttackSpeed) //Handle the melee attack
    {
        if (readyMeleeAttack)
        {
            readyMeleeAttack = false;

            Collider2D[] enemies = GetEnemyInsideMeleeAngle().ToArray();

            foreach (var enemy in enemies)
            {
                var damageable = enemy.GetComponent<IDamageable>();
                if (damageable != null)
                {
                    Debug.Log("Taking malee damage");
                    damageable.TakeDamage(entity.GetEntityStats.damage, entity);
                    StartCoroutine(damageable.KnockBack(gameObject.transform, knockBackPower));
                    
                }

            }

            yield return new WaitForSeconds(meleeAttackSpeed);
            readyMeleeAttack = true;

        }
        
    }

    private List<Collider2D> GetEnemyInsideMeleeAngle() //Get the enemy inside the angle of the melee attack
    {
        List<Collider2D> enemyInsideAngle = new List<Collider2D>();

        Collider2D[] enemyInsideArea = Physics2D.OverlapCircleAll(transform.position, meleeAttackDistance, myEnemyLayer);

        if(enemyInsideArea.Length > 0)
        {
            foreach (var item in enemyInsideArea)
            {
                Vector2 dir = (item.transform.position - transform.position).normalized;

                if(Vector2.Angle(attackHolder.transform.right, dir) < viewAngle / 2)
                {
                    enemyInsideAngle.Add(item);
                }
            }
        }

        return enemyInsideAngle;
    }


    private Vector2 DirFromAngle(float eulerY, float angleInDegree)
    {
        angleInDegree += eulerY;

        return new Vector2(Mathf.Sin(angleInDegree * Mathf.Deg2Rad), Mathf.Cos(angleInDegree * Mathf.Deg2Rad));

    }

    protected override void OnDrawGizmosSelected()
    {
        //base.OnDrawGizmosSelected();
        if (!debugMode) { return; }

        base.OnDrawGizmosSelected();

#if UNITY_EDITOR
        if (canRangeAttack)
        {
            Handles.color = Color.white;
            Handles.DrawWireDisc(transform.position, transform.forward, rangedAttackDistance);
        }

        if (canMeleeAttack)
        {
            Handles.color = Color.white;
            Handles.DrawWireDisc(transform.position, transform.forward, meleeAttackDistance);
            Vector3 angle1 = DirFromAngle(-attackHolder.eulerAngles.z + 90, -viewAngle / 2);
            Vector3 angle2 = DirFromAngle(-attackHolder.eulerAngles.z + 90, viewAngle / 2);
            Handles.DrawLine(transform.position, transform.position + angle1 * meleeAttackDistance);
            Handles.DrawLine(transform.position, transform.position + angle2 * meleeAttackDistance);
        }
#endif



    }

//    private void OnDrawGizmos()
//    {
//        if (!debugMode) { return; }

////#if UNITY_EDITOR
////        Gizmos.color = Color.white;
////        Handles.DrawWireDisc(transform.position, transform.forward, meleeAttackField);
////        //Handles.DrawWireArc(transform.position, transform.forward, attackHolder.eulerAngles * 90, viewAngle, viewRadius);

////        Vector3 angle1 = DirFromAngle(-attackHolder.eulerAngles.z + 90, -viewAngle / 2);
////        Vector3 angle2 = DirFromAngle(-attackHolder.eulerAngles.z + 90, viewAngle / 2);

////        Gizmos.color = Color.white;
////        Handles.DrawLine(transform.position, transform.position + angle1 * meleeAttackField);
////        Handles.DrawLine(transform.position, transform.position + angle2 * meleeAttackField);

////#endif
//    }

    

}
