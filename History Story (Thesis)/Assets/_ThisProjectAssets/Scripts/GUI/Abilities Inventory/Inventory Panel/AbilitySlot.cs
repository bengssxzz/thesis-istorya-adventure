using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.EventSystems;

public class AbilitySlot : BaseSlot
{
    public event Action<BaseSlot> OnSlotClicked, OnSlotDrop, OnSlotBeginDrag, OnSlotDragging, OnSlotEndDrag;

    private AbilityScript assignedAbility;

    [SerializeField] private Image lockSlotImg; //Image to visual the lock slot
    [SerializeField] private Image disablerImage; //Visual to disable slot

    [SerializeField] private Image abilityImage; //Image holder of the slot
    [SerializeField] private TextMeshProUGUI abilityName; //Name of the slot
    [SerializeField] private TextMeshProUGUI abilityDescription; //Name of the slot

    private bool isEnabled = false;
    
    
    
    public AbilityScript AssignedAbility { get { return assignedAbility; } set { assignedAbility = value; } }
    public bool IsSlotLocked { get { return assignedAbility == null; } }
    public bool IsSlotEnabled { get { return isEnabled; } }




    private void Awake()
    {
        LockAbilitySlot(); //Lock the slot first
    }

    public void InitializeSlot()
    {
        abilityImage.sprite = assignedAbility?.abilityIcon;
        abilityName.text = assignedAbility?.abilityName;
        abilityDescription.text = assignedAbility?.abilityDescription;


        if (IsSlotLocked)
            LockAbilitySlot();
        else
            UnlockAbilitySlot();
    }

    public void ResetData()
    {
        LockAbilitySlot();
        abilityImage.sprite = null;
        abilityName.text = "????";
        abilityDescription.text = ".........";
    }

    private void LockAbilitySlot()
    {
        DisableSlot();
        abilityImage.gameObject.SetActive(false);
        abilityName.gameObject.SetActive(false);

        lockSlotImg.gameObject.SetActive(true);
    }
    private void UnlockAbilitySlot()
    {
        EnableSlot();
        abilityImage.gameObject.SetActive(true);
        abilityName.gameObject.SetActive(true);

        lockSlotImg.gameObject.SetActive(false);
    }


    public void EnableSlot()
    {
        if (IsSlotLocked) { return; }

        isEnabled = true;
        disablerImage.gameObject.SetActive(false);
    }
    public void DisableSlot()
    {
        if (IsSlotLocked) { return; }

        isEnabled = false;
        disablerImage.gameObject.SetActive(true);
    }


    public override void OnPointerClick(PointerEventData eventData)
    {
        if (!isEnabled || IsSlotLocked) { return; }

        BaseSlot slot = eventData.pointerClick.GetComponent<BaseSlot>();
        OnSlotClicked?.Invoke(slot);
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (!isEnabled || IsSlotLocked) { return; }

        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotBeginDrag?.Invoke(slot);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        if (!isEnabled || IsSlotLocked) { return; }

        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotDragging?.Invoke(slot);
    }
    public override void OnDrop(PointerEventData eventData)
    {
        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotDrop?.Invoke(slot);
    }
    public override void OnEndDrag(PointerEventData eventData)
    {   
        BaseSlot slot = eventData.pointerCurrentRaycast.gameObject.GetComponent<BaseSlot>();
        OnSlotEndDrag?.Invoke(slot);
    }







}
