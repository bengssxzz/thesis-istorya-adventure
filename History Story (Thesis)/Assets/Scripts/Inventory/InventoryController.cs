using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryController : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private UISkillBag inventoryUI;
    [SerializeField] private EquippedBagSkill equippedSkillUI;

    [SerializeField] private InventorySO inventoryData;

    private object firstDraggingItem;
    private int firstDraggedItemIndex = -1;


    public List<InventorySkillItem> initialItems = new List<InventorySkillItem>();

    //public List<AbilityScript> listOfEquippedAbility = new List<AbilityScript>();
    public List<InventorySkillItem> listOfEquippedAbility = new List<InventorySkillItem>();


    private void Awake()
    {
        entity = GetComponent<Entities>();    
    }

    private void Start()
    {
        PrepareInventoryData();
        PrepareUI();

        PrepareAbilityData();
        UpdateSkillBagUI();
    }

    private void PrepareInventoryData()
    {
        //Inventory
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
    private void PrepareUI()
    {
        //Inventory
        inventoryUI.InitializeSkillItem(inventoryData.Size);
        inventoryUI.OnDescriptionRequest += HandleDescriptionRequest;
        inventoryUI.OnItemActionRequest += HandleItemActionRequest;
        inventoryUI.OnStartDragging += HandleDragging;
        //inventoryUI.OnSwapItem += HandleSwapItem;
        inventoryUI.OnSwapItem += HandleSwappingItem;

        //Ability
        //equippedSkillUI.OnSwapItem += HandleEquipSwapItem;
        equippedSkillUI.OnSwapItem += HandleSwappingItem;
        equippedSkillUI.OnStartDragging += HandleDragging;
    }
    private void PrepareAbilityData()
    {
        for (int i = 0; i < entity.abilityHolder.ListOfAbilities.Length; i++)
        {
            Debug.Log(entity.abilityHolder.ListOfAbilities.Length);
            AbilityScript ability = entity.abilityHolder.ListOfAbilities[i];
            listOfEquippedAbility.Add(new InventorySkillItem { abilityItem = ability });
        }

        //foreach (var item in entity.abilityHolder.ListOfAbilities)
        //{
        //    listOfEquippedAbility.Add(item);
        //}
    }
    //private void PrepareAbilityUI()
    //{
    //    equippedSkillUI.ResetAllSkillSlots();
    //    for (int i = 0; i < listOfEquippedAbility.Count; i++)
    //    {
    //        var abilityData = listOfEquippedAbility[i];
    //        if (abilityData == null)
    //            continue;
    //        equippedSkillUI.UpdateData(i, abilityData.skillIcon);
    //    }
    //}

    

    private void UpdatePlayerAbilityEquipped()
    {
        List<AbilityScript> abilities = new List<AbilityScript>();
        foreach (var item in listOfEquippedAbility)
        {
            abilities.Add(item.abilityItem);
        }
        entity.abilityHolder.ListOfAbilities = abilities.ToArray();

        //entity.abilityHolder.ListOfAbilities = listOfEquippedAbility.ToArray();
    }
    private void UpdateSkillBagUI()
    {
        equippedSkillUI.ResetAllSkillSlots();
        for (int i = 0; i < listOfEquippedAbility.Count; i++)
        {
            var abilityData = listOfEquippedAbility[i];
            if (abilityData.isEmpty)
                continue;
            equippedSkillUI.UpdateData(i, abilityData.abilityItem.skillIcon);

            //var abilityData = listOfEquippedAbility[i];
            //if (abilityData == null)
            //    continue;
            //equippedSkillUI.UpdateData(i, abilityData.skillIcon);
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
    
    private void AddEquippedItemAt(int index, AbilityScript ability)
    {
        print(index + " <<<HAWHDA");
        listOfEquippedAbility[index] = new InventorySkillItem { abilityItem = ability };
        UpdateSkillBagUI();
        //listOfEquippedAbility[index] = ability;
    }
    private void RemoveEquippedSkillAt(int index)
    {
        listOfEquippedAbility[index] = InventorySkillItem.GetEmptyItem();
        UpdateSkillBagUI();
    }


    private void HandleDragging(object scriptItem, int itemIndex)
    {
        var script = scriptItem.GetType();
        if (script.IsClass)
        {
            firstDraggingItem = scriptItem;
            firstDraggedItemIndex = itemIndex;

            if(script == typeof(UISkillBag))
            {
                InventorySkillItem item = inventoryData.GetItemAt(itemIndex);
                if (item.isEmpty) { return; }

                inventoryUI.CreateDraggedItem(item.abilityItem.skillIcon);

            }
            else if (script == typeof(EquippedBagSkill))
            {
                Debug.Log("Skill Dragged Created");
                //inventoryUI.CreateDraggedItem(listOfEquippedAbility[itemIndex].skillIcon);
            }
        }
    }

    private void HandleSwapItem(int itemIndex1, int itemIndex2)
    {
        //Detect if the dropped item is from EquippedBagSkill


        inventoryData.SwapItem(itemIndex1, itemIndex2);
    }
    private void HandleEquipSwapItem(int skillIndex1, int skillIndex2)
    {
        //Detect if the dropped item is from UISkillBag


        var item1 = listOfEquippedAbility[skillIndex1]; //Save the 1st item
        listOfEquippedAbility[skillIndex1] = listOfEquippedAbility[skillIndex2];
        listOfEquippedAbility[skillIndex2] = item1;
        UpdateSkillBagUI();
    }

    //Combined 
    private void HandleSwappingItem(object scriptItem, int itemIndex1, int itemIndex2)
    {
        if (!scriptItem.GetType().IsClass) { return; }

        //lastDraggingItem = scriptItem;

        var _firstItem = firstDraggingItem.GetType();
        var _secondItem = scriptItem.GetType();

        Debug.Log("First Drag Item " + firstDraggingItem.ToString());
        Debug.Log("Second Drag Item " + _secondItem.FullName);

        if(_firstItem == _secondItem)
        {
            Debug.Log("Bool 1st: " + (_firstItem == typeof(UISkillBag)) + ":: 2nd: " + (_secondItem == typeof(UISkillBag)));
            if((_firstItem == typeof(UISkillBag)) && (_secondItem == typeof(UISkillBag)))
            {
                inventoryData.SwapItem(itemIndex1, itemIndex2);
            }
            else if ((_firstItem == typeof(EquippedBagSkill)) && (_secondItem == typeof(EquippedBagSkill)))
            {
                var item1 = listOfEquippedAbility[itemIndex1]; //Save the 1st item
                listOfEquippedAbility[itemIndex1] = listOfEquippedAbility[itemIndex2];
                AddEquippedItemAt(itemIndex2, item1.abilityItem);
                //AddEquippedItemAt(itemIndex2, item1);
            }
        }
        else
        {
            Debug.Log("1st: " + firstDraggedItemIndex + " 2nd: " + itemIndex2);
            if(_firstItem == typeof(UISkillBag))
            {
                //If the 1st dragged slot is from the UISkillBag
                InventorySkillItem item = listOfEquippedAbility[itemIndex2];
                if (item.isEmpty)
                {
                    //If the slot is empty
                    AbilityScript ability = inventoryData.GetCurrentInventoryState()[firstDraggedItemIndex].abilityItem;
                    inventoryData.RemoveItemAt(firstDraggedItemIndex);
                    AddEquippedItemAt(itemIndex2, ability);
                }
                else
                {
                    //Swap the item if the slot is not empty
                    //Get the data of the destination slot
                    InventorySkillItem data = listOfEquippedAbility[itemIndex2];

                    //Perform the swapping
                    AddEquippedItemAt(itemIndex2, inventoryData.GetItemAt(firstDraggedItemIndex).abilityItem);
                    inventoryData.AddItemAt(firstDraggedItemIndex, data.abilityItem);
                }

                
            }
            else if (_firstItem == typeof(EquippedBagSkill))
            {
                //If the 1st dragged slot is from the EquippedBagSkill
                InventorySkillItem item = inventoryData.GetItemAt(itemIndex2);
                if (item.isEmpty)
                {
                    inventoryData.AddItemAt(itemIndex2, listOfEquippedAbility[firstDraggedItemIndex].abilityItem);
                    RemoveEquippedSkillAt(firstDraggedItemIndex);
                }
                else
                {
                    //Swap the item
                    //Get the data of the destination slot
                    InventorySkillItem data = inventoryData.GetItemAt(itemIndex2);

                    //Perform the swapping
                    inventoryData.AddItemAt(itemIndex2, listOfEquippedAbility[firstDraggedItemIndex].abilityItem);
                    AddEquippedItemAt(firstDraggedItemIndex, data.abilityItem);
                }

                
            }
        }
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
            if(inventoryUI.isActiveAndEnabled == false)
            {
                foreach (var item in inventoryData.GetCurrentInventoryState())
                {
                    inventoryUI.UpdateData(item.Key, item.Value.abilityItem.skillIcon);
                }

                inventoryUI.Show();
                UpdateSkillBagUI();
            }
            else
            {
                UpdatePlayerAbilityEquipped();
                inventoryUI.Hide();
            }


            //inventoryUI.VisibilityToggle();
            //if (inventoryUI.isActiveAndEnabled)
            //{
            //    foreach (var item in inventoryData.GetCurrentInventoryState())
            //    {
            //        inventoryUI.UpdateData(item.Key, item.Value.abilityItem.skillIcon);
            //    }
            //}
        }
    }






}
