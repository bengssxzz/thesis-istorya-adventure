using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using MoreMountains.Feedbacks;
using UnityEngine.Events;

public class AbilityScript : ScriptableObject
{
    private enum AbilityState
    {
        PreCasting, //Before casting state
        Casting, //Casting the ability
        Finished, //When the casting is finished
    }

    private bool isOnCoolDown = false;
    
    public Action<bool, float> OnAbilityTimeLapse;

    public string abilityName;

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
    [SerializeField] protected MMF_Player precastingAtStartFeedback;
    [SerializeField] protected MMF_Player castingAtStartFeedback;
    [SerializeField] protected MMF_Player finishedAtStartFeedback;


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
        AbilityPlayFeedbacks(entity, precastingAtStartFeedback);

    }
    protected virtual IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return null;
        AbilityPlayFeedbacks(entity, castingAtStartFeedback);
        mono.StartCoroutine(CooldownTimer());

    }
    protected virtual IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return null;
        AbilityPlayFeedbacks(entity, finishedAtStartFeedback);
    }


    /* SAMPLE CODE FOR MODIFYING FEEDBACKS (DONT UNCOMMENT THIS OR COPY)
    AbilityPlayFeedbacks(finishedAtStartFeedback, ModifyingFeedback);

    private void ModifyingFeedback(MMF_Player mmfPlayer)
    {
        // will return the first MMF_Scale found on that MMF_Player
        MMF_Scale scaleFeedback = MyTargetMMFPlayer.GetFeedbackOfType<MMF_Scale>();

        // will return a list of all MMF_Scale found on that MMF_Player
        List<MMF_Scale> scaleFeedbacks = MyTargetMMFPlayer.GetFeedbacksOfType<MMF_Scale>();

        // will return the first MMF_Scale found on that MMF_Player whose label matches "MyCustomLabel"
        MMF_Scale scaleFeedback = MyTargetMMFPlayer.GetFeedbackOfType<MMF_Scale>("MyCustomLabel");

        // will return a list of all the MMF_Scale found on that MMF_Player whose label matches "MyCustomLabel"
        List<MMF_Scale> scaleFeedbacks = MyTargetMMFPlayer.GetFeedbacksOfType<MMF_Scale>("MyCustomLabel");
    }*/

    protected void AbilityPlayFeedbacks(Entities entity, MMF_Player feedbackPrefab, Action<Entities, MMF_Player> OnSetProperties = null) //Play feedback
    {
        if (feedbackPrefab == null) { return; }

        //Callbacks: Modify the feedback before playing it
        if (OnSetProperties != null)
            OnSetProperties(entity, feedbackPrefab);

        ModifyPrecastingFeedback(entity, precastingAtStartFeedback);
        ModifyCastingFeedback(entity, castingAtStartFeedback);
        ModifyFinishedCastingFeedback(entity, finishedAtStartFeedback);

        MMF_Player newPlayerFeedback = ObjectPooling.Instance.GetObjectInPool("feedbacks", feedbackPrefab.gameObject, Vector3.zero, true).GetComponent<MMF_Player>();
        
        newPlayerFeedback.PlayFeedbacks();
        //newPlayerFeedback.gameObject.SetActive(false);
    }

    protected virtual void ModifyPrecastingFeedback(Entities entity, MMF_Player precastingFeedback) { }
    protected virtual void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback) { }
    protected virtual void ModifyFinishedCastingFeedback(Entities entity, MMF_Player finishFeedback) { }


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

    /*TODO - Save the cooldown timer of the ability 
     * Save the cooldown using (Time.time - startTime) to get the cooldown
     * When loading the cooldown, need iexecute ang cooldown timer
     */

    

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

















    private void OnValidate()
    {
#if UNITY_EDITOR
        abilityName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }

}
