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


    private void OnEnable()
    {
        moveJoyStick.OnPointerUpEvent.AddListener(JoyStickOnPressUp);
        moveJoyStick.JoystickNormalizedValue.AddListener(OnPlayerMovement);

        abilityButtons[0].OnSkillRelease += Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease += Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease += Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease += Skill3ButtonRelease;


        //for (int i = 0; i < abilityButtons.Length; i++)
        //{
        //    if (GetPlayerCurrentEquippedAbility(i) == null)
        //    {
        //        abilityButtons[i].ButtonResetData();
        //        continue;
        //    }
        //    GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown;
        //}

    }
    private void OnDisable()
    {
        moveJoyStick.JoystickNormalizedValue.RemoveListener(OnPlayerMovement);
        moveJoyStick.OnPointerUpEvent.RemoveListener(JoyStickOnPressUp);

        abilityButtons[0].OnSkillRelease -= Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease -= Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease -= Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease -= Skill3ButtonRelease;


        ////Unsubscribe abilities event function
        //for (int i = 0; i < abilityButtons.Length; i++)
        //{
        //    if (GetPlayerCurrentEquippedAbility(i) == null)
        //    {
        //        //abilityButtons[i].ButtonResetData();
        //        continue;
        //    }
        //    GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse -= abilityButtons[i].AbilityCooldown;
        //}
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
            abilityButtons[i].ButtonResetData(); //Reset the ability button

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

            //Update button for new current abilities
            if (GetPlayerCurrentEquippedAbility(i) != null) //If the ability slot is null then just reset the button
            {
                GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown; //Subscribe the button to new current ability
                abilityButtons[i].ButtonSetDataAbility(GetPlayerCurrentEquippedAbility(i)); //Set the data of the button
                //abilityButtons[i].ButtonResetData();
                //GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse = null; //To remove all the subscribe event
            }
        }


        //for (int i = 0; i < abilityButtons.Length; i++)
        //{
        //    abilityButtons[i].ButtonResetData(); //Reset the ability button

        //    if (GetPlayerCurrentEquippedAbility(i) == null) //If the ability slot is null then just reset the button
        //    {
        //        //abilityButtons[i].ButtonResetData();
        //        //GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse = null; //To remove all the subscribe event
        //        continue;
        //    }

        //    //If not, then change the button
        //    //GetPlayerCurrentEquippedAbility(i).OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown; //Change the timer of the button
        //    //SubscribeButtonsEvent();
        //    abilityButtons[i].ButtonSetDataAbility(GetPlayerCurrentEquippedAbility(i)); //Set the data of the button
        //}
    }

    private AbilityScript GetPlayerCurrentEquippedAbility(int index) //Get the current ability of the player
    {
        return PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities[index];
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





































    //[SerializeField] private MMTouchJoystick moveJoyStick;
    //[SerializeField] private MobileSkillButtons[] abilityButtons;


    //private AbilityScript[] equippedAbilities; //List of equipped abilities

    //private void Awake()
    //{
    //    equippedAbilities = PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities.ToArray(); //Get the equipped abilities of the player
    //}

    //private void OnEnable()
    //{
    //    equippedAbilities = PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities.ToArray(); //Get the equipped abilities of the player

    //    moveJoyStick.OnPointerUpEvent.AddListener(JoyStickOnPressUp);
    //    moveJoyStick.JoystickNormalizedValue.AddListener(OnPlayerMovement);

    //    abilityButtons[0].OnSkillRelease += Skill0ButtonRelease;
    //    abilityButtons[1].OnSkillRelease += Skill1ButtonRelease;
    //    abilityButtons[2].OnSkillRelease += Skill2ButtonRelease;
    //    abilityButtons[3].OnSkillRelease += Skill3ButtonRelease;

    //    for (int i = 0; i < abilityButtons.Length; i++)
    //    {
    //        if (equippedAbilities[i] == null)
    //        {
    //            //abilityButtons[i].ButtonResetData();
    //            continue;
    //        }
    //        equippedAbilities[i].OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown;
    //    }

    //}
    //private void OnDisable()
    //{
    //    moveJoyStick.JoystickNormalizedValue.RemoveListener(OnPlayerMovement);
    //    moveJoyStick.OnPointerUpEvent.RemoveListener(JoyStickOnPressUp);

    //    abilityButtons[0].OnSkillRelease -= Skill0ButtonRelease;
    //    abilityButtons[1].OnSkillRelease -= Skill1ButtonRelease;
    //    abilityButtons[2].OnSkillRelease -= Skill2ButtonRelease;
    //    abilityButtons[3].OnSkillRelease -= Skill3ButtonRelease;


    //    //Unsubscribe abilities event function
    //    for (int i = 0; i < abilityButtons.Length; i++)
    //    {
    //        if (equippedAbilities[i] == null)
    //        {
    //            //abilityButtons[i].ButtonResetData();
    //            continue;
    //        }
    //        equippedAbilities[i].OnAbilityTimeLapse -= abilityButtons[i].AbilityCooldown;
    //    }
    //}



    //private void Start()
    //{
    //    UpdateAbilityButtons();
    //}

    //public void UpdateAbilityButtons()
    //{
    //    equippedAbilities = PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities.ToArray(); //Get the equipped abilities of the player

    //    for (int i = 0; i < abilityButtons.Length; i++)
    //    {
    //        abilityButtons[i].ButtonResetData(); //Reset the ability button

    //        if (equippedAbilities[i] == null) //If the ability slot is null then just reset the button
    //        {
    //            //abilityButtons[i].ButtonResetData();
    //            continue;
    //        }

    //        //If not, then change the button
    //        equippedAbilities[i].OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown; //Change the timer of the button
    //        abilityButtons[i].ButtonSetDataAbility(equippedAbilities[i]); //Set the data
    //    }
    //}

    //private AbilityScript PlayerCurrentEquippedAbility(int index)
    //{
    //    return PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities[index];
    //}


    //#region Mobile Bindings
    ////Mobile Input Bindings
    //private void OnPlayerMovement(Vector2 direction)
    //{
    //    if (moveJoyStick.Magnitude < 0.5f) //Deadzone
    //    {
    //        return;
    //    }

    //    InputManager.Instance.OnMoveMobileStick(direction);
    //}
    //private void JoyStickOnPressUp() => OnPlayerMovement(Vector2.zero);
    //private void Skill0ButtonRelease() => InputManager.Instance.OnSkill0MobileButton();
    //private void Skill1ButtonRelease() => InputManager.Instance.OnSkill1MobileButton();
    //private void Skill2ButtonRelease() => InputManager.Instance.OnSkill2MobileButton();
    //private void Skill3ButtonRelease() => InputManager.Instance.OnSkill3MobileButton();

    //#endregion
















}
