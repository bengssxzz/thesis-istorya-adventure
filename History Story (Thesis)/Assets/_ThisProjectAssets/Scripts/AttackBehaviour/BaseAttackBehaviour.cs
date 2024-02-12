using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public abstract class BaseAttackBehaviour : MonoBehaviour
{
    [SerializeField] protected Projectile projectilePrefab;
    [SerializeField] protected float amount = 0;
    [SerializeField] protected bool useTimer = false;
    [SerializeField] protected float intervalShoot;

    protected AttackController GetAttackController;
    protected int GetAmountToInt { get { return Mathf.RoundToInt(amount); } }

    public bool attackIsPlaying { get; protected set; }
    public float GetRemainingTime { get { return Time.time - startTimer; } }

    protected float startTimer = 0;
    //private float remainingTimer = 0;


    protected bool DoneTimer()
    {
        float timer = Time.time - startTimer;
        if (timer < amount)
        {
            //Not done yet
            return false;
        }

        //Done
        return true;   
    }
    public void TriggerFire(AttackController controller)
    {
        if (GetAttackController == null)
            GetAttackController = controller;


        if (useTimer)
        {
            StartCoroutine(WhileLoopBehaviour());
        }
        else
        {
            StartCoroutine(ForLoopBehaviour());
        }
    }

    protected void InitializeProjectile(Vector3 startPosition, Vector3 direction)
    {
        GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
        newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, direction, GetAttackController.GetRangedAttackDistance);
        newBul.transform.position = startPosition;
    }

    private IEnumerator ForLoopBehaviour()
    {
        attackIsPlaying = true;
        yield return StartCoroutine(FireBehaviourForLoop());
        attackIsPlaying = false;
    }
    private IEnumerator WhileLoopBehaviour()
    {
        startTimer = Time.time;

        attackIsPlaying = true;
        yield return StartCoroutine(FireBehaviourWhileLoop());
        attackIsPlaying = false;
    }

    protected abstract IEnumerator FireBehaviourForLoop();
    protected virtual IEnumerator FireBehaviourWhileLoop()
    {
        yield return null;
        //startTimer = Time.time;
    }



}
