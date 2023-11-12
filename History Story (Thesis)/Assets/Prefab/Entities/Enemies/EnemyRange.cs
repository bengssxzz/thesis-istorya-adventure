using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class EnemyRange : Enemy
{
    [SerializeField] private Transform holder;
    private WeaponHolder holderData;

    private bool isAttacking = false;


    protected override void Start()
    {
        base.Start();

        holderData = GetComponent<WeaponHolder>();

        StartCoroutine(RapidFire());
    }

    protected override void Update()
    {
        //Override
        base.Update();
    }

    protected override void ChaseMyEnemy()
    {
        if (!isAttacking)
        {
            base.ChaseMyEnemy();
        }
    }

    IEnumerator RapidFire()
    {
        if (targetInRange)
        {
            holderData.StopAimingStatus = true;
            isAttacking = true;
            if (myEnemies.getNearestEnemy != null)
            {
                for (int i = 0; i < 5; i++)
                {
                    Create.CreateProjectile("enemy_bullet", holderData.GetProjectilePrefab, holder.position, holder.rotation,
                        holderData.GetProjectileSpeed, holderData.GetProjectileDamage, LayerMask.GetMask("Player"));
                    yield return new WaitForSeconds(holderData.GetFireRate);
                }
                holderData.StopAimingStatus = false;
                isAttacking = false;
            }
            
        }

        yield return new WaitForSeconds(1);
        
        StartCoroutine(RapidFire());

    }

}
