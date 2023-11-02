using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UISkillSlot : Slot
{
    public event Action<UISkillSlot> OnSkillClicked, OnSkillDroppedOn, OnSkillBeginDrag, OnSkillEndDrag;
    


    public override void OnPointerClick(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        OnSkillClicked?.Invoke(this);
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (isEmpty) { return; }

        OnSkillBeginDrag?.Invoke(this);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        //"IDragHandler" is need to work the interface of "IBeginHandler" 
    }
    public override void OnEndDrag(PointerEventData eventData)
    {
        OnSkillEndDrag?.Invoke(this);
    }
    public override void OnDrop(PointerEventData eventData)
    {
        OnSkillDroppedOn?.Invoke(this);
    }










}
