using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;



public class InputManager : Singleton<InputManager>
{
    //private Dictionary<string, Action> OnMobileButtonsReleased = new Dictionary<string, Action>();



    public PlayerInput PlayerActionInput { get; private set; }

    public event Action<Vector2> OnPlayerMove; //Movement

    public event Action OnSkill0_Released;

    public event Action OnSkill1_Released;

    public event Action OnSkill2_Released;

    public event Action OnSkill3_Released;

    public event Action OnInteractObject;

    public event Action<InputAction> OnSkillBag_Started;



    protected override void Awake()
    {
        base.Awake();


        PlayerActionInput = GetComponent<PlayerInput>();

    }

    private void OnEnable()
    {
        OnComputerInputRegister();
    }
    private void OnDisable()
    {
        OnComputerInputDeRegister();
    }

    private void OnComputerInputRegister()
    {
        PlayerActionInput.actions["Move"].performed += MovementControl;
        PlayerActionInput.actions["Move"].canceled += MovementControl;

        PlayerActionInput.actions["Skill 0"].canceled += Skill0Trigger;
        PlayerActionInput.actions["Skill 1"].canceled += Skill1Trigger;
        PlayerActionInput.actions["Skill 2"].canceled += Skill2Trigger;
        PlayerActionInput.actions["Skill 3"].canceled += Skill3Trigger;

        PlayerActionInput.actions["Interact"].canceled += InteractTrigger;
    }
    private void OnComputerInputDeRegister()
    {
        PlayerActionInput.actions["Move"].performed -= MovementControl;
        PlayerActionInput.actions["Move"].canceled -= MovementControl;

        PlayerActionInput.actions["Skill 0"].canceled -= Skill0Trigger;
        PlayerActionInput.actions["Skill 1"].canceled -= Skill1Trigger;
        PlayerActionInput.actions["Skill 2"].canceled -= Skill2Trigger;
        PlayerActionInput.actions["Skill 3"].canceled -= Skill3Trigger;

        PlayerActionInput.actions["Interact"].canceled -= InteractTrigger;
    }


    private void MovementControl(InputAction.CallbackContext obj) => OnPlayerMove?.Invoke(obj.ReadValue<Vector2>());
    private void Skill0Trigger(InputAction.CallbackContext obj) => OnSkill0_Released?.Invoke();
    private void Skill1Trigger(InputAction.CallbackContext obj) => OnSkill1_Released?.Invoke();
    private void Skill2Trigger(InputAction.CallbackContext obj) => OnSkill2_Released?.Invoke();
    private void Skill3Trigger(InputAction.CallbackContext obj) => OnSkill3_Released?.Invoke();
    private void InteractTrigger(InputAction.CallbackContext obj) => OnInteractObject?.Invoke();





    public void ChangeActionMap(string newActionMapString) => PlayerActionInput.SwitchCurrentActionMap(newActionMapString);


    //Mobile Movement Controller
    public void OnMoveMobileStick(Vector2 value) => OnPlayerMove?.Invoke(value);
    public void OnSkill0MobileButton() => OnSkill0_Released?.Invoke();
    public void OnSkill1MobileButton() => OnSkill1_Released?.Invoke();
    public void OnSkill2MobileButton() => OnSkill2_Released?.Invoke();
    public void OnSkill3MobileButton() => OnSkill3_Released?.Invoke();
    public void InteractMobileButton() => OnInteractObject?.Invoke();


}
