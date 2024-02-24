using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using System;
using UnityEngine.Rendering.Universal;

public class Projectile : MonoBehaviour
{
    [SerializeField] private SpriteRenderer spriteProjectile;
    [SerializeField] private Light2D projectileLight;



    [SerializeField] private float colliderSize;


    [SerializeField] private LayerMask combinedMask;

    private Entities hostEntity;
    private float damage = 0;
    private bool isCritical = false;



    private void OnDisable()
    {
        combinedMask = 0;
    }



    private void Update()
    {
       
    }
    private void FixedUpdate()
    {
        Collider2D colliderHit = Physics2D.OverlapCircle(transform.position, colliderSize, combinedMask);

        if (colliderHit != null)
        {
            //Hit something
            var damagableObject = colliderHit.GetComponent<IDamageable>();

            if (damagableObject != null)
            {
                damagableObject.TakeDamage(damage, hostEntity, isCritical);
            }

            ProjectileHit();
        }
    }


    private void ProjectileHit()
    {
        gameObject.SetActive(false);
    }

    public void InitalizationProjectile(Entities entity, float additionalDamage, float overwriteCritical, LayerMask layerToHit, Color color)
    {
        bool critical = false;
        //var calcualtedDamage = entity.GetCalculatedDamage(out critical, overwriteCritical);
        var calcualtedDamage = entity.GetAttackHandler.GetCalculatedDamage(out critical, overwriteCritical);

        hostEntity = entity;
        this.damage = calcualtedDamage + additionalDamage;
        this.isCritical = critical;
        combinedMask = layerToHit;


        spriteProjectile.color = color;
        projectileLight.color = color;
    }







    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, colliderSize);
    }




















    //private const float OFFSET_MAX_LIMIT = 0.5f;

    //[Header("Bullet Damage")]
    //[SerializeField] private float projectileSpeed = 1f;
    //[SerializeField] private float additionalDamage = 0f;
    //[SerializeField] private float additionalCriticalDamage = 0f;
    //[SerializeField] private bool criticalForever = false;
    //[SerializeField] private float bulletSize;

    //[SerializeField] private LayerMask defaultHit;



    //private Vector2 startPosition;
    //private Vector2 directionVelocity;
    //private float maxLimitDistance;
    //[SerializeField] private LayerMask combineLayer;

    //private EntityStatistics entityStats;
    //private AttackController attackController;
    //private Entities hostEntity;
    //private Rigidbody2D rb;

    //private float totalDamage;
    //private bool isCritical = false;


    //private void Awake()
    //{
    //    rb = GetComponent<Rigidbody2D>();
    //}

    //private void OnEnable()
    //{
    //    startPosition = transform.position; // Start position
    //}
    //private void OnDisable()
    //{
    //    combineLayer = 0; //Clear the layermask
    //}

    //public void InitializeProjectile(Entities entityHost, Vector2 velocityDirection, float maxDistance, LayerMask targetLayer)
    //{
    //    hostEntity = entityHost;

    //    entityStats = entityHost.GetEntityStats;
    //    attackController = entityHost.GetAttack_Controller;
    //    directionVelocity = velocityDirection;


    //    combineLayer = defaultHit | targetLayer;


    //    var randomLimit = ThesisUtility.RandomGetFloat(0, OFFSET_MAX_LIMIT);
    //    maxLimitDistance = maxDistance + randomLimit;

    //    ProjectileDamage();
    //}

    //private void Update()
    //{
    //    ProjectileLifetime();
    //}

    //private void FixedUpdate()
    //{
    //    ProjectileMovement();
    //}


    //public void OverrideProjectileSpeed(float overrideSpeed)
    //{
    //    projectileSpeed = overrideSpeed;
    //}
    //public void OverrideProjectileMaxDistance(float overrideMaxDistance)
    //{
    //    var randomLimit = ThesisUtility.RandomGetFloat(0, OFFSET_MAX_LIMIT);
    //    maxLimitDistance = overrideMaxDistance + randomLimit;
    //}
    //public void OverrideProjectileDamage(float overrideDamage)
    //{
    //    totalDamage = overrideDamage;
    //    isCritical = false;
    //}


    //protected virtual void ProjectileDamage() //Handle damage
    //{
    //    if (entityStats != null)
    //    {
    //        totalDamage = entityStats.currentDamage + additionalDamage;
    //        isCritical = false;

    //        if (ThesisUtility.RandomGetChanceBool(entityStats.currentCriticalChance) || criticalForever)
    //        {
    //            //If critical
    //            totalDamage += entityStats.currentCriticalDamage;

    //            isCritical = true;
    //        }

    //    }
    //}
    //protected virtual void ProjectileMovement() //Handle movement
    //{
    //    //Bullet movement
    //    rb.velocity = directionVelocity * projectileSpeed * Time.deltaTime;
    //}
    //protected virtual void ProjectileLifetime() //Handle the life of the bullet
    //{
    //    if (Vector2.Distance(startPosition, transform.position) < maxLimitDistance)
    //    {
    //        //If inside the range
    //        Collider2D colliderHit = Physics2D.OverlapCircle(transform.position, bulletSize, combineLayer);

    //        if (colliderHit != null)
    //        {
    //            var entityDamageable = colliderHit?.GetComponent<IDamageable>();
    //            if (entityDamageable != null)
    //            {
    //                //If the raycast detect entity
    //                ProjectileHit();
    //                entityDamageable.TakeDamage(totalDamage, hostEntity, isCritical);
    //            }

    //            ProjectileHit();
    //        }

    //    }
    //    else
    //    {
    //        //Out side the attack range
    //        ProjectileOnMaxLimit();
    //    }
    //}

    //protected virtual void ProjectileHit() //Projectile behaviour when hit the assign layer
    //{
    //    gameObject.SetActive(false);
    //}
    //protected virtual void ProjectileOnMaxLimit() //Projectile behaviour when outside the range
    //{
    //    gameObject.SetActive(false);
    //}

}
