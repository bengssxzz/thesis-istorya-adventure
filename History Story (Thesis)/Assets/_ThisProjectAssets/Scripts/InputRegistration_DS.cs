using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PixelCrushers;

public class InputRegistration_DS : MonoBehaviour
{

#if USE_NEW_INPUT

    private PlayerInputs controls;

    // Track which instance of this script registered the inputs, to prevent
    // another instance from accidentally unregistering them.
    protected static bool isRegistered = false;
    private bool didIRegister = false;

    void Awake()
    {
        controls = new PlayerInputs();
    }

    void OnEnable()
    {
        if (!isRegistered)
        {
            isRegistered = true;
            didIRegister = true;
            controls.Enable();


            InputDeviceManager.RegisterInputAction("Interact", controls.Player.Interact);
            InputDeviceManager.RegisterInputAction("ContinueDialog", controls.Player.ContinueDialog);

            //InputDeviceManager.RegisterInputAction("Horizontal", controls.DemoActionMap.Horizontal);
            //InputDeviceManager.RegisterInputAction("Vertical", controls.DemoActionMap.Vertical);
            //InputDeviceManager.RegisterInputAction("Fire1", controls.DemoActionMap.Fire1);
        }
    }

    void OnDisable()
    {
        if (didIRegister)
        {
            isRegistered = false;
            didIRegister = false;
            controls.Disable();

            InputDeviceManager.UnregisterInputAction("Interact");
            InputDeviceManager.UnregisterInputAction("ContinueDialog");

            //InputDeviceManager.UnregisterInputAction("Horizontal");
            //InputDeviceManager.UnregisterInputAction("Vertical");
            //InputDeviceManager.UnregisterInputAction("Fire1");
        }
    }

#endif
}
