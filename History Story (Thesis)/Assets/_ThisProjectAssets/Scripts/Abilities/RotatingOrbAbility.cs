using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using System;

[CreateAssetMenu(fileName = "New Rotating Orb Ability", menuName = "Abilities/Rotating Orb")]
public class RotatingOrbAbility : AbilityScript
{

    [Header("RotatingOrbAbility Ability")]

    public float duration = 3f;



    protected async override UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);

        //entity.transform.MMFindDeepChildDepthFirst("Round Orb FB")?.gameObject.SetActive(false);
        entity.GetAbility_Controller.GetAttachedAbilityObject("Round Orb FB").SetActive(false);
    }

    protected async override UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);


        //entity.transform.MMFindDeepChildDepthFirst("Round Orb FB")?.gameObject.SetActive(true);
        entity.GetAbility_Controller.GetAttachedAbilityObject("Round Orb FB").SetActive(true);

        await UniTask.Delay(TimeSpan.FromSeconds(duration));
    }

    protected async override UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);

        //entity.transform.MMFindDeepChildDepthFirst("Round Orb FB")?.gameObject.SetActive(false);
        entity.GetAbility_Controller.GetAttachedAbilityObject("Round Orb FB").SetActive(false);
    }


}
