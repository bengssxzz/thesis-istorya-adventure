using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CollectingMyEnemy))]
public class Enemy : Entities
{
    private Rigidbody2D rb;
    protected CollectingMyEnemy myEnemies;

    [SerializeField] protected bool showGizmos = false;
    private Transform targetEnemy;
    
    protected bool targetInRange = false;

    public float stopDistance;
    public float FleeDistance;


    private void Awake()
    {
        rb = GetComponent<Rigidbody2D>();
        myEnemies = GetComponent<CollectingMyEnemy>();
    }

    protected override void Start()
    {
        base.Start();
        targetEnemy = myEnemies.getNearestEnemy;
    }

    protected override void Update()
    {
        base.Start();
        
        if (targetInRange)
        {
            Attack();
        }
        
    }

    protected override void FixedUpdate()
    {
        base.Start();

        ChaseMyEnemy();
        FleeToMyEnemy();
    }

    protected virtual void DetectRangeBehaviour()
    {
        
    }

    protected virtual void ChaseMyEnemy()
    {
        targetEnemy = myEnemies.getNearestEnemy;
        
        if (targetEnemy == null) { return; }

        move_dir = targetEnemy.position - transform.position;
        if (Vector2.Distance(transform.position, targetEnemy.position) < stopDistance)
        {
            targetInRange = true;
            rb.velocity = Vector2.zero;
            return;
        }
        targetInRange = false;
        rb.velocity = move_dir.normalized * GetEntityStats.currentMoveSpeed * Time.deltaTime;
    }

    protected virtual void FleeToMyEnemy()
    {
        targetEnemy = myEnemies.getNearestEnemy;

        if (targetEnemy == null) { return; }

        move_dir = targetEnemy.position - transform.position;
        if (Vector2.Distance(transform.position, targetEnemy.position) < FleeDistance)
        {
            rb.velocity = (move_dir.normalized * -GetEntityStats.currentMoveSpeed) * Time.deltaTime;
        }
        
    }

    protected virtual void Attack()
    {
        //Attack
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        var player = collision.GetComponent<IDamageable>();
        
        if(player != null) 
        {
            player.TakeDamage(50);
        }

    }


    private void OnDrawGizmos()
    {
        if (!showGizmos) {
            return;
        }

        Gizmos.color = Color.green;
        Gizmos.DrawWireSphere(transform.position, stopDistance);

        Gizmos.color = Color.red;   
        Gizmos.DrawWireSphere(transform.position, FleeDistance);

    }







}
