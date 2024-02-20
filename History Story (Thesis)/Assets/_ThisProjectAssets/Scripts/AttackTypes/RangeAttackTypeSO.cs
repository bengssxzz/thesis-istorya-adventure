using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System.Threading;

public abstract class RangeAttackTypeSO : ScriptableObject
{
    [SerializeField] private Projectile projectilePrefab;
    [SerializeField] private float amount = 0;
    [SerializeField] private bool useTimer = false;
    [SerializeField] private float intervalDelay = 0.1f;

    private float startTimer;
    private bool isDone;

    public bool GetAttackDone { get { return isDone; } }

    protected bool FinishedTimer() //Check if the timer is finished
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
    protected void InitializeProjectile(Entities hostEntity, AttackHandler attackHandler, Vector3 startPosition, Vector3 direction, float distance)
    {
        var targetLayer = attackHandler.GetScannerEntities.GetTargetLayerMask;
        GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject, startPosition);
        newBul.GetComponent<Projectile>().InitializeProjectile(hostEntity, direction, distance, targetLayer);
        newBul.transform.position = startPosition;
    }



    public async void TriggerFire(AttackHandler attackHandler, CancellationToken cancellationToken)
    {
        if (useTimer)
        {
            await AttackType_Timer(attackHandler, cancellationToken);
        }
        else
        {
            await AttackType_Amount(attackHandler, cancellationToken);
        }
    }
    

    private async UniTask AttackType_Amount(AttackHandler attackHandler, CancellationToken token)
    {
        Debug.LogWarning("ATTACK TYPE AMOUNT");
        isDone = false;
        await FireBehaviourForLoop(projectilePrefab, attackHandler, Mathf.RoundToInt(amount), intervalDelay, token);
        isDone = true;
    }
    private async UniTask AttackType_Timer(AttackHandler attackHandler, CancellationToken token)
    {
        Debug.LogWarning("ATTACK TYPE TIMER");
        startTimer = Time.time;
        isDone = false;
        await FireBehaviourWhileLoop(projectilePrefab, attackHandler, amount, intervalDelay, token);
        isDone = true;
    }

    protected abstract UniTask FireBehaviourForLoop(Projectile projectile, AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken);
    protected abstract UniTask FireBehaviourWhileLoop(Projectile projectile, AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken);





}
