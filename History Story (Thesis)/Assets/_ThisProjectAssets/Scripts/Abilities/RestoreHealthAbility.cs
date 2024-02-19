
using MoreMountains.Feedbacks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using Cysharp.Threading.Tasks;
using System;

[CreateAssetMenu(fileName ="Restore Health", menuName ="Abilities/Restore Health")]
public class RestoreHealthAbility : AbilityScript
{
    [Space(15)]
    [Header("Restore Health Ability")]
    public int healthRestoreAmount;
    public float time;


    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);

        //no need

    }
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        //restore health
        entity.GetEntityStats.SetCurrentHealth(healthRestoreAmount);

        await UniTask.Delay(TimeSpan.FromSeconds(time));
    }

    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);

        //no need
  
    }

    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
    {
        MMF_Particles toPlay = castingFeedback.GetFeedbackOfType<MMF_Particles>();
        toPlay.BoundParticleSystem = entity.transform.MMFindDeepChildDepthFirst("HealParticle").GetComponent<ParticleSystem>();
    }
}
