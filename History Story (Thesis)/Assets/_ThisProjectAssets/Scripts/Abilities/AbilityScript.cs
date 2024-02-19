using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;
using UnityEngine.Events;
using System.Threading;
using System.Linq;
using Cysharp.Threading.Tasks;

public class AbilityScript : ScriptableObject
{
    private enum AbilityState
    {
        PreCasting, //Before casting state
        Casting, //Casting the ability
        Finished, //When the casting is finished
    }

    private bool isOnCoolDown = false;
    private AbilityState state = AbilityState.PreCasting;
    private CancellationTokenSource cooldownCancellationTokenSource;

    public Action<bool, float> OnAbilityTimeLapse;

    public bool OnCoolDown { get => isOnCoolDown; }



    #region Ability Info for scriptable object
    public string abilityName;

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


    private void OnValidate()
    {
#if UNITY_EDITOR
        abilityName = this.name;
        UnityEditor.EditorUtility.SetDirty(this);
#endif
    }


    #endregion

    public void ConnectSkillButton(MobileSkillButtons skillButton)
    {

    }

    public void Reset()
    {
        isOnCoolDown = false;
        cooldownCancellationTokenSource?.Cancel(); // Cancel the cooldown if it's still running
    }

    public async UniTaskVoid TriggerAbility(MonoBehaviour mono)
    {
        if (!isOnCoolDown && state == AbilityState.PreCasting)
        {
            await AbilityStateControl(mono);
        }
    }

    private async UniTaskVoid CooldownTimer()
    {
        float startTime = Time.time;
        float elapsedTime = 0f;
        cooldownCancellationTokenSource = new CancellationTokenSource();

        while (elapsedTime < cooldownTime)
        {
            if (cooldownCancellationTokenSource.Token.IsCancellationRequested)
            {
                return; // Cancel the coroutine if cancellation is requested
            }

            elapsedTime = Time.time - startTime;
            OnAbilityTimeLapse?.Invoke(isOnCoolDown, cooldownTime - elapsedTime);

            isOnCoolDown = true;
            await UniTask.Yield();
        }

        isOnCoolDown = false;
        OnAbilityTimeLapse?.Invoke(isOnCoolDown, 0f);
    }

    private async UniTask AbilityStateControl(MonoBehaviour mono)
    {
        Entities entity = mono.GetComponent<Entities>();
        if (entity != null)
        {
            switch (state)
            {
                case AbilityState.PreCasting:
                    await PreCastingBehaviour(mono, entity);
                    state = AbilityState.Casting;
                    await AbilityStateControl(mono);
                    break;
                case AbilityState.Casting:
                    await CastingBehaviour(mono, entity);
                    state = AbilityState.Finished;
                    await AbilityStateControl(mono);
                    break;
                case AbilityState.Finished:
                    await FinishedCastingBehaviour(mono, entity);
                    state = AbilityState.PreCasting;
                    break;
            }
        }
    }

    protected virtual async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await UniTask.Yield(); // Yield to allow other operations
        AbilityPlayFeedbacks(entity, precastingAtStartFeedback);
        CooldownTimer().Forget();
    }

    protected virtual async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await UniTask.Yield();
        AbilityPlayFeedbacks(entity, castingAtStartFeedback);
    }

    protected virtual async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await UniTask.Yield();
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

    private void AbilityPlayFeedbacks(Entities entity, MMF_Player feedbackPrefab, Action<Entities, MMF_Player> OnSetProperties = null) //Play feedback
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


    

    /*TODO - Save the cooldown timer of the ability 
     * Save the cooldown using (Time.time - startTime) to get the cooldown
     * When loading the cooldown, need iexecute ang cooldown timer
     */

























































    //private enum AbilityState
    //{
    //    PreCasting, //Before casting state
    //    Casting, //Casting the ability
    //    Finished, //When the casting is finished
    //}

    //private bool isOnCoolDown = false;
    //private AbilityState state = AbilityState.PreCasting;

    //public Action<bool, float> OnAbilityTimeLapse;

    //public bool OnCoolDown { get => isOnCoolDown; }



    //#region Ability Info for scriptable object
    //public string abilityName;

    //[Header("Ability Info")]
    //public Sprite abilityIcon;
    //[Multiline] public string abilityDescription;

    //[Header("Ability Timer")]
    //public float cooldownTime;

    //[Header("Ability Stats")]
    ////TODO: Add the list of stats to be added to player stats

    //[Space(10)]
    //[Header("Feedbacks")]
    //[SerializeField] protected MMF_Player precastingAtStartFeedback;
    //[SerializeField] protected MMF_Player castingAtStartFeedback;
    //[SerializeField] protected MMF_Player finishedAtStartFeedback;

    //#endregion



    //private IEnumerator AbilityStateControl(MonoBehaviour mono)
    //{
    //    Entities entity = mono.GetComponent<Entities>();

    //    if(entity != null)
    //    {
    //        switch (state)
    //        {
    //            case AbilityState.PreCasting:
    //                //Debug.Log("Ability Pre Casting state");

    //                yield return mono.StartCoroutine(PreCastingBehaviour(mono, entity));
    //                state = AbilityState.Casting;
    //                mono.StartCoroutine(AbilityStateControl(mono));
    //                break;
    //            case AbilityState.Casting:
    //                //Debug.Log("Ability Casting state");

    //                yield return mono.StartCoroutine(CastingBehaviour(mono, entity));
    //                state = AbilityState.Finished;
    //                mono.StartCoroutine(AbilityStateControl(mono));
    //                break;
    //            case AbilityState.Finished:
    //                //Debug.Log("Ability Finished Casting state");

    //                yield return mono.StartCoroutine(FinishedCastingBehaviour(mono, entity));
    //                state = AbilityState.PreCasting;
    //                break;
    //        }
    //    }
    //}

    //protected virtual IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return null;
    //    AbilityPlayFeedbacks(entity, precastingAtStartFeedback);

    //}
    //protected virtual IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return null;
    //    AbilityPlayFeedbacks(entity, castingAtStartFeedback);
    //    mono.StartCoroutine(CooldownTimer());

    //}
    //protected virtual IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    //{
    //    yield return null;
    //    AbilityPlayFeedbacks(entity, finishedAtStartFeedback);
    //}


    ///* SAMPLE CODE FOR MODIFYING FEEDBACKS (DONT UNCOMMENT THIS OR COPY)
    //AbilityPlayFeedbacks(finishedAtStartFeedback, ModifyingFeedback);

    //private void ModifyingFeedback(MMF_Player mmfPlayer)
    //{
    //    // will return the first MMF_Scale found on that MMF_Player
    //    MMF_Scale scaleFeedback = MyTargetMMFPlayer.GetFeedbackOfType<MMF_Scale>();

    //    // will return a list of all MMF_Scale found on that MMF_Player
    //    List<MMF_Scale> scaleFeedbacks = MyTargetMMFPlayer.GetFeedbacksOfType<MMF_Scale>();

    //    // will return the first MMF_Scale found on that MMF_Player whose label matches "MyCustomLabel"
    //    MMF_Scale scaleFeedback = MyTargetMMFPlayer.GetFeedbackOfType<MMF_Scale>("MyCustomLabel");

    //    // will return a list of all the MMF_Scale found on that MMF_Player whose label matches "MyCustomLabel"
    //    List<MMF_Scale> scaleFeedbacks = MyTargetMMFPlayer.GetFeedbacksOfType<MMF_Scale>("MyCustomLabel");
    //}*/

    //protected void AbilityPlayFeedbacks(Entities entity, MMF_Player feedbackPrefab, Action<Entities, MMF_Player> OnSetProperties = null) //Play feedback
    //{
    //    if (feedbackPrefab == null) { return; }

    //    //Callbacks: Modify the feedback before playing it
    //    if (OnSetProperties != null)
    //        OnSetProperties(entity, feedbackPrefab);

    //    ModifyPrecastingFeedback(entity, precastingAtStartFeedback);
    //    ModifyCastingFeedback(entity, castingAtStartFeedback);
    //    ModifyFinishedCastingFeedback(entity, finishedAtStartFeedback);

    //    MMF_Player newPlayerFeedback = ObjectPooling.Instance.GetObjectInPool("feedbacks", feedbackPrefab.gameObject, Vector3.zero, true).GetComponent<MMF_Player>();



    //    newPlayerFeedback.PlayFeedbacks();
    //    //newPlayerFeedback.gameObject.SetActive(false);
    //}

    //protected virtual void ModifyPrecastingFeedback(Entities entity, MMF_Player precastingFeedback) { }
    //protected virtual void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback) { }
    //protected virtual void ModifyFinishedCastingFeedback(Entities entity, MMF_Player finishFeedback) { }


    //private IEnumerator CooldownTimer() //Cooldown timer
    //{
    //    float startTime = Time.time;
    //    float elapsedTime = 0f;

    //    while (elapsedTime < cooldownTime)
    //    {
    //        elapsedTime = Time.time - startTime; // start at zero pataas until reach the cooldown time

    //        // Invoke the remaining time
    //        OnAbilityTimeLapse?.Invoke(isOnCoolDown, cooldownTime - elapsedTime);

    //        isOnCoolDown = true;
    //        yield return null;
    //    }

    //    // Cooldown finished, do any final actions here
    //    isOnCoolDown = false;
    //    OnAbilityTimeLapse?.Invoke(isOnCoolDown, 0f);
    //}

    ///*TODO - Save the cooldown timer of the ability 
    // * Save the cooldown using (Time.time - startTime) to get the cooldown
    // * When loading the cooldown, need iexecute ang cooldown timer
    // */



    //public void Reset(){
    //    isOnCoolDown = false;
    //}

    //public void TriggerAbility(MonoBehaviour mono)
    //{
    //    if (!isOnCoolDown && state == AbilityState.PreCasting)
    //    {
    //        Debug.LogWarning("PRESSING THIS SKILL");

    //        mono.StartCoroutine(AbilityStateControl(mono));
    //    }
    //}

















   

}
