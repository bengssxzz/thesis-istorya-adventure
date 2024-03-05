using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;
using Cysharp.Threading.Tasks;
using System;

[CreateAssetMenu(fileName = "New Dodge Ability", menuName = "Abilities/Dodge")]
public class DodgeAbility : AbilityScript
{
    private Vector2 previousDir;
    public float dodgePower;
    public float dodgeDistance;


    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);


        if (previousDir == Vector2.zero)
        {
            previousDir = Vector2.left;
        }
        if (entity.GetMoveDirection != Vector2.zero)
        {
            previousDir = entity.GetMoveDirection;
        }

        entity.IsCanMove = false;
    }

    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        entity.GetRigidbody2D.AddForce(previousDir * dodgePower * Time.fixedDeltaTime, ForceMode2D.Impulse);
        await UniTask.Delay(TimeSpan.FromSeconds(dodgeDistance));
        entity.GetRigidbody2D.velocity = Vector2.zero;

    }

    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);

        entity.IsCanMove = true;
    }

    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
    {
        var defaultRemapCurveOne = -360;
        MMF_Rotation modifyingRotation = castingFeedback.GetFeedbackOfType<MMF_Rotation>();
        modifyingRotation.AnimateRotationTarget = entity.GetActorTransform;
        modifyingRotation.RemapCurveOne = defaultRemapCurveOne * entity.GetActorTransform.localScale.x;
    }


}
//public class DodgeAbility : AbilityScript
//{
//    private Vector2 previousDir;
//    public float dodgePower;
//    public float dodgeDistance;


//    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.PreCastingBehaviour(mono, entity);


//        if (previousDir == Vector2.zero)
//        {
//            previousDir = Vector2.left;
//        }
//        if (entity.GetMoveDirection != Vector2.zero)
//        {
//            previousDir = entity.GetMoveDirection;
//        }

//        entity.IsCanMove = false;
//    }

//    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.CastingBehaviour(mono, entity);

//        entity.GetRigidbody2D.AddForce(previousDir * dodgePower * Time.fixedDeltaTime, ForceMode2D.Impulse);
//        yield return new WaitForSeconds(dodgeDistance);
//        entity.GetRigidbody2D.velocity = Vector2.zero;
//    }

//    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.FinishedCastingBehaviour(mono, entity);

//        entity.IsCanMove = true;
//    }

//    protected override void ModifyCastingFeedback(Entities entity, MMF_Player castingFeedback)
//    {
//        var defaultRemapCurveOne = -360;
//        MMF_Rotation modifyingRotation = castingFeedback.GetFeedbackOfType<MMF_Rotation>();
//        modifyingRotation.AnimateRotationTarget = entity.transform;
//        modifyingRotation.RemapCurveOne = defaultRemapCurveOne * entity.GetActorTransform.localScale.x; 
//    }


//}
