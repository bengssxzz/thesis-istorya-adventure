using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class AbilityController : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private List<AbilityScript> listOfUnlockedAbilities = new List<AbilityScript>();
    private List<AbilityScript> currentAbilities = new List<AbilityScript>();
    public List<AbilityScript> ListOfCurrentAbilities {get => currentAbilities; 
        set 
        {
            currentAbilities = value;
            ResetAbilitiesOnStart();
        } 
    }


    public void InitializedComponent(Entities entity, List<AbilityScript> newListOfAbility)
    {
        this.entity = entity;
        ListOfCurrentAbilities = newListOfAbility;

        foreach (AbilityScript ability in newListOfAbility)
        {
            if (listOfUnlockedAbilities.Contains(ability) || ability == null)
                continue;

            listOfUnlockedAbilities.Add(ability);
        }
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

    //Get all the list of unlocked abilities
    public List<AbilityScript> GetListOfUnlockedAbilities() { return listOfUnlockedAbilities; }

    //Unlock a new ability
    public void UnlockNewAbility(AbilityScript newAbility)
    {
        if (listOfUnlockedAbilities.Contains(newAbility))
        {
            //If the new ability is already existed 
            Debug.LogWarning(String.Format("This {0} is already unlocked", newAbility.abilityName));
            return;
        }
        listOfUnlockedAbilities.Add(newAbility);

        //ListOfCurrentAbilities.Add(newAbility);
    }

    public void UseAbility(int index) //Use index ablity in array
    {
        try
        {
            var ability = currentAbilities[index];

            if (!ability.OnCoolDown)
            {
                currentAbilities[index].TriggerAbility(entity);
                //StartCoroutine(currentAbilities[index].TriggerAbility(this)); //Trigger the ability
            }
        }
        catch (Exception)
        {
            Debug.LogWarning($"Ability index {index} is null");
        }

    }

    //public void UseAbility(int index) //Use index ablity in array
    //{
    //    try
    //    {
    //        var ability = currentAbilities[index];

    //        if (!ability.IsActivate)
    //        {
    //            //If have enough mana, Use ability
    //            entity.StartCoroutine(currentAbilities[index].Trigger(entity.gameObject)); //Trigger the ability
    //            entity.StartCoroutine(currentAbilities[index].StartCoolDown()); //Start the cooldown
    //            Debug.Log("Still running");
    //        }
    //    }
    //    catch (Exception)
    //    {
    //        Debug.LogWarning($"Ability index {index} is null");
    //    }

    //}
}
