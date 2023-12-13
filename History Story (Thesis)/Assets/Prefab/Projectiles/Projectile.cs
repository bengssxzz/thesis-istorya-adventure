using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    const float BULLET_LIFETIME = 6f;

    private Rigidbody2D rb;
    private AudioSource audioSource;

    [SerializeField] private AudioClip createSound;

    //Bullet Damage
    private bool thisIsCritical = false;
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

    private Entities entityHost; //Host entity kung kanino galing tong projectile


    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        audioSource = GetComponent<AudioSource>();
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
        rb.velocity = transform.right * bulletSpeed * Time.deltaTime;

        raycast = Physics2D.OverlapCircle(transform.position, rayRadius, temp_WhatToHit);

        if (raycast != null)
        {
            var entityDamageable = raycast?.GetComponent<IDamageable>();
            if (entityDamageable != null)
            {
                //If the raycast detect entity

                //var direction = (raycast.transform.position - transform.position).normalized;
                //entityDamageable.KnockBack(direction * 10f);
                entityDamageable.TakeDamage(entityHost, thisIsCritical, ComputeDamage());
            }

            //Debug.Log("I Hit, " + raycast.name);
            BulletHitBehaviour();
        }

    }

    public void InitializeProjectile(Entities host, float _distanceLimit, LayerMask addMask)
    {
        entityHost = host;
        hostDamage = host.GetEntityStats.damage;

        distanceLimit = _distanceLimit;
        startPoint = host.transform.position;

        SetLayerMask(addMask);

        float criticalChange = host.GetEntityStats.criticalChance * 100;
        thisIsCritical = criticalChange >= Random.Range(0f, 100f); //Calculate critical chance
    }
    public void SetLayerMask(params LayerMask[] addMask)
    {
        temp_WhatToHit = _whatToHit;
        foreach (LayerMask item in addMask)
        {
            temp_WhatToHit += item;
        }
    }

    public float ComputeDamage() //Compute this projectile damage
    {
        float computedDamage = 0f;

        computedDamage = hostDamage + additionalDamage;

        if (thisIsCritical)
        {
            float criticalDamage = computedDamage * entityHost.GetEntityStats.criticalDamage;
            computedDamage += criticalDamage;
        }

        return computedDamage;
    }

    private void BulletHitBehaviour()
    {
        gameObject.SetActive(false);
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



    private void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, rayRadius);
    }












}
