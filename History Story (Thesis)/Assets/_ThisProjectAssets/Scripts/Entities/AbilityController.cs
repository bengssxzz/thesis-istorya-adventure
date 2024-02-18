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
            currentAbilities = new List<AbilityScript>(value);
            ResetAbilitiesOnStart();
        } 
    }



    private void Awake()
    {
        entity = GetComponent<Entities>();
    }


    public void InitializedDefaultAbilities(List<AbilityScript> defaultAbility)
    {
        Debug.Log("INITIALIZE THE ABILITY COMPONENT");
        var listOfCollectedAbility = GameManager.Instance.GetListOfCollectedAbility;

        ListOfCurrentAbilities = new List<AbilityScript>(defaultAbility);

        foreach (AbilityScript ability in defaultAbility)
        {
            if (listOfCollectedAbility.Contains(ability) || ability == null)
                continue;

            GameManager.Instance.CollectedAbilities(ability);
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

    //Set the unlocked abilities
    public void SetListOfUnlockedAbilities(List<AbilityScript> listOfAbility) { listOfUnlockedAbilities = listOfAbility; }

    //Unlock a new ability
    public void UnlockNewAbility(AbilityScript newAbility)
    {
        GameManager.Instance.CollectedAbilities(newAbility);
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

}
