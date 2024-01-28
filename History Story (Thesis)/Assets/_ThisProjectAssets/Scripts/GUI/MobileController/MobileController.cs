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


    private AbilityScript[] equippedAbilities; //List of equipped abilities

    private void Awake()
    {
    }

    private void OnEnable()
    {
        moveJoyStick.OnPointerUpEvent.AddListener(JoyStickOnPressUp);
        moveJoyStick.JoystickNormalizedValue.AddListener(OnPlayerMovement);



        abilityButtons[0].OnSkillRelease += Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease += Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease += Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease += Skill3ButtonRelease;
    }

   

    private void OnDisable()
    {
        moveJoyStick.JoystickNormalizedValue.RemoveListener(OnPlayerMovement);
        moveJoyStick.OnPointerUpEvent.RemoveListener(JoyStickOnPressUp);

        ////Unsubscribe abilities event function
        //for (int i = 0; i < abilityButtons.Length; i++)
        //{
        //    if(equippedAbilities[i] == null) { continue; }

        //    equippedAbilities[i].OnAbilityTimeLapse -= abilityButtons[i].AbilityCooldown;
        //}
        abilityButtons[0].OnSkillRelease -= Skill0ButtonRelease;
        abilityButtons[1].OnSkillRelease -= Skill1ButtonRelease;
        abilityButtons[2].OnSkillRelease -= Skill2ButtonRelease;
        abilityButtons[3].OnSkillRelease -= Skill3ButtonRelease;
    }

    

    private void Start()
    {
        UpdateAbilityButtons();
    }

    private void UpdateAbilityButtons()
    {
        equippedAbilities = PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities.ToArray(); //Get the equipped abilities of the 

        for (int i = 0; i < abilityButtons.Length; i++)
        {
            if (equippedAbilities[i] == null) //If the ability slot is null then just reset the button
            {
                abilityButtons[i].ButtonResetData();
                continue;
            }

            //If not, then change the button
            equippedAbilities[i].OnAbilityTimeLapse += abilityButtons[i].AbilityCooldown; //Change the timer of the button
            abilityButtons[i].ButtonSetDataAbility(equippedAbilities[i]); //Set the data
        }
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
