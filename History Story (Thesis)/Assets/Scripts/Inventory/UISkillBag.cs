using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UISkillBag : MonoBehaviour
{
    [SerializeField] private UISkillItem prefabSkillItem;
    [SerializeField] private RectTransform contentPanel;
    [SerializeField] private MouseFollower mouseFollower;

    public event Action<int> OnDescriptionRequest, OnItemActionRequest;
    //public event Action<int, int> OnSwapItem;
    public event Action<object, int, int> OnSwapItem;
    public event Action<object, int> OnStartDragging;
    //public event Action<object> OnStartDraggingItem, OnEndDraggingItem;

    private List<UISkillItem> listOfItemSlot = new List<UISkillItem>();

    private int currentDragIndex = -1;


    private void Awake()
    {
        Hide();
        mouseFollower.Toggle(false);
    }

    void Start()
    {
        
    }

    public void InitializeSkillItem(int inventorySize)
    {
        for (int i = 0; i < inventorySize; i++)
        {
            var slot = Instantiate(prefabSkillItem);
            slot.transform.SetParent(contentPanel);
            listOfItemSlot.Add(slot);

            slot.OnSkillBeginDrag += HandleBeginDrag;
            slot.OnSkillDroppedOn += HandleSwap;
            slot.OnSkillEndDrag += HandleEndDrag;
            slot.OnSkillClicked += HandleSkillSelection;

        }
        DeselectAllItems();
    }
    public void UpdateData(int index, Sprite sprite)
    {
        //If the item is in the list
        if(listOfItemSlot.Count > index)
        {
            listOfItemSlot[index].SetData(sprite);
        }
    }
    

    private void HandleSkillSelection(UISkillItem item)
    {
        int index = listOfItemSlot.IndexOf(item);
        if(index == -1) { return; }

        OnDescriptionRequest?.Invoke(index);
        DeselectAllItems();
        item.Select();
    }
    private void HandleBeginDrag(UISkillItem item)
    {
        int index = listOfItemSlot.IndexOf(item);
        if(index == -1) { return; }

        currentDragIndex = index;
        HandleSkillSelection(item);
        OnStartDragging?.Invoke(this, index);
    }
    private void HandleEndDrag(UISkillItem item)
    {
        Debug.Log("End Dragging");
        ResetDraggedItem();
    }
    private void HandleSwap(UISkillItem item)
    {
        int index = listOfItemSlot.IndexOf(item);
        if(index == -1) { return; }

        //OnSwapItem?.Invoke(currentDragIndex, index);
        OnSwapItem?.Invoke(this, currentDragIndex, index);
    }

    public void CreateDraggedItem(Sprite sprite)
    {
        mouseFollower.Toggle(true);
        mouseFollower.SetData(sprite);
    }
    private void DeselectAllItems()
    {
        foreach (UISkillItem item in listOfItemSlot)
        {
            item.Deselect();
        }
    }
    public void ResetDraggedItem()
    {
        mouseFollower.Toggle(false);
        currentDragIndex = -1;
    }
    public void ResetAllItems()
    {
        foreach (var item in listOfItemSlot) //Remove all item in inventory first
        {
            item.ResetData();
            item.Deselect();
        }
    }


    //public void VisibilityToggle()
    //{
    //    bool toggle = !gameObject.activeInHierarchy;

    //    gameObject.SetActive(toggle);

    //    if (gameObject.activeInHierarchy)
    //        Show();
    //    else
    //        Hide();
    //}
    public void Show()
    {
        gameObject.SetActive(true);
        DeselectAllItems();
    }
    public void Hide()
    {
        gameObject.SetActive(false);
        ResetDraggedItem();
        
    }
    
}
