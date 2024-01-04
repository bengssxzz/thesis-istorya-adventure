using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;


public class InputManager : MonoBehaviour
{
    public static InputManager instance;

    private PlayerInput playerInput;
    public PlayerInputs PlayerActionInputs { get; private set; }
    public event Action<InputActionMap> OnActionMapChange;


    private void Awake()
    {
        PlayerActionInputs = new PlayerInputs();

        if (instance == null)
            instance = this;
        else
            Destroy(gameObject);


        playerInput = GetComponent<PlayerInput>();

    }

    private void Start()
    {
        ChangeActionMap(PlayerActionInputs.Player);

        //playerInput.actions.action
    }

    public void ChangeActionMap(InputActionMap newActionMap)
    {
        if (newActionMap.enabled)
            return;

        PlayerActionInputs.Disable();
        OnActionMapChange?.Invoke(newActionMap);
        newActionMap.Enable();

    }

}
