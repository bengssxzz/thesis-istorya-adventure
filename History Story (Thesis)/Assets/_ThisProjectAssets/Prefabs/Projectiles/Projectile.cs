using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    const float BULLET_LIFETIME = 7f;

    private Rigidbody2D rb;
    private AudioSource audioSource;

    private Entities entityHost; //Host entity kung kanino galing tong projectile

    private Vector2 direction;

    [SerializeField] private AudioClip createSound;

    //Bullet Damage
    [SerializeField] private float additionalDamage = 0f;
    public float hostDamage { get; private set; }

    //Bullet Speed
    [SerializeField] private float _bulletSpeed = 50;
    private float bulletSpeed { get => _bulletSpeed; }

    //For bullet to know what to hit
    private Collider2D raycast;
    [SerializeField] private float rayRadius;

    [SerializeField] private LayerMask _whatToHit;
    private LayerMask temp_WhatToHit;

    private Vector2 startPoint;
    private float distanceLimit;




    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        audioSource = GetComponent<AudioSource>();
    }



    public void InitializeProjectile(Entities host, Vector2 dir, float _distanceLimit, LayerMask addMask)
    {
        if (host != null)
        {
            entityHost = host;
            hostDamage = host.GetEntityStats.maxDamage;
            startPoint = host.transform.position;
        }

        direction = dir;
        distanceLimit = _distanceLimit;

        SetLayerMask(addMask);
    }

    private void OnEnable()
    {
        //Play sound on enable
        if (createSound != null)
        {
            audioSource.clip = createSound;
            audioSource.Play();
        }

        temp_WhatToHit = _whatToHit;
        StartCoroutine(BulletLifeTime()); //Start the timer for the lifetime of the bullet
    }
    private void OnDisable()
    {
        //Whenever this object disable in hierarchy
        temp_WhatToHit = _whatToHit;
    }

    private void Update()
    {
        DestroyOnDistance();
    }

    private void FixedUpdate()
    {
        //Bullet movement
        rb.velocity = direction * bulletSpeed * Time.deltaTime;

        raycast = Physics2D.OverlapCircle(transform.position, rayRadius, temp_WhatToHit);

        if (raycast != null)
        {
            var entityDamageable = raycast?.GetComponent<IDamageable>();
            if (entityDamageable != null)
            {
                //If the raycast detect entity

                float computedDamage = hostDamage + additionalDamage;
                entityDamageable.TakeDamage(computedDamage, entityHost, true);
            }
            BulletHitBehaviour();
        }

    }


    public void SetLayerMask(params LayerMask[] addMask)
    {
        temp_WhatToHit = _whatToHit;
        foreach (LayerMask item in addMask)
        {
            temp_WhatToHit += item;
        }
    }

    private void DestroyOnDistance() //Disable this project in limited distance
    {
        //Destroy this object on desired distance
        var distance = Vector2.Distance(startPoint, transform.position);

        if (distance >= distanceLimit)
        {
            BulletHitBehaviour();
        }
    }
    private IEnumerator BulletLifeTime() //Disable this project in limited time
    {
        //Destroy this object in specific time
        yield return new WaitForSeconds(BULLET_LIFETIME);
        BulletHitBehaviour();
    }

    protected virtual void BulletHitBehaviour()
    {
        gameObject.SetActive(false);
    }



    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, rayRadius);
    }







    ////CONTINUE NEXT TIME

    //private const float OFFSET_MAX_LIMIT = 0.3f;

    //[Header("Bullet Damage")]
    //[SerializeField] private float additionalDamage = 0f;
    //[SerializeField] private float additionalCriticalDamage = 0f;
    //[SerializeField] private bool canCritical = true;

    //[Header("Distance")]
    //[SerializeField] private bool useMaxLimitDistance = true;


    //private Vector2 startPosition;
    //private Vector2 targetPosition;
    //private float maxLimitDistance = 0f;

    //private float bulletDamage;
    //private float bulletCriticalDamage;
    //private bool isCritical = false;


    //private void OnEnable()
    //{
    //    startPosition = transform.position; // Start position
    //}

    //public void InitializeProjectile(Entities entityHost, Vector2 targetPosition, float maxDistance)
    //{
    //    bulletDamage = entityHost.GetEntityStats.damage + additionalDamage;
    //    bulletCriticalDamage = entityHost.GetEntityStats.criticalDamage + additionalCriticalDamage;

    //    this.targetPosition = targetPosition;
    //    maxLimitDistance = maxDistance + OFFSET_MAX_LIMIT;

    //}



    //private void FixedUpdate()
    //{
    //    ProjectileBehaviour();
    //}


    //public virtual void ProjectileBehaviour()
    //{
    //    if (useMaxLimitDistance)
    //    {
    //        if(Vector2.Distance(startPosition, transform.position) < maxLimitDistance)
    //        {
    //            //If inside the range
    //        }
    //        else
    //        {
    //            //Out side the attack range
    //            gameObject.SetActive(false);
    //        }

    //    }
    //}




















}
