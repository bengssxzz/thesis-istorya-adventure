using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

[System.Serializable]
public class AbilityHolder
{
    private Entities entity;

    private List<AbilityScript> listOfAbilities = new List<AbilityScript>();

    public AbilityHolder(Entities _entity)
    {
        entity = _entity;
        SetChangeListAbilities(_entity.GetEntityStatsSO.abilities);
    }

    public List<AbilityScript> GetListOfAbilities()
    {
        return listOfAbilities;
    }

    private void ResetAbilitiesOnStart() //Reset each abilities
    {
        if (listOfAbilities.Count > 0)
        {
            foreach (var ability in listOfAbilities)
            {
                if (ability == null)
                {
                    continue;
                }
                ability.Reset();
            }
        }

    }
    private bool CheckMana(float manaCost) //Check if there's enough mana
    {
        if (entity.GetEntityStats.currentMana >= manaCost)
        {
            entity.GetEntityStats.currentMana = Mathf.Clamp(entity.GetEntityStats.currentMana - manaCost, 0, entity.GetEntityStats.maxMana);
            //entity.GetEntityStats.currentMana -= manaCost;
            entity.OnManaChanged?.Invoke(entity.GetEntityStats.currentMana / entity.GetEntityStats.maxMana);
            return true;
        }
        return false;
    }
    
    public void SetChangeListAbilities(List<AbilityScript> newList) //Onchange event list of abilities
    {
        listOfAbilities = newList;
        ResetAbilitiesOnStart();
    }
    public void UseAbility(int index) //Use index ablity in array
    {
        try
        {
            var ability = listOfAbilities[index];

            if (!ability.IsActivate)
            {
                if (CheckMana(ability.manaCost))
                {
                    //If have enough mana, Use ability
                    entity.StartCoroutine(listOfAbilities[index].Trigger(entity.gameObject)); //Trigger the ability
                    entity.StartCoroutine(listOfAbilities[index].StartCoolDown()); //Start the cooldown
                    Debug.Log("Still running");
                }
            }
        }
        catch (Exception)
        {
            Debug.LogWarning($"Ability index {index} is null");
        }

    }
}
