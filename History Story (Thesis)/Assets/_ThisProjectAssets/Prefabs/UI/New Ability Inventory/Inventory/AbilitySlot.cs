using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using UnityEngine.EventSystems;

public class AbilitySlot : BaseSlot
{
    public event Action<AbilitySlot> OnAbilitySlotClicked, OnAbilitySlotDrop, OnAbilitySlotBeginDrag, OnAbilitySlotEndDrag;

    [SerializeField] private Image lockSlotImg; //Image to visual the lock slot
    [SerializeField] private Image disablerImage; //Visual to disable slot

    [SerializeField] private Image abilityImage; //Image holder of the slot
    [SerializeField] private TextMeshProUGUI abilityName; //Name of the slot

    public bool isLocked = true;
    private bool isEnabled = false;

    public void SetData(AbilityScript abilityScript)
    {
        abilityImage.sprite = abilityScript.abilityIcon;
        abilityName.text = abilityScript.abilityName;
    }
    public void ClearData()
    {
        LockedAbility();
        abilityImage.sprite = null;
        abilityName.text = null;
    }

    public void LockedAbility()
    {
        DisableSlot();
        abilityImage.gameObject.SetActive(false);
        abilityName.gameObject.SetActive(false);

        lockSlotImg.gameObject.SetActive(true);
    }
    public void UnlockAbility()
    {
        EnableSlot();
        abilityImage.gameObject.SetActive(true);
        abilityName.gameObject.SetActive(true);

        lockSlotImg.gameObject.SetActive(false);
    }

    public void EnableSlot()
    {
        isEnabled = true;
        disablerImage.gameObject.SetActive(false);
    }
    public void DisableSlot()
    {
        isEnabled = false;
        disablerImage.gameObject.SetActive(true);
    }


    public override void OnPointerClick(PointerEventData eventData)
    {
        if (!isEnabled) { return; }

        OnAbilitySlotClicked?.Invoke(this);
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (!isEnabled) { return; }

        OnAbilitySlotBeginDrag?.Invoke(this);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        //"IDragHandler" is need to work the interface of "IBeginHandler" 
    }
    public override void OnDrop(PointerEventData eventData)
    {
        OnAbilitySlotDrop?.Invoke(this);
    }
    public override void OnEndDrag(PointerEventData eventData)
    {
        OnAbilitySlotEndDrag?.Invoke(this);
    }











    //public event Action<AbilitySlot> OnAbilitySlotClicked, OnAbilitySlotDrop, OnAbilitySlotBeginDrag, OnAbilitySlotEndDrag;

    //[SerializeField] private Image lockSlotImg; //Image to visual the lock slot
    //[SerializeField] private Image disablerImage; //Visual to disable slot
    //[SerializeField] private Image abilityImage; //Image holder of the slot
    //[SerializeField] private TextMeshProUGUI abilityName; //Name of the slot

    //private bool isEnabled = false;

    //public void LockedAbility()
    //{
    //    DisableSlot();
    //    abilityImage.gameObject.SetActive(false);
    //    abilityName.gameObject.SetActive(false);

    //    lockSlotImg.gameObject.SetActive(true);
    //}
    //public void UnlockAbility(AbilityScript abilityData)
    //{
    //    EnableSlot();
    //    abilityImage.sprite = abilityData.skillIcon;
    //    abilityName.text = abilityData.abilityName;
    //    abilityImage.gameObject.SetActive(true);
    //    abilityName.gameObject.SetActive(true);

    //    lockSlotImg.gameObject.SetActive(false);
    //}

    //public void EnableSlot()
    //{
    //    isEnabled = true;
    //    disablerImage.gameObject.SetActive(false);
    //}
    //public void DisableSlot()
    //{
    //    isEnabled = false;
    //    disablerImage.gameObject.SetActive(true);
    //}


    //public override void OnPointerClick(PointerEventData eventData)
    //{
    //    if (!isEnabled) { return; }

    //    OnAbilitySlotClicked?.Invoke(this);
    //}
    //public override void OnBeginDrag(PointerEventData eventData)
    //{
    //    if (!isEnabled) { return; }

    //    OnAbilitySlotBeginDrag?.Invoke(this);
    //}

    //public override void OnDrag(PointerEventData eventData)
    //{
    //    //"IDragHandler" is need to work the interface of "IBeginHandler" 
    //}

    //public override void OnDrop(PointerEventData eventData)
    //{
    //    OnAbilitySlotDrop?.Invoke(this);
    //}

    //public override void OnEndDrag(PointerEventData eventData)
    //{
    //    OnAbilitySlotEndDrag?.Invoke(this);
    //}



}
