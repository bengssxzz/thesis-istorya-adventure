using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class AttackController : DetectMyEnemies
{
    private Entities entity;

    [Space(10)]
    [SerializeField] private Transform attackHolder;
    [SerializeField] private string projectileTag;

    [Header("Ranged Attack Type")]
    [SerializeField] private List<Projectile> projectileShot = new List<Projectile>();
    [SerializeField] private float inBetweenTime = 0.1f;
    [SerializeField] private bool canMoveOnShoot = false;

    private bool readyRangedAttack = true;
    //I am planning to add an angle attack type, kung 360deg shot ba? or 90deg shot

    [Header("Melee Attack Type")]
    [SerializeField] private float intervalTime = 0.3f;
    [SerializeField] private int slashCount = 1;
    private bool readyMeleeAttack = true;


    [Space]
    private float rangedAttackField, meleeAttackField;

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

        rangedAttackField = entity.GetEntityStats.rangedAttackField;
        meleeAttackField = entity.GetEntityStats.meleeAttackField;
    }


    private void Update()
    {
        Aiming(); //Aim the holder

        if (detectRadius <= -1)
        {
            detectRadius = entity.GetEntityStats.rangedAttackField;
        }

        if (nearestEnemy != null)
        {

            if (entity.GetEntityStats.canRangedAttack && distanceToNearestEnemy <= rangedAttackField && distanceToNearestEnemy > meleeAttackField)
            {
                //RangedAttackBehaviour();
                StartCoroutine(RangedAttack(entity.GetEntityStats.currentAttackSpeed));
            }else if (entity.GetEntityStats.canMeleeAttack && distanceToNearestEnemy <= meleeAttackField)
            {
                MeleeAttackBehaviour();
            }
        }
    }


    private void Aiming()
    {
        Quaternion q;

        if (stopAiming) { return; }

            if (nearestEnemy != null)
        {
            //Direct rotation toward to the enemy position
            dir = nearestEnemy.position - attackHolder.position;

            angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            q = Quaternion.AngleAxis(angle, Vector3.forward);
            attackHolder.rotation = Quaternion.Slerp(attackHolder.rotation, q, 150 * Time.deltaTime);
        }
        else
        {
            if (entity.getMoveDir != Vector2.zero)
            {
                dir = entity.getMoveDir;
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


    private IEnumerator RangedAttack(float attackSpeed)
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
                projectileScript.InitializeProjectile(entity, rangedAttackField, myEnemyLayer);
                projectileScript.transform.position = attackHolder.position;
                projectileScript.transform.rotation = attackHolder.localRotation;
                //var bullet = Create.CreateProjectile("player_bullet", projectile.gameObject, attackHolder.position, attackHolder.rotation,
                //50, 10, LayerMask.GetMask("Enemy"));

                //var bullet_script = bullet.GetComponent<Bullet>();
                //bullet_script.SetDistanceLimit(transform.position, rangedAttackField);

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


    private void MeleeAttackBehaviour()
    {
        Debug.Log("Melee Attack");
    }




    protected override void OnDrawGizmosSelected()
    {
        base.OnDrawGizmosSelected();
        if (!debugMode || entity == null) { return; }

        if (entity.GetEntityStats.canMeleeAttack)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(transform.position, entity.GetEntityStats.meleeAttackField);
        }

        if (entity.GetEntityStats.canRangedAttack)
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(transform.position, entity.GetEntityStats.rangedAttackField);
        }

    }

}
