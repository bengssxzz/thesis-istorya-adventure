using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private Rigidbody2D rb;

    const float BULLET_LIFETIME = 8f;

    //Bullet Damage
    private float _bulletDamage;
    public float bulletDamage
    {
        set { _bulletDamage = value; }
    }

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
    public LayerMask whatToHit
    {
        get { return _whatToHit; }
        set
        {
            temp_WhatToHit += value;
        }
    }

    

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        whatToHit = _whatToHit;
    }

    private void OnEnable()
    {
        //Whenever this object enable in hierarchy
        //whatToHit = _whatToHit;
        StartCoroutine(BulletLifeTime()); //Start the timer for the lifetime of the bullet
    }
    private void OnDisable()
    {
        //Whenever this object disable in hierarchy
        temp_WhatToHit = _whatToHit;
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

                entityDamageable.KnockBack(direction * 10f);
                entityDamageable.TakeDamage(10);
            }

            //Debug.Log("I Hit, " + raycast.name);
            BulletHitBehaviour();
        }

    }

    private void BulletHitBehaviour()
    {
        gameObject.SetActive(false);
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        var damagable = collision.GetComponent<IDamageable>();

        if(damagable != null)
        {
            damagable.TakeDamage(_bulletDamage);
        }
    }


    IEnumerator BulletLifeTime()
    {
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
