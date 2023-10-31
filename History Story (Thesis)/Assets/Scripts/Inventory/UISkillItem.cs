using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class UISkillItem : MonoBehaviour, IPointerClickHandler, IBeginDragHandler, IEndDragHandler, IDropHandler, IDragHandler
{
    [SerializeField] private Image skillImage;
    [SerializeField] private GameObject selectedSkill;

    public event Action<UISkillItem> OnSkillClicked, OnSkillDroppedOn, OnSkillBeginDrag, OnSkillEndDrag, OnRightMouseBtnClick;

    private bool isEmpty = true;



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

    public void ResetData() //Reset item
    {
        skillImage.gameObject.SetActive(false);
        isEmpty = true;
    }

    public void SetData(Sprite sprite)
    {
        skillImage.gameObject.SetActive(true);
        skillImage.sprite = sprite;
        isEmpty = false;
    }

    public void OnPointerClick(PointerEventData pointerData)
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

    public void OnBeginDrag(PointerEventData eventData)
    {
        if (isEmpty)
        {
            return;
        }
        OnSkillBeginDrag?.Invoke(this);
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        OnSkillEndDrag?.Invoke(this);
    }

    public void OnDrop(PointerEventData eventData)
    {
        OnSkillDroppedOn?.Invoke(this);
    }

    public void OnDrag(PointerEventData eventData)
    {
        //"IDragHandler" is need to work the interface of "IBeginHandler" 
    }
}
