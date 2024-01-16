using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using System;
using UnityEngine.UI;

public class SlotAbilityHolder : BaseSlot
{
    public event Action<SlotAbilityHolder> OnResetAbilityHolder, OnAbilitySlotHolderClicked, OnAbilitySlotHolderDrop, OnAbilitySlotHolderBeginDrag, OnAbilitySlotHolderEndDrag;

    [SerializeField] private Image holderImage;
    private bool isEmpty = true;

    public void ResetHolder()
    {
        isEmpty = true;
        holderImage.gameObject.SetActive(false);
    }
    public void SetData(Sprite sprite)
    {
        holderImage.gameObject.SetActive(true);
        holderImage.sprite = sprite;
        isEmpty = false;
    }

    public override void OnPointerClick(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        if(eventData.button == PointerEventData.InputButton.Right)
        {
            //Reset behaviour
            OnResetAbilityHolder?.Invoke(this); 
        }

        OnAbilitySlotHolderClicked?.Invoke(this);
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        OnAbilitySlotHolderBeginDrag?.Invoke(this);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        //"IDragHandler" is need to work the interface of "IBeginHandler" 
    }
    public override void OnDrop(PointerEventData eventData)
    {
        OnAbilitySlotHolderDrop?.Invoke(this);
    }
    public override void OnEndDrag(PointerEventData eventData)
    {
        OnAbilitySlotHolderEndDrag?.Invoke(this);
    }

    
}
