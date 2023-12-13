using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Rigidbody2D rb;

    const float BULLET_LIFETIME = 8f;

    //Bullet Damage
    private float bulletDamage;

    //Bullet Speed
    private float _bulletSpeed;
    public float bulletSpeed
    {
        private get { return _bulletSpeed; }
        set { _bulletSpeed = value; }
    }

    //For bullet to know what to hit
    private Collider2D raycast;
    public float rayRadius;

    [SerializeField] private LayerMask _whatToHit;
    private LayerMask temp_WhatToHit;

    private Vector2 startPoint;
    private float distanceDestroy;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        //temp_WhatToHit = _whatToHit;
        //whatToHit = _whatToHit;
    }

    private void OnEnable()
    {
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
        rb.velocity = transform.right * _bulletSpeed * Time.deltaTime;

        raycast = Physics2D.OverlapCircle(transform.position, rayRadius, temp_WhatToHit);

        if (raycast != null)
        {
            var entityDamageable = raycast?.GetComponent<IDamageable>();
            if (entityDamageable != null)
            {
                //If the raycast detect object
                
                var direction = (raycast.transform.position - transform.position).normalized;

                //entityDamageable.KnockBack(direction * 10f);
                entityDamageable.TakeDamage(null, bulletDamage);
            }

            //Debug.Log("I Hit, " + raycast.name);
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

    public void SetDamage(float damage)
    {
        bulletDamage = damage;
    }
    private void BulletHitBehaviour()
    {
        gameObject.SetActive(false);
    }

    public void SetDistanceLimit(Vector2 _startPoint, float _distanceDestroy)
    {
        startPoint = _startPoint;
        distanceDestroy = _distanceDestroy;
    }

    private void DestroyOnDistance()
    {
        //Destroy this object on desired distance
        var distance = Vector2.Distance(startPoint, transform.position);
        
        if(distance >= distanceDestroy)
        {
            BulletHitBehaviour();
        }
    }
    IEnumerator BulletLifeTime()
    {
        //Destroy this object in specific time
        yield return new WaitForSeconds(BULLET_LIFETIME);
        BulletHitBehaviour();
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        //Gizmos.DrawLine(transform.position, (Vector2)transform.position + (Vector2.right * rayLength));
        Gizmos.DrawWireSphere(transform.position, rayRadius);
    }

}
