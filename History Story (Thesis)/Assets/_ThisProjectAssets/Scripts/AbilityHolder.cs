using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

[System.Serializable]
public class AbilityHolder
{
    private Entities entity;

    private List<AbilityScript> currentAbilities = new List<AbilityScript>();

    public AbilityHolder(Entities _entity, List<AbilityScript> abilityScripts)
    {
        entity = _entity;
        SetChangeListAbilities(abilityScripts);
    }

    public List<AbilityScript> GetListOfCurrentAbilities()
    {
        return currentAbilities;
    }

    private void ResetAbilitiesOnStart() //Reset each abilities
    {
        if (currentAbilities.Count > 0)
        {
            foreach (var ability in currentAbilities)
            {
                if (ability == null)
                {
                    continue;
                }
                ability.Reset();
            }
        }

    }

    public void SetChangeListAbilities(List<AbilityScript> newList) //Onchange event list of abilities
    {
        currentAbilities = newList;
        ResetAbilitiesOnStart();
    }
    public void UseAbility(int index) //Use index ablity in array
    {
        try
        {
            var ability = currentAbilities[index];

            if (!ability.OnCoolDown)
            {
                //entity.StartCoroutine(currentAbilities[index].TriggerAbility(entity)); //Trigger the ability
                //currentAbilities[index].TriggerAbility(entity);
                currentAbilities[index].TriggerAbility(entity).Forget();
                Debug.Log("Still running");
            }
        }
        catch (Exception)
        {
            Debug.LogWarning($"Ability index {index} is null");
        }

    }
}
