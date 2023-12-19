using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class WeaponHolder : MonoBehaviour
{
    private Entities myEntity;
    private CollectingMyEnemy collectedEnemy;

    [SerializeField] private Transform holder;
    [SerializeField] private GameObject bulletPrefab;

    [SerializeField] private float bulletDamage = 10f;
    [SerializeField] private float bulletSpeed = 10f;

    [SerializeField] private float fireRate;
    private float _fireRate;

    private bool stopAiming = false;
    private Vector3 dir;
    private float angle;

    public Vector3 getAimDir
    {
        get { return dir.normalized; }
    }
    public bool StopAimingStatus
    {
        set { stopAiming = value; }
        get { return stopAiming; }
    }
    public float GetFireRate
    {
        get { return fireRate; }
    }
    public float GetCurrentFireRate
    {
        set { _fireRate = value; }
        get { return _fireRate; }
    }
    public GameObject GetProjectilePrefab
    {
        get { return bulletPrefab; }
    }
    public float GetProjectileSpeed
    {
        get { return bulletSpeed; }
    }
    public float GetProjectileDamage
    {
        get { return bulletDamage; }
    }

    private void Start()
    {
        myEntity = GetComponent<Entities>();
        collectedEnemy = GetComponent<CollectingMyEnemy>();
    }

    private void Update()
    {
        if (!stopAiming) { 
            Aiming();
        }
    }

    private void Aiming()
    {
        Quaternion q;

        if (collectedEnemy.GetNearestEnemy != null)
        {
            //Direct rotation toward to the enemy position
            dir = collectedEnemy.GetNearestEnemy.position - holder.position;

            angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
            q = Quaternion.AngleAxis(angle, Vector3.forward);
            holder.rotation = Quaternion.Slerp(holder.rotation, q, 150 * Time.deltaTime);
        }
        else
        {
            if (myEntity.GetMoveDirection != Vector2.zero)
            {
                dir = myEntity.GetMoveDirection;
                //Direct rotation toward to the direction movement
                angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
                q = Quaternion.AngleAxis(angle, Vector3.forward);
                holder.rotation = Quaternion.Slerp(holder.rotation, q, 5 * Time.deltaTime);
            }
        }


        Vector3 Scale = Vector3.one;
        if (angle > 90 || angle < -90)
        {
            Scale.x = -1;
            Scale.y = -1;
        }
        holder.localScale = new Vector3(1 * transform.localScale.x, Scale.y, 1);
    }

}
