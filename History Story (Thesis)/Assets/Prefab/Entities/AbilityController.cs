using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class AbilityController : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private List<AbilityScript> listOfUnlockedAbilities = new List<AbilityScript>();
    [SerializeField] private List<AbilityScript> currentAbilities = new List<AbilityScript>();
    public List<AbilityScript> ListOfCurrentAbilities {get => currentAbilities; 
        set 
        {
            currentAbilities = value;
            ResetAbilitiesOnStart();
        } 
    }

    private void Awake()
    {
        entity = GetComponent<Entities>();    
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

    public void UseAbility(int index) //Use index ablity in array
    {
        try
        {
            var ability = currentAbilities[index];

            if (!ability.OnCoolDown)
            {
                StartCoroutine(currentAbilities[index].TriggerAbility(this)); //Trigger the ability
                Debug.Log("Still running");
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
