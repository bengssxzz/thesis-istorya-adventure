using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using MoreMountains.Feedbacks;


public class AbilityScript : ScriptableObject
{
    private enum AbilityState
    {
        PreCasting, //Before casting state
        Casting, //Casting the ability
        Finished, //When the casting is finished
    }

    public Action<bool, float> OnAbilityTimeLapse;

    public string abilityName => this.name;

    private AbilityState state = AbilityState.PreCasting;


    [Header("Ability Info")]
    public Sprite abilityIcon;
    [Multiline] public string abilityDescription;

    [Header("Ability Timer")]
    public float cooldownTime;

    [Header("Ability Stats")]
    //TODO: Add the list of stats to be added to player stats

    [Space(10)]
    [Header("Feedbacks")]
    [SerializeField] private MMF_Player precastingAtStartFeedback;
    [SerializeField] private MMF_Player castingAtStartFeedback;
    [SerializeField] private MMF_Player finishedAtStartFeedback;



    private bool isOnCoolDown = false;
    public bool OnCoolDown { get => isOnCoolDown; }


    private IEnumerator AbilityStateControll(MonoBehaviour mono)
    {
        Entities entity = mono.GetComponent<Entities>();

        if(entity != null)
        {
            switch (state)
            {
                case AbilityState.PreCasting:
                    //Debug.Log("Ability Pre Casting state");

                    yield return mono.StartCoroutine(PreCastingBehaviour(mono, entity));
                    state = AbilityState.Casting;
                    mono.StartCoroutine(AbilityStateControll(mono));
                    break;
                case AbilityState.Casting:
                    //Debug.Log("Ability Casting state");

                    yield return mono.StartCoroutine(CastingBehaviour(mono, entity));
                    state = AbilityState.Finished;
                    mono.StartCoroutine(AbilityStateControll(mono));
                    break;
                case AbilityState.Finished:
                    //Debug.Log("Ability Finished Casting state");

                    yield return mono.StartCoroutine(FinishedCastingBehaviour(mono, entity));
                    state = AbilityState.PreCasting;
                    break;
            }
        }
    }

    protected virtual IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return null;
        AbilityPlayFeedbacks(precastingAtStartFeedback);

    }
    protected virtual IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return null;
        AbilityPlayFeedbacks(castingAtStartFeedback);
        mono.StartCoroutine(CooldownTimer());

    }
    protected virtual IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return null;
        AbilityPlayFeedbacks(finishedAtStartFeedback);
    }

    private IEnumerator CooldownTimer() //Cooldown timer
    {
        float startTime = Time.time;
        float elapsedTime = 0f;

        while (elapsedTime < cooldownTime)
        {
            elapsedTime = Time.time - startTime; // start at zero pataas until reach the cooldown time

            // Invoke the remaining time
            OnAbilityTimeLapse?.Invoke(isOnCoolDown, cooldownTime - elapsedTime);

            isOnCoolDown = true;
            yield return null;
        }

        // Cooldown finished, do any final actions here
        isOnCoolDown = false;
        OnAbilityTimeLapse?.Invoke(isOnCoolDown, 0f);
    }
    protected void AbilityPlayFeedbacks(MMF_Player feedbackPrefab) //Play feedback
    {
        if(feedbackPrefab == null) { return; }


        var newPlayerFeedback = Instantiate(feedbackPrefab);
        newPlayerFeedback.PlayFeedbacks();
        Destroy(newPlayerFeedback);
    }

    public void Reset(){
        isOnCoolDown = false;
    }

    public void TriggerAbility(MonoBehaviour mono)
    {
        if (!isOnCoolDown && state == AbilityState.PreCasting)
        {
            mono.StartCoroutine(AbilityStateControll(mono));
        }
    }


}
