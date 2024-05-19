using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;


[CreateAssetMenu(fileName = "New Modify Stats Ability", menuName = "Abilities/Modify Stats")]
public class ModifyStatsAbility : AbilityScript
{
    [System.Serializable] public class ModifyStats
    {
        public enum ValueType { Percent, Amount}

        public EntityStats modifyStats;
        public float modifyValue;
        public ValueType valueType = ValueType.Percent;
    }

    public List<ModifyStats> listOfStatsModified = new List<ModifyStats>();
    public float activeTime = 1f;


    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
        //Not needed
    }
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);

        //Modifying entity stats 
        foreach (ModifyStats statsModifying in listOfStatsModified)
        {
            float value = 0f;
            switch (statsModifying.modifyStats)
            {
                case EntityStats.Health:
                    break;
                case EntityStats.Defense:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.GetMaxBoundStats(EntityStats.Defense) * (statsModifying.modifyValue/100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //_ = entity.GetEntityStats.TempModifiedDefense(statsModifying.modifyValue, activeTime);
                    _ = entity.GetEntityStats.TempModifiedDefense(value, activeTime);
                    entity.GetAbility_Controller.PlayParticleEffects("BoostDefenseParticle", activeTime);
                    break;
                case EntityStats.MoveSpeed:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.GetMaxBoundStats(EntityStats.MoveSpeed) * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //value = ThesisLibrary.ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.maxMoveSpeed, statsModifying.modifyValue);
                    _ = entity.GetEntityStats.TempModifiedMoveSpeed(value, activeTime);
                    entity.GetAbility_Controller.PlayParticleEffects("BoostMovementParticle", activeTime);
                    break;
                case EntityStats.AttackSpeed:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.GetMaxBoundStats(EntityStats.AttackSpeed) * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //value = ThesisLibrary.ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.maxAttackSpeed, statsModifying.modifyValue);
                    _ = entity.GetEntityStats.TempModifiedAttackSpeed(value, activeTime);
                    break;
                case EntityStats.CriticalChance:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.GetMaxBoundStats(EntityStats.CriticalChance) * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //value = ThesisLibrary.ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.maxCriticalChance, statsModifying.modifyValue);
                    _ = entity.GetEntityStats.TempModifiedCriticalChance(value, activeTime);
                    entity.GetAbility_Controller.PlayParticleEffects("BoostCriticalParticle", activeTime);
                    break;
                case EntityStats.CriticalDamage:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.maxCriticalDamage * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //value = ThesisLibrary.ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.maxCriticalDamage, statsModifying.modifyValue);
                    _ = entity.GetEntityStats.TempModifiedCriticalDamage(value, activeTime);
                    break;
                case EntityStats.Dodging:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.GetMaxBoundStats(EntityStats.Dodging) * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    //value = ThesisLibrary.ThesisUtility.ComputeAddedValueWithPercentage(entity.GetEntityStats.maxDodgeChance, statsModifying.modifyValue);
                    _ = entity.GetEntityStats.TempModifiedDodgeChance(value, activeTime);
                    break;
                case EntityStats.Damage:
                    switch (statsModifying.valueType)
                    {
                        case ModifyStats.ValueType.Percent:
                            value = entity.GetEntityStats.maxDamage * (statsModifying.modifyValue / 100);
                            break;
                        case ModifyStats.ValueType.Amount:
                            value = statsModifying.modifyValue;
                            break;
                    }

                    _ = entity.GetEntityStats.TempModifiedDamage(value, activeTime);
                    entity.GetAbility_Controller.PlayParticleEffects("BoostAttackParticle", activeTime);
                    break;
                case EntityStats.LifeSteal:
                    break;
                default:
                    break;
            }
        }
    }
    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);
        //Not needed
    }



    private void AddFeedbacks(ParticleSystem particle, float duration)
    {
        MMF_Particles newParticle = new MMF_Particles();
        newParticle.Mode = MMF_Particles.Modes.Play;
        newParticle.BoundParticleSystem = particle;
        newParticle.DeclaredDuration = duration;

        castingAtStartFeedback.AddFeedback(newParticle);
    }











}

//public class ModifyStatsAbility : AbilityScript
//{
//    [System.Serializable]
//    public class ModifyStats
//    {
//        public EntityStats modifyStats;
//        public float modifyValue;
//    }

//    public List<ModifyStats> listOfStatsModified = new List<ModifyStats>();
//    public float activeTime = 1f;


//    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.PreCastingBehaviour(mono, entity);
//        //Not needed
//    }
//    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.CastingBehaviour(mono, entity);

//        //Modifying entity stats 
//        foreach (ModifyStats statsModifying in listOfStatsModified)
//        {
//            switch (statsModifying.modifyStats)
//            {
//                case EntityStats.Health:
//                    break;
//                case EntityStats.Defense:
//                    entity.GetEntityStats.TempModifiedDefense(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.MoveSpeed:
//                    entity.GetEntityStats.TempModifiedMoveSpeed(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.AttackSpeed:
//                    entity.GetEntityStats.TempModifiedAttackSpeed(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.CriticalChance:
//                    entity.GetEntityStats.TempModifiedCriticalChance(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.CriticalDamage:
//                    entity.GetEntityStats.TempModifiedCriticalDamage(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.Dodging:
//                    entity.GetEntityStats.TempModifiedDodgeChance(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.LifeSteal:
//                    entity.GetEntityStats.TempModifiedDamage(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
//                    break;
//                case EntityStats.Damage:
//                    break;
//                default:
//                    break;
//            }
//        }
//    }
//    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.FinishedCastingBehaviour(mono, entity);
//        //Not needed
//    }
//}