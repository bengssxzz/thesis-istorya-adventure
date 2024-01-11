using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public abstract class BaseAttackBehaviour : MonoBehaviour
{
    protected AttackController GetAttackController;

    public bool attackIsPlaying { get; protected set; }


    public void TriggerFire(AttackController controller)
    {
        if(GetAttackController == null)
            GetAttackController = controller;


        StartCoroutine(FireBehaviour());
    }


    protected abstract IEnumerator FireBehaviour();



}
