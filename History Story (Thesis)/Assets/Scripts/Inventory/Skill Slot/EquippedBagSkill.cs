using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquippedBagSkill : MonoBehaviour
{
    //[SerializeField] private List<UISkillSlot> listOfAbilitySlot = new List<UISkillSlot>();
    [SerializeField] private List<Slot> listOfAbilitySlot = new List<Slot>();

    public event Action<int> OnDescriptionRequest, OnItemActionRequest;
    //public event Action<int, int> OnSwapItem;
    public event Action<object, int, int> OnSwapItem;
    public event Action<object, int> OnStartDragging;
    //public event Action<object> OnStartDraggingItem, OnEndDraggingItem;

    private int currentlyDraggedSkill = -1;

    private void Start()
    {
        foreach (UISkillSlot item in transform.GetComponentsInChildren<UISkillSlot>())
        {
            item.ResetData();
            listOfAbilitySlot.Add(item);

            item.OnSkillClicked += HandleSkillSelection;
            item.OnSkillBeginDrag += HandleBeginDrag;
            item.OnSkillEndDrag += HandleEndDrag;
            item.OnSkillDroppedOn += HandleSwap;
        }
    }

    private void HandleSkillSelection(UISkillSlot slotAbilityItem)
    {
        Debug.Log(slotAbilityItem.name);
    }
    private void HandleBeginDrag(UISkillSlot slotAbilityItem)
    {
        int index = listOfAbilitySlot.IndexOf(slotAbilityItem);
        if (index == -1) { return; }

        Debug.Log("On Start Drag: " + index);
        currentlyDraggedSkill = index;
        OnStartDragging?.Invoke(this, index);
    }
    private void HandleEndDrag(UISkillSlot slotAbilityItem)
    {
        Debug.Log("End Drag");
        currentlyDraggedSkill = -1;
    }
    private void HandleSwap(UISkillSlot slotAbilityItem)
    {
        int index = listOfAbilitySlot.IndexOf(slotAbilityItem);
        if (index == -1) { return; }

        Debug.Log("On End Drag: " + index);
        //OnSwapItem?.Invoke(currentlyDraggedSkill, index);
        OnSwapItem?.Invoke(this, currentlyDraggedSkill, index);

    }

    public void UpdateData(int index, Sprite sprite)
    {
        if(listOfAbilitySlot.Count > index)
        {
            listOfAbilitySlot[index].SetData(sprite);
        }
    }
    public void ResetAllSkillSlots()
    {
        foreach (var item in listOfAbilitySlot)
        {
            item.ResetData();
        }
    }
}
