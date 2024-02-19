using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "New Modify Stats Ability", menuName = "Abilities/Modify Stats")]
public class ModifyStatsAbility : AbilityScript
{
    [System.Serializable] public class ModifyStats
    {
        public EntityStats modifyStats;
        public float modifyValue;
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
            switch (statsModifying.modifyStats)
            {
                case EntityStats.Health:
                    break;
                case EntityStats.Defense:
                    await entity.GetEntityStats.TempModifiedDefense(statsModifying.modifyValue, activeTime).ConfigureAwait(false);
                    break;
                case EntityStats.MoveSpeed:
                    await entity.GetEntityStats.TempModifiedMoveSpeed(statsModifying.modifyValue, activeTime).ConfigureAwait(false); ;
                    break;
                case EntityStats.AttackSpeed:
                    await entity.GetEntityStats.TempModifiedAttackSpeed(statsModifying.modifyValue, activeTime).ConfigureAwait(false);;
                    break;
                case EntityStats.CriticalChance:
                    await entity.GetEntityStats.TempModifiedCriticalChance(statsModifying.modifyValue, activeTime).ConfigureAwait(false);;
                    break;
                case EntityStats.CriticalDamage:
                    await entity.GetEntityStats.TempModifiedCriticalDamage(statsModifying.modifyValue, activeTime).ConfigureAwait(false);;
                    break;
                case EntityStats.Dodging:
                    await entity.GetEntityStats.TempModifiedDodgeChance(statsModifying.modifyValue, activeTime).ConfigureAwait(false);;
                    break;
                case EntityStats.LifeSteal:
                    await entity.GetEntityStats.TempModifiedDamage(statsModifying.modifyValue, activeTime).ConfigureAwait(false);;
                    break;
                case EntityStats.Damage:
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