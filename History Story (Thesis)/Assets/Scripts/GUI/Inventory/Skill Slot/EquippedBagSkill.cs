using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EquippedBagSkill : MonoBehaviour
{
    [SerializeField] private MouseFollower mouseFollower;

    [SerializeField] private List<Slot> listOfAbilitySlot = new List<Slot>();

    public event Action<int> OnDescriptionRequest, OnItemActionRequest;
    public event Action<object, int, int> OnSwapItem;
    public event Action<object, int> OnStartDragging;

    private int currentlyDraggedSkill = -1;


    private void OnEnable()
    {
    }
    private void OnDisable()
    {
        mouseFollower.Toggle(false);
    }

    private void Awake()
    {
        Initialize();
    }
    private void Start()
    {
        mouseFollower.Toggle(false);
    }
    

    private void Initialize()
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
        //Debug.Log(slotAbilityItem.name);
    }
    private void HandleBeginDrag(UISkillSlot slotAbilityItem)
    {
        int index = listOfAbilitySlot.IndexOf(slotAbilityItem);
        if (index == -1) { return; }

        currentlyDraggedSkill = index;
        OnStartDragging?.Invoke(this, index);
    }
    private void HandleEndDrag(UISkillSlot slotAbilityItem)
    {
        Debug.Log("End Drag");
        //ResetDraggedItem();
        currentlyDraggedSkill = -1;
    }
    private void HandleSwap(UISkillSlot slotAbilityItem)
    {
        int index = listOfAbilitySlot.IndexOf(slotAbilityItem);
        if (index == -1) { return; }

        OnSwapItem?.Invoke(this, currentlyDraggedSkill, index);

    }
    
    public void CreateDraggedItem(Sprite sprite)
    {
        mouseFollower.Toggle(true);
        mouseFollower.SetData(sprite);
    }
    public void ResetDraggedItem()
    {
        mouseFollower.Toggle(false);
        currentlyDraggedSkill = -1;
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
