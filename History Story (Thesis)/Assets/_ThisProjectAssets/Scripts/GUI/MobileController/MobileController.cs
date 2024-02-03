using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.Events;
using MoreMountains.Tools;

public class MobileController : MonoBehaviour
{
    [SerializeField] private MMTouchJoystick moveJoyStick;
    [SerializeField] private MobileSkillButtons[] abilityButtons;
    [SerializeField] private MobileInteractButton interactButton;


    private void OnEnable()
    {
        moveJoyStick.OnPointerUpEvent.AddListener(JoyStickOnPressUp);
        moveJoyStick.JoystickNormalizedValue.AddListener(OnPlayerMovement);

        abilityButtons[0].OnSkillRelease += Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease += Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease += Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease += Skill3ButtonRelease;

        interactButton.OnPressReleasedInteract += InteractTrigger;

    }
    private void OnDisable()
    {
        moveJoyStick.JoystickNormalizedValue.RemoveListener(OnPlayerMovement);
        moveJoyStick.OnPointerUpEvent.RemoveListener(JoyStickOnPressUp);

        abilityButtons[0].OnSkillRelease -= Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease -= Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease -= Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease -= Skill3ButtonRelease;

        interactButton.OnPressReleasedInteract -= InteractTrigger;
    }



    private void Start()
    {
        UpdateAbilityButtons();
    }

    private void SubscribeButtonsEvent()
    {
        for (int i = 0; i < abilityButtons.Length; i++)
        {
            if (GetPlayerCurrentEquippedAbility(i) == null)
            {
                //abilityButtons[i].ButtonResetData();
                continue;
            }
            GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown;
        }
    }
    private void UnsubscribeButtonsEvent()
    {
        for (int i = 0; i < abilityButtons.Length; i++)
        {
            if (GetPlayerCurrentEquippedAbility(i) == null)
            {
                //abilityButtons[i].ButtonResetData();
                continue;
            }
            GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse -= abilityButtons[i].AbilityCooldown;
        }
    }

    public void UpdateAbilityButtons(AbilityScript[] oldAbilities = null)
    {
        for (int i = 0; i < abilityButtons.Length; i++)
        {
            //Unsubscribe the button to old abilities
            if (oldAbilities != null && oldAbilities.Length > 0)
            {
                if (oldAbilities[i] != null) //Check if the old ability index is not null
                {
                    if (oldAbilities[i].OnAbilityTimeLapse != null) //Check if the event is not null
                    {
                        oldAbilities[i].OnAbilityTimeLapse = null; //Remove the listener of the button in the old ability
                    }
                }
            }

            abilityButtons[i].ButtonResetData(); //Reset the ability button

            //Update button for new current abilities
            if (GetPlayerCurrentEquippedAbility(i) != null) //If the ability slot is null then just reset the button
            {
                GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown; //Subscribe the button to new current ability
                abilityButtons[i].ButtonSetDataAbility(GetPlayerCurrentEquippedAbility(i)); //Set the data of the button
                //abilityButtons[i].ButtonResetData();
                //GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse = null; //To remove all the subscribe event
            }
        }


    }

    private void InteractTrigger() //Interact button
    {
        InputManager.Instance.InteractMobileButton();
    }

    private AbilityScript GetPlayerCurrentEquippedAbility(int index) //Get the current ability of the player
    {
        return PlayerSingleton.Instance.GetPlayerScript.GetAbility_Controller.ListOfCurrentAbilities[index];
    }


    #region Mobile Bindings
    //Mobile Input Bindings
    private void OnPlayerMovement(Vector2 direction)
    {
        if (moveJoyStick.Magnitude < 0.5f) //Deadzone
        {
            return;
        }

        InputManager.Instance.OnMoveMobileStick(direction);
    }
    private void JoyStickOnPressUp() => OnPlayerMovement(Vector2.zero);
    private void Skill0ButtonRelease() => InputManager.Instance.OnSkill0MobileButton();
    private void Skill1ButtonRelease() => InputManager.Instance.OnSkill1MobileButton();
    private void Skill2ButtonRelease() => InputManager.Instance.OnSkill2MobileButton();
    private void Skill3ButtonRelease() => InputManager.Instance.OnSkill3MobileButton();

    #endregion










































}
