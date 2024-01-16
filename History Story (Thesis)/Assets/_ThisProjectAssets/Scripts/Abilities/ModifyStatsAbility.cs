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


    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        mono.StopCoroutine(CastingBehaviour(mono, entity));
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        float _timer = 0;

        do
        {
            foreach (ModifyStats statsModifying in listOfStatsModified)
            {
                entity.GetEntityStats.TemporaryStatsModification(statsModifying.modifyStats, statsModifying.modifyValue);
            }
            _timer += Time.deltaTime;
            yield return null;
        } while (activeTime >= _timer);

        //Modifying entity stats 
        
    }
    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        //Revert back to original current stats
        foreach (ModifyStats statsModifying in listOfStatsModified)
        {
            entity.GetEntityStats.RevertCurrentStats(statsModifying.modifyStats);
        }
    }
}
