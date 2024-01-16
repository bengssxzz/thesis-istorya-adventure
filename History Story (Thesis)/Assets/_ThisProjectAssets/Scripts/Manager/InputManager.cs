using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class InputManager : Singleton<InputManager>
{
    public PlayerInput PlayerActionInput { get; private set; }


    protected override void Awake()
    {
        base.Awake();
        DontDestroyOnLoad(gameObject);

        PlayerActionInput = GetComponent<PlayerInput>();
    }

        
    public void ChangeActionMap(string newActionMapString) => PlayerActionInput.SwitchCurrentActionMap(newActionMapString);

}
