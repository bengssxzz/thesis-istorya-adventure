using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Inventory", menuName = "InventoryData")]
public class InventorySO : ScriptableObject
{
    [SerializeField] private List<InventorySkillItem> inventorySkillItems;

    [field: SerializeField] public int Size { get; private set; } = 10;

    public event Action<Dictionary<int, InventorySkillItem>> OnInventoryUpdated;

    public void Initialize()
    {
        inventorySkillItems = new List<InventorySkillItem>();
        for (int i = 0; i < Size; i++)
        {
            inventorySkillItems.Add(InventorySkillItem.GetEmptyItem());
        }
    }

    public InventorySkillItem GetItemAt(int itemIndex)
    {
        return inventorySkillItems[itemIndex];
    }

    public void AddItem(AbilityScript abilityScript)
    {
        for (int i = 0; i < inventorySkillItems.Count; i++)
        {
            if (inventorySkillItems[i].isEmpty)
            {
                inventorySkillItems[i] = new InventorySkillItem
                {
                    abilityItem = abilityScript
                };
                return;
            }
        }
        InformAboutChange();
    }
    public void AddItemAt(int index, AbilityScript abilityScript)
    {
        if(inventorySkillItems.Count > index)
        {
            inventorySkillItems[index] = new InventorySkillItem
            {
                abilityItem = abilityScript
            };
        }
        InformAboutChange();
    }

    public void RemoveItemAt(int index)
    {
        inventorySkillItems[index] = InventorySkillItem.GetEmptyItem();
        InformAboutChange();
    }

    public void SwapItem(int itemIndex1, int itemIndex2)
    {
        InventorySkillItem item1 = inventorySkillItems[itemIndex1]; //Save the 1st item
        inventorySkillItems[itemIndex1] = inventorySkillItems[itemIndex2];
        inventorySkillItems[itemIndex2] = item1;
        InformAboutChange();
    }

    public Dictionary<int, InventorySkillItem> GetCurrentInventoryState()
    {
        Dictionary<int, InventorySkillItem> returnValue = new Dictionary<int, InventorySkillItem>();

        for (int i = 0; i < inventorySkillItems.Count; i++)
        {
            if (inventorySkillItems[i].isEmpty) { continue; }

            returnValue[i] = inventorySkillItems[i];
        }
        return returnValue;
    }


    private void InformAboutChange()
    {
        OnInventoryUpdated?.Invoke(GetCurrentInventoryState());
    }

    
}

//[System.Serializable]
//public struct InventorySkillItem
//{
//    public AbilityScript abilityItem;
//    public bool isEmpty => abilityItem == null;

//    public static InventorySkillItem GetEmptyItem() => new InventorySkillItem
//    {
//        abilityItem = null
//    };
//}
