using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using UnityEngine.UI;
using MoreMountains.Tools;

public class SlotAbilityHolder : BaseSlot
{
    public event Action<SlotAbilityHolder, BaseSlot> OnSlotClicked, OnSlotDrop, OnSlotBeginDrag, OnSlotDragging, OnSlotEndDrag;
    public event Action<SlotAbilityHolder> OnRemoveEquippedAbilities;

    [SerializeField] private RectTransform holderFrame;
    [SerializeField] private Image holderImage;
    [SerializeField] private MMTouchButton removeAbilityBtn;


    private void OnEnable()
    {
        removeAbilityBtn?.ButtonReleased.AddListener(RemoveAbilityButton);
    }
    private void OnDisable()
    {
        removeAbilityBtn?.ButtonReleased.RemoveListener(RemoveAbilityButton);
    }

   
    private bool isEmpty = true;

    public void ResetHolder()
    {
        isEmpty = true;
        holderFrame.gameObject.SetActive(false);

        removeAbilityBtn.gameObject.SetActive(false);
    }
    public void SetData(Sprite sprite)
    {
        holderFrame.gameObject.SetActive(true);
        holderImage.sprite = sprite;
        isEmpty = false;

        removeAbilityBtn.gameObject.SetActive(true);
    }
    private void RemoveAbilityButton()
    {
        OnRemoveEquippedAbilities?.Invoke(this);
    }

    public override void OnPointerClick(PointerEventData eventData)
    {
        //if (isEmpty) { return; }

        //BaseSlot slot = eventData.pointerClick.GetComponent<SlotAbilityHolder>();
        //OnSlotClicked?.Invoke(this, slot);


        //if (eventData.button == PointerEventData.InputButton.Right)
        //{
        //    //Reset behaviour
        //    OnResetAbilityHolder?.Invoke(this); 
        //}

        //OnAbilitySlotHolderClicked?.Invoke(this);
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotBeginDrag?.Invoke(this, slot);

        //OnAbilitySlotHolderBeginDrag?.Invoke(this);
        
    }
    public override void OnDrag(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotDragging?.Invoke(this, slot);
    }
    public override void OnDrop(PointerEventData eventData)
    {
        BaseSlot slot = eventData.pointerDrag.GetComponent<BaseSlot>();
        OnSlotDrop?.Invoke(this, slot);

        //OnAbilitySlotHolderDrop?.Invoke(this);
    }
    public override void OnEndDrag(PointerEventData eventData)
    {
        BaseSlot slot = eventData.pointerCurrentRaycast.gameObject.GetComponent<BaseSlot>();
        OnSlotEndDrag?.Invoke(this, slot);

        //OnAbilitySlotHolderEndDrag?.Invoke(this);
    }

    
}
