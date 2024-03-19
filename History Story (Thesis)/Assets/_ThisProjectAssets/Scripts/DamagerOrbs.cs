using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamagerOrbs : MonoBehaviour
{
    private Entities entity;


    private void Awake()
    {
        transform.root.TryGetComponent<Entities>(out entity);
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        IDamageable damageable = collision.GetComponent<IDamageable>();
        if(damageable != null && entity != null)
        {
            damageable.TakeDamage(entity.GetEntityStats.currentDamage, entity, false);
        }
    }
}
