using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using MoreMountains.Tools;
using UnityEngine.UI;
using TMPro;
using System;

public class MobileSkillButtons : MonoBehaviour
{

    public event Action OnSkillRelease;

    private MMTouchButton touchButton;

    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Image abilityImage;
    [SerializeField] private Image disableImage;




    private void Awake()
    {
        touchButton = GetComponent<MMTouchButton>();
    }

    private void OnEnable()
    {
        touchButton.ButtonReleased.AddListener(AbilityTouchBtnPressed);
    }
    private void OnDisable()
    {
        touchButton.ButtonReleased.RemoveListener(AbilityTouchBtnPressed);
    }


    private void AbilityTouchBtnPressed()
    {
        //if (phase != InputPhase.Canceled) { return; }
        Debug.Log("Pressing the key");
        OnSkillRelease?.Invoke();
        //InputManager.Instance.OnButtonMobilePressedRelease(inputName);
    }

    public void AbilityCooldown(bool isOnCooldown, float timeLapse)
    {
        if (isOnCooldown)
        {
            DeactivateSkillButton();
            timerTxt.text = timeLapse.ToString("F1");
        }
        else
        {
            ActivateSkillButton();
        }
    }

    public void ButtonSetDataAbility(AbilityScript ability)
    {
        ButtonResetData(); //Reset the data

        touchButton.Interactable = true; //

        abilityImage.sprite = ability.abilityIcon;
        abilityImage.gameObject.SetActive(true);

        timerTxt.gameObject.SetActive(false);
        disableImage.gameObject.SetActive(false);
    }

    public void ButtonResetData() //Reset the holder
    {
        touchButton.Interactable = false; //
        timerTxt.gameObject.SetActive(false); //Disable the timer text
        abilityImage.sprite = null;  //Remove the sprite
        abilityImage.gameObject.SetActive(false); //Set active to false;
    }

    private void ActivateSkillButton() //Activate the button
    {
        touchButton.Interactable = true;
        //buttonAbility.interactable = true;
        disableImage.gameObject.SetActive(false);
        timerTxt.gameObject.SetActive(false);
    }
    private void DeactivateSkillButton() //Deactivate the button
    {
        touchButton.Interactable = false;
        //buttonAbility.interactable = false;
        disableImage.gameObject.SetActive(true);
        timerTxt.gameObject.SetActive(true);
    }






















}
