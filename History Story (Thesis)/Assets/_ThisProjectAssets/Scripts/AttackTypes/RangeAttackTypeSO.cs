using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Cysharp.Threading.Tasks;
using System.Threading;
using UnityEngine.Events;
using System;

public abstract class RangeAttackTypeSO : ScriptableObject
{
    [SerializeField] public ObjectPoolerInfo poolerInfo;

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
        GameObject newBul = ObjectPoolingManager.Instance.GetItemFromPool(poolerInfo);

        if(newBul == null) { return; }

        var targetLayer = attackHandler.GetScannerEntities.GetTargetLayerMask;

        newBul.transform.position = startPosition;

        // Calculate the rotation angle around the y-axis
        float angle = Mathf.Atan2(direction.y, direction.x) * Mathf.Rad2Deg;

        // Rotate the object around the z-axis to align its x-axis with the direction
        newBul.transform.rotation = Quaternion.Euler(0f, 0f, angle);

        newBul.GetComponent<BaseProjectile>().InitializeProjectile(hostEntity, direction, startPosition, distance, targetLayer, attackHandler.GetColorType);
        newBul.SetActive(true);
    }
    //protected void InitializeProjectile(Entities hostEntity, AttackHandler attackHandler, Vector3 startPosition, Vector3 direction, float distance)
    //{
    //    var targetLayer = attackHandler.GetScannerEntities.GetTargetLayerMask;
    //    GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject, startPosition);
    //    newBul.GetComponent<BaseProjectile>().InitializeProjectile(hostEntity, direction, startPosition, distance, targetLayer, attackHandler.GetColorType);
    //    newBul.SetActive(true);
    //}



    public async void TriggerFire(AttackHandler attackHandler, CancellationToken cancellationToken, Action triggerCallBack = null)
    {
        if (useTimer)
        {
            await AttackType_Timer(attackHandler, cancellationToken, triggerCallBack);
        }
        else
        {
            await AttackType_Amount(attackHandler, cancellationToken, triggerCallBack);
        }
    }
    

    private async UniTask AttackType_Amount(AttackHandler attackHandler, CancellationToken token, Action triggerCallBack)
    {
        //Debug.LogWarning("ATTACK TYPE AMOUNT");
        isDone = false;
        await FireBehaviourForLoop(attackHandler, Mathf.RoundToInt(amount), intervalDelay, token, triggerCallBack);
        isDone = true;
    }
    private async UniTask AttackType_Timer(AttackHandler attackHandler, CancellationToken token, Action triggerCallBack)
    {
        //Debug.LogWarning("ATTACK TYPE TIMER");
        startTimer = Time.time;
        isDone = false;
        await FireBehaviourWhileLoop(attackHandler, amount, intervalDelay, token, triggerCallBack);
        isDone = true;
    }

    protected abstract UniTask FireBehaviourForLoop(AttackHandler attackHandler, int amount, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack);
    protected abstract UniTask FireBehaviourWhileLoop(AttackHandler attackHandler, float timer, float intervalDelay, CancellationToken cancellationToken, Action triggerCallBack);
}
