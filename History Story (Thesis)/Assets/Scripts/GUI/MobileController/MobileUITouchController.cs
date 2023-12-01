using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class MobileUITouchController : UIPages
{
    private PlayerScript entity;

    private AbilityScript[] currentAbility;

    private TouchSkillUI[] listOfTouchHolderUI;
    //private List<TouchSkillUI> listOfTouchHolderUI = new List<TouchSkillUI>();


    private void Awake()
    {
        entity = GameManager.instance.GetPlayer();
        currentAbility = entity.abilityHolder.GetListOfCurrentAbilities().ToArray();
        listOfTouchHolderUI = transform.GetComponentsInChildren<TouchSkillUI>(true);
    }

    public override void ShowBehavior()
    {
        currentAbility = entity.abilityHolder.GetListOfCurrentAbilities().ToArray();

        //Subscribe new abilities event function
        for (int i = 0; i < listOfTouchHolderUI.Length; i++)
        {
            if(currentAbility[i] == null) {
                listOfTouchHolderUI[i].ResetDataHolder();
                continue; }

            currentAbility[i].OnAbilityTimeLapse += listOfTouchHolderUI[i].AbilityCooldown;
        }
        UpdateHolderVisual();
    }
    public override void HideBehavior()
    {
        //Unsubscribe abilities event function
        for (int i = 0; i < listOfTouchHolderUI.Length; i++)
        {
            if (currentAbility[i] == null) { continue; }

            currentAbility[i].OnAbilityTimeLapse -= listOfTouchHolderUI[i].AbilityCooldown;
        }
    }

    private void UpdateHolderVisual()
    {
        //Reseting the data of the UI
        foreach (var holder in listOfTouchHolderUI)
        {
            holder.ResetDataHolder();
        }

        //Update the visual of the holder UI
        for (int i = 0; i < listOfTouchHolderUI.Length; i++)
        {
            if(currentAbility[i] == null) { continue; }

            listOfTouchHolderUI[i].SetDataHolder(currentAbility[i]);
        }
    }

}
