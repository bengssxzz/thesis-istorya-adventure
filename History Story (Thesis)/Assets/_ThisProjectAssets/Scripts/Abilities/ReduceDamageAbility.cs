using MoreMountains.Feedbacks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using Cysharp.Threading.Tasks;
using System;

[CreateAssetMenu(fileName ="Reduce Damage", menuName ="Abilities/Reduce Damage")]
public class ReduceDamageAbility : AbilityScript
{
    [Space(15)]
    [Header("Reduce Damage Ability")]
    public float damageReductionPercentage;
    public float time;


    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
    }
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        var normalDefense = entity.GetEntityStats.maxDefense;

        var computedReducDamg = normalDefense + damageReductionPercentage;

        //modify defense stat
        await entity.GetEntityStats.TempModifiedDefense(computedReducDamg, time);
    }

    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);
    }

    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
    {
        MMF_Particles toPlay = castingFeedback.GetFeedbackOfType<MMF_Particles>();
        toPlay.BoundParticleSystem = entity.transform.MMFindDeepChildDepthFirst("DefenseUpParticle").GetComponent<ParticleSystem>();
    }


























}
//public class ReduceDamageAbility : AbilityScript
//{
//    [Space(15)]
//    [Header("Reduce Damage Ability")]
//    public float damageReductionPercentage;
//    public float time;


//    private float normalDefense;


//    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.PreCastingBehaviour(mono, entity);

//        //Save the original defense stat
//        if (entity != null && entity.GetEntityStats != null)
//        {
//            normalDefense = entity.GetEntityStats.maxDefense;
//        }
//        else
//        {
//            Debug.LogError("ReducedDamageAbility : Unable to retrieve entity stats for defense reduction");
//        }
//    }
//    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.CastingBehaviour(mono, entity);

//        //modify defense stat
//        if(entity != null && entity.GetEntityStats != null)
//        {
//            entity.GetEntityStats.ModifiedDefense(normalDefense + damageReductionPercentage);
//        }
//        else
//        {
//            Debug.LogError("ReducedDamageAbility : Unable to modify entity stats for defense stat");
//        }

//        yield return new WaitForSeconds(time);
//    }

//    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.FinishedCastingBehaviour(mono, entity);

//        //set to normal defense stat
//        if (entity != null && entity.GetEntityStats != null)
//        {
//            entity.GetEntityStats.ModifiedDefense(normalDefense);
//        }
//        else
//        {
//            Debug.LogError("ReduceDamageAbility: Unable to reset defense stat to normal.");
//        }
//    }

//    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
//    {
//        MMF_Particles toPlay = castingFeedback.GetFeedbackOfType<MMF_Particles>();
//        toPlay.BoundParticleSystem = entity.transform.Find("DefenseUpParticle").GetComponent<ParticleSystem>();
//    }


























//}
