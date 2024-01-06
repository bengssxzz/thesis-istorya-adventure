using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class InputManager : MonoBehaviour
{
    public static InputManager instance;

    public PlayerInput PlayerActionInput { get; private set; }


    private void Awake()
    {
        //PlayerActionInputs = new PlayerInputs();

        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);

        PlayerActionInput = GetComponent<PlayerInput>();
    }

        
    public void ChangeActionMap(string newActionMapString) => PlayerActionInput.SwitchCurrentActionMap(newActionMapString);

}
