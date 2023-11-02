using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UISkillItem : Slot
{
    [SerializeField] private GameObject selectedSkill;

    public event Action<UISkillItem> OnSkillClicked, OnSkillDroppedOn, OnSkillBeginDrag, OnSkillEndDrag, OnRightMouseBtnClick;




    void Awake()
    {
        ResetData();
    }

    public void Select() //Select the item in the inventory
    {
        if (isEmpty) { return; }
        selectedSkill.SetActive(true);
    }
    public void Deselect() //Deselect the item in the inventory
    {
        selectedSkill.SetActive(false);
    }

    public override void OnPointerClick(PointerEventData pointerData)
    {
        if (pointerData.button == PointerEventData.InputButton.Right)
        {
            OnRightMouseBtnClick?.Invoke(this);
        }
        else
        {
            OnSkillClicked?.Invoke(this);
        }
    }
    public override void OnBeginDrag(PointerEventData eventData)
    {
        if (isEmpty)
        {
            return;
        }
        OnSkillBeginDrag?.Invoke(this);
    }
    public override void OnEndDrag(PointerEventData eventData)
    {
        OnSkillEndDrag?.Invoke(this);
    }
    public override void OnDrop(PointerEventData eventData)
    {
        OnSkillDroppedOn?.Invoke(this);
    }
    public override void OnDrag(PointerEventData eventData)
    {
        //"IDragHandler" is need to work the interface of "IBeginHandler" 
    }
}
