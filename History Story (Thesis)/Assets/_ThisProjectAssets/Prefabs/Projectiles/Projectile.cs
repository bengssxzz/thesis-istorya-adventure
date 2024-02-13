using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class Projectile : MonoBehaviour
{
    //const float BULLET_LIFETIME = 7f;

    //private Rigidbody2D rb;
    //private AudioSource audioSource;

    //private Entities entityHost; //Host entity kung kanino galing tong projectile

    //private Vector2 direction;

    //[SerializeField] private AudioClip createSound;

    ////Bullet Damage
    //[SerializeField] private float additionalDamage = 0f;
    //public float hostDamage { get; private set; }

    ////Bullet Speed
    //[SerializeField] private float _bulletSpeed = 50;
    //private float bulletSpeed { get => _bulletSpeed; }

    ////For bullet to know what to hit
    //private Collider2D raycast;
    //[SerializeField] private float rayRadius;

    //[SerializeField] private LayerMask _whatToHit;
    //private LayerMask temp_WhatToHit;

    //private Vector2 startPoint;
    //private float distanceLimit;




    //private void Awake()
    //{
    //    rb = GetComponent<Rigidbody2D>();
    //    audioSource = GetComponent<AudioSource>();
    //}



    //public void InitializeProjectile(Entities host, Vector2 dir, float _distanceLimit, LayerMask addMask)
    //{
    //    if (host != null)
    //    {
    //        entityHost = host;
    //        hostDamage = host.GetEntityStats.maxDamage;
    //        startPoint = host.transform.position;
    //    }

    //    direction = dir;
    //    distanceLimit = _distanceLimit;

    //    SetLayerMask(addMask);
    //}

    //private void OnEnable()
    //{
    //    //Play sound on enable
    //    if (createSound != null)
    //    {
    //        audioSource.clip = createSound;
    //        audioSource.Play();
    //    }

    //    temp_WhatToHit = _whatToHit;
    //    StartCoroutine(BulletLifeTime()); //Start the timer for the lifetime of the bullet
    //}
    //private void OnDisable()
    //{
    //    //Whenever this object disable in hierarchy
    //    temp_WhatToHit = _whatToHit;
    //}

    //private void Update()
    //{
    //    DestroyOnDistance();
    //}

    //private void FixedUpdate()
    //{
    //    //Bullet movement
    //    rb.velocity = direction * bulletSpeed * Time.deltaTime;

    //    raycast = Physics2D.OverlapCircle(transform.position, rayRadius, temp_WhatToHit);

    //    if (raycast != null)
    //    {
    //        var entityDamageable = raycast?.GetComponent<IDamageable>();
    //        if (entityDamageable != null)
    //        {
    //            //If the raycast detect entity

    //            float computedDamage = hostDamage + additionalDamage;
    //            entityDamageable.TakeDamage(computedDamage, entityHost, true);
    //        }
    //        BulletHitBehaviour();
    //    }

    //}


    //public void SetLayerMask(params LayerMask[] addMask)
    //{
    //    temp_WhatToHit = _whatToHit;
    //    foreach (LayerMask item in addMask)
    //    {
    //        temp_WhatToHit += item;
    //    }
    //}

    //private void DestroyOnDistance() //Disable this project in limited distance
    //{
    //    //Destroy this object on desired distance
    //    var distance = Vector2.Distance(startPoint, transform.position);

    //    if (distance >= distanceLimit)
    //    {
    //        BulletHitBehaviour();
    //    }
    //}
    //private IEnumerator BulletLifeTime() //Disable this project in limited time
    //{
    //    //Destroy this object in specific time
    //    yield return new WaitForSeconds(BULLET_LIFETIME);
    //    BulletHitBehaviour();
    //}

    //protected virtual void BulletHitBehaviour()
    //{
    //    gameObject.SetActive(false);
    //}



    //private void OnDrawGizmosSelected()
    //{
    //    Gizmos.color = Color.red;
    //    Gizmos.DrawWireSphere(transform.position, rayRadius);
    //}







    ////CONTINUE NEXT TIME

    private const float OFFSET_MAX_LIMIT = 0.3f;

    [Header("Bullet Damage")]
    [SerializeField] private float projectileSpeed = 1f;
    [SerializeField] private float additionalDamage = 0f;
    [SerializeField] private float additionalCriticalDamage = 0f;
    [SerializeField] private bool criticalForever = false;
    [SerializeField] private float bulletSize;

    [SerializeField] private LayerMask defaultHit;
    [SerializeField] private LayerMask entityToHit;
    [SerializeField] private LayerMask allHit;



    private Vector2 startPosition;
    private Vector2 directionVelocity;
    private float maxLimitDistance;
    private LayerMask layerToHit;

    private EntityStatistics entityStats;
    private AttackController attackController;
    private Entities hostEntity;
    private Rigidbody2D rb;

    private float totalDamage;
    private bool isCritical = false;


    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
    }

    private void OnEnable()
    {
        startPosition = transform.position; // Start position
    }
    private void OnDisable()
    {
        layerToHit = 0; //Clear the layermask
    }

    public void InitializeProjectile(Entities entityHost, Vector2 direction, float maxDistance)
    {
        hostEntity = entityHost;

        entityStats = entityHost.GetEntityStats;
        attackController = entityHost.GetAttack_Controller;
        directionVelocity = direction;

        LayerMask entityHit = attackController.GetMyEnemyLayer(); // Convert layer to int
        layerToHit = defaultHit | entityHit; // Perform bitwise OR operation

        entityToHit = entityHit;
        allHit = layerToHit;


        var randomLimit = ThesisUtility.RandomGetFloat(0, OFFSET_MAX_LIMIT);
        maxLimitDistance = maxDistance + randomLimit;

        ProjectileDamage();
    }

    private void Update()
    {
        ProjectileLifetime();
    }

    private void FixedUpdate()
    {
        ProjectileMovement();
    }



    public virtual void ProjectileDamage() //Handle damage
    {
        if (entityStats != null)
        {
            totalDamage = entityStats.currentDamage + additionalDamage;
            isCritical = false;

            if (ThesisUtility.RandomGetChanceBool(entityStats.currentCriticalChance) || criticalForever)
            {
                //If critical
                totalDamage += entityStats.currentCriticalDamage;

                isCritical = true;
            }

        }
    }
    public virtual void ProjectileMovement() //Handle movement
    {
        //Bullet movement
        rb.velocity = directionVelocity * projectileSpeed * Time.deltaTime;
    }
    public virtual void ProjectileLifetime() //Handle the life of the bullet
    {
        if (Vector2.Distance(startPosition, transform.position) < maxLimitDistance)
        {
            //If inside the range
            Collider2D colliderHit = Physics2D.OverlapCircle(transform.position, bulletSize, layerToHit);

            if (colliderHit != null)
            {
                var entityDamageable = colliderHit?.GetComponent<IDamageable>();
                if (entityDamageable != null)
                {
                    //If the raycast detect entity
                    ProjectileHit();
                    entityDamageable.TakeDamage(totalDamage, hostEntity, isCritical);
                }

                ProjectileHit();
            }

        }
        else
        {
            //Out side the attack range
            ProjectileOnMaxLimit();
        }
    }

    public virtual void ProjectileHit() //Projectile behaviour when hit the assign layer
    {
        gameObject.SetActive(false);
    }
    public virtual void ProjectileOnMaxLimit() //Projectile behaviour when outside the range
    {
        gameObject.SetActive(false);
    }


















}
