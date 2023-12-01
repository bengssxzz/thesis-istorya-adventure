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
        
    }

    private void Start()
    {
        entity = GameManager.instance.GetPlayer();

        PrepareInventoryData();
        PrepareUI();

        PrepareAbilityData();
        UpdateSkillBagUI();
    }

    private void PrepareInventoryData() //Prepare the data of the inventory
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
    private void PrepareAbilityData() //Prepare the data of the equipped abilities
    {
        //Create empty list of abilities
        for (int i = 0; i < 4; i++)
        {
            listOfEquippedAbility.Add(InventorySkillItem.GetEmptyItem());
        }

        Debug.Log("Equiped Count: " + entity.abilityHolder.GetListOfCurrentAbilities().Count);
        for (int i = 0; i < entity.abilityHolder.GetListOfCurrentAbilities()?.Count; i++)
        {
            AbilityScript ability = entity.abilityHolder.GetListOfCurrentAbilities()[i];
            listOfEquippedAbility[i] = new InventorySkillItem { abilityItem = ability };
        }
    }


    private void UpdatePlayerAbilityEquipped() //Update the abilities of the player
    {

        List<AbilityScript> abilities = new List<AbilityScript>();
        foreach (var item in listOfEquippedAbility)
        {
            abilities.Add(item.abilityItem);
        }
        entity.abilityHolder.SetChangeListAbilities(abilities);
    }
    private void UpdateSkillBagUI() //Update the UI of the equipped skill panel
    {
        equippedSkillUI.ResetAllSkillSlots();

        for (int i = 0; i < listOfEquippedAbility.Count; i++)
        {
            var abilityData = listOfEquippedAbility[i];
            if (abilityData.isEmpty)
                continue;
            equippedSkillUI.UpdateData(i, abilityData.abilityItem.abilityIcon);
        }
    }
    private void UpdateInventoryUI(Dictionary<int, InventorySkillItem> inventoryState) //Update the UI of the inventory panel
    {
        inventoryUI.ResetAllItems();
        foreach (var item in inventoryState)
        {
            inventoryUI.UpdateData(item.Key, item.Value.abilityItem.abilityIcon);
        }
    }
    
    private void AddEquippedItemAt(int index, AbilityScript ability) //Add ability item at (index) in listOfEquippedAbility
    {
        listOfEquippedAbility[index] = new InventorySkillItem { abilityItem = ability };
        UpdateSkillBagUI();
        //listOfEquippedAbility[index] = ability;
    }
    private void RemoveEquippedSkillAt(int index) //Remove ability item at (index) in listOfEquippedAbility
    {
        listOfEquippedAbility[index] = InventorySkillItem.GetEmptyItem();
        UpdateSkillBagUI();
    }


    private void HandleDragging(object scriptItem, int itemIndex) //Create the visual of the dragging slot
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

                inventoryUI.CreateDraggedItem(item.abilityItem.abilityIcon);

            }
            else if (script == typeof(EquippedBagSkill))
            {
                Debug.Log("Skill Dragged Created");
                //InventorySkillItem item = inventoryData.GetItemAt(itemIndex);
                //if (item.isEmpty) { return; }

                //equippedSkillUI.CreateDraggedItem(item.abilityItem.skillIcon);
                //inventoryUI.CreateDraggedItem(listOfEquippedAbility[itemIndex].skillIcon);
            }
        }
    }
    private void HandleSwappingItem(object scriptItem, int itemIndex1, int itemIndex2) //Swap the data of inventory and equipped abilities
    {
        if (!scriptItem.GetType().IsClass) { return; }

        var _firstItem = firstDraggingItem.GetType();
        var _secondItem = scriptItem.GetType();

        if(_firstItem == _secondItem)
        {
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
                Debug.Log("OPEN INVENTORY");
                UIManager.instance.SetGUIState(UIManager.GUIState.Inventory);
                UpdateSkillBagUI();
                //inventoryUI.Show();

                foreach (var item in inventoryData.GetCurrentInventoryState())
                {
                    inventoryUI.UpdateData(item.Key, item.Value.abilityItem.abilityIcon);
                }

            }
            else
            {
                Debug.Log("CLOSE INVENTORY");
                UpdatePlayerAbilityEquipped();
                UIManager.instance.SetGUIState(UIManager.GUIState.InGame);
                //inventoryUI.Hide();
            }
        }
    }






}
