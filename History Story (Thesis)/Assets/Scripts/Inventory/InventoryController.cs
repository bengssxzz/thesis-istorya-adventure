using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryController : MonoBehaviour
{
    [SerializeField] private UISkillBag inventoryUI;

    [SerializeField] private InventorySO inventoryData;

    public List<InventorySkillItem> initialItems = new List<InventorySkillItem>();

    private void Start()
    {
        PrepareUI();
        PrepareInventoryData();
    }

    private void PrepareInventoryData()
    {
        inventoryData.Initialize();
        inventoryData.OnInventoryUpdated += UpdateInventoryUI;
        foreach (InventorySkillItem item in initialItems)
        {
            if (item.isEmpty)
            {
                continue;
            }
            inventoryData.AddItem(item.abilityItem);
        }
    }

    private void UpdateInventoryUI(Dictionary<int, InventorySkillItem> inventoryState)
    {
        inventoryUI.ResetAllItems();
        foreach (var item in inventoryState)
        {
            inventoryUI.UpdateData(item.Key, item.Value.abilityItem.skillIcon);
        }
    }

    private void PrepareUI()
    {
        inventoryUI.InitializeSkillItem(inventoryData.Size);
        inventoryUI.OnDescriptionRequest += HandleDescriptionRequest;
        inventoryUI.OnItemActionRequest += HandleItemActionRequest;
        inventoryUI.OnStartDragging += HandleDragging;
        inventoryUI.OnSwapItem += HandleSwapItem;
    }

    private void HandleSwapItem(int itemIndex1, int itemIndex2)
    {
        inventoryData.SwapItem(itemIndex1, itemIndex2);
    }

    private void HandleDragging(int itemIndex)
    {
        InventorySkillItem item = inventoryData.GetItemAt(itemIndex);
        if (item.isEmpty) { return; }

        inventoryUI.CreateDraggedItem(item.abilityItem.skillIcon);
    }

    private void HandleItemActionRequest(int itemIndex)
    {
        throw new NotImplementedException();
    }

    private void HandleDescriptionRequest(int itemIndex)
    {
        InventorySkillItem item = inventoryData.GetItemAt(itemIndex);
        if (item.isEmpty) { return; }
        
        // Handle description
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            inventoryUI.VisibilityToggle();

            if (inventoryUI.isActiveAndEnabled)
            {
                foreach (var item in inventoryData.GetCurrentInventoryState())
                {
                    inventoryUI.UpdateData(item.Key, item.Value.abilityItem.skillIcon);
                }
            }
        }
    }






}
