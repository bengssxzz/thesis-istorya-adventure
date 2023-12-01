using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class AbilityScript : ScriptableObject
{
    public Action<bool, float> OnAbilityTimeLapse;

    [Header("Ability Info")]
    public Sprite abilityIcon;
    public string abilityName;

    [Header("Ability Timer")]
    public float cooldownTime;
    public float activeTime;

    [Header("Ability Stats")]
    //Stats of this ability


    private bool isOnCoolDown = false;
    public bool OnCoolDown { get => isOnCoolDown; }

 

    public void Reset(){
        isOnCoolDown = false;
    }

    protected virtual void Activate(GameObject entity) {
        //Activate this ability
    }
    protected virtual void Deactivate(GameObject entity){
        //Deactivate this ability
    }

    public IEnumerator TriggerAbility(MonoBehaviour mono)
    {
        GameObject entityObject = mono.gameObject;
        if (!isOnCoolDown)
        {
            mono.StartCoroutine(CooldownTimer(cooldownTime));
            mono.StartCoroutine(ActiveTimer(activeTime, entityObject));
        }

        yield return null;
    }

    //Cooldown timer
    private IEnumerator CooldownTimer(float _cooldownTime)
    {
        float startTime = Time.time;
        float elapsedTime = 0f;

        while (elapsedTime < _cooldownTime)
        {
            elapsedTime = Time.time - startTime; // start at zero pataas until reach the cooldown time

            // Invoke the remaining time
            OnAbilityTimeLapse?.Invoke(isOnCoolDown, _cooldownTime - elapsedTime);

            isOnCoolDown = true;
            yield return null;
        }

        // Cooldown finished, do any final actions here
        isOnCoolDown = false;
        OnAbilityTimeLapse?.Invoke(isOnCoolDown, 0f);
    }

    //Activation of the ability
    private IEnumerator ActiveTimer(float activateTime, GameObject entity)
    {
        Activate(entity);  // Initial activation

        // Wait for the specified activation time
        yield return new WaitForSeconds(activateTime);

        Deactivate(entity);  // Deactivation after the specified time
    }
}
