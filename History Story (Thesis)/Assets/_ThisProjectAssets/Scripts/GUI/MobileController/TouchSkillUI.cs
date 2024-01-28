using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;
using UnityEngine.InputSystem.OnScreen;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.Layouts;
using MoreMountains.Tools;

public class TouchSkillUI : OnScreenControl, IPointerDownHandler, IPointerUpHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    [InputControl(layout = "Button")]
    [SerializeField] private string m_ControlPath;

    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Image abilityImage;
    [SerializeField] private Image disableImage;

    private Button buttonAbility;
    private bool hasAbility = false;

    public MMTouchButton mmTouchButton { get; private set; }

    protected override string controlPathInternal { get => m_ControlPath; set => m_ControlPath = value; }

    public void Awake()
    {
        buttonAbility = GetComponent<Button>();

        mmTouchButton = GetComponent<MMTouchButton>();
    }

    public void SetDataHolder(AbilityScript ability) //Set the data of this button
    {
        ActivateAbility();
        hasAbility = true;
        buttonAbility.interactable = true;
        abilityImage.sprite = ability.abilityIcon;
        abilityImage.gameObject.SetActive(true);
    }
    public void ResetDataHolder() //Resetting the data of the button
    {
        ActivateAbility();
        hasAbility = false;
        buttonAbility.interactable = false;
        abilityImage.sprite = null;
        abilityImage.gameObject.SetActive(false);
    }

    public void AbilityCooldown(bool isOnCooldown, float timeLapse) //Apply cooldown timer to this button
    {
        if (isOnCooldown)
        {
            DeactivateAbility();
            timerTxt.text = timeLapse.ToString("F1");
        }
        else
        {
            ActivateAbility();
        }
    }

    private void ActivateAbility()
    {
        buttonAbility.interactable = true;
        disableImage.gameObject.SetActive(false);
        timerTxt.gameObject.SetActive(false);
    }
    private void DeactivateAbility()
    {
        buttonAbility.interactable = false;
        disableImage.gameObject.SetActive(true);
        timerTxt.gameObject.SetActive(true);
    }


    public void OnPointerUp(PointerEventData eventData)
    {
        //Debug.Log("OnPointerUp");
        SendValueToControl(0.0f);
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        //Debug.Log("OnPointerDown");
        SendValueToControl(1.0f);
    }
    public void OnDrag(PointerEventData eventData)
    {
        //Debug.Log("OnDrag");

    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        //Debug.Log("OnBeginDrag");

    }
    public void OnEndDrag(PointerEventData eventData)
    {
        //Debug.Log("OnEndDrag");

    }
}
