using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using MoreMountains.Tools;

[System.Serializable]
public class SlotAbilityUnlocked
{
    public AbilityScript ability;
    [HideInInspector] public bool isUsed;
}

public class AbilityInventory : UIPages
{
    private Entities entity;

    [SerializeField] private RectTransform contentSlot;
    [SerializeField] private AbilitySlot slotPrefab;
    [SerializeField] private MMTouchButton doneEditBtn;
    //[SerializeField] private Button doneBtn;


    private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities
    private List<AbilityScript> listOfUnlockedAbilities = new List<AbilityScript>(); //List of all unlocked abilties

    private List<AbilitySlot> listOfAbilitySlot = new List<AbilitySlot>(); //Just a list of ability slot
    private Dictionary<AbilitySlot, AbilityScript> dictAbilitySlots = new Dictionary<AbilitySlot, AbilityScript>(); //Register abilities with the slot

    private AbilityScript[] oldCurrentAbilities;
    private AbilityScript[] currentUsedAbilities; //Current used abilities
    private SlotAbilityHolder[] listOfSlotHolder; //List of used ability holder

    private object firstDragScript;
    private int firstDragIndex = -1;



    private void Awake()
    {
        //entity = GameManager.Instance.PlayerEntity;
        entity = PlayerSingleton.Instance.GetPlayerScript;
        InitializedHolder();

        listOfAllAbilities = GameManager.Instance.GetListOfAllAbility;
        listOfUnlockedAbilities = entity.GetAbility_Controller.GetListOfUnlockedAbilities();
    }

    private void Start()
    {
        currentUsedAbilities = entity.GetAbility_Controller.ListOfCurrentAbilities.ToArray();

        //doneBtn.onClick.AddListener(DoneEditAbilities);
        doneEditBtn.ButtonReleased.AddListener(DoneEditAbilities);

        GenerateSlots();
        UpdateUnlockAbilityInList();

        UpdateHolderVisual();

        oldCurrentAbilities = currentUsedAbilities;
    }

    private void DoneEditAbilities()
    {
        //Done edit ability
        PlayerSingleton.Instance.GetPlayerScript.GetAbility_Controller.ListOfCurrentAbilities = currentUsedAbilities.ToList(); //Update the ability of the player
        
        UI_Manager.Instance.CloseMenu("Ability Inventory UI");
        UI_Manager.Instance.ActivateID_OpenMenu("game_ui");
        UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons(oldCurrentAbilities);
        //MobileController mobileController = UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons();
        //mobileController.UpdateAbilityButtons();
        //UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;
    }

    private void GenerateSlots()
    {
        //List.Distinct() method is removing all the duplicate items in the list
        foreach (AbilityScript ability in listOfAllAbilities.Distinct())
        {
            //For warning purposes, kapag yung ability is nag duplicate sa list
            int count = listOfAllAbilities.Where(x => x == ability).Count();
            if (count >= 2)
            {
                Debug.LogWarning(string.Format("{0} is duplicated ({1}) in list of all ability", ability, count));
            }

            //Create a new slot
            AbilitySlot newSlot = Instantiate(slotPrefab);
            newSlot.transform.SetParent(contentSlot);
            newSlot.GetComponent<RectTransform>().localScale = Vector3.one;
            newSlot.LockedAbility(); //Set the slot as locked

            newSlot.OnAbilitySlotClicked += SlotPointerClick;
            newSlot.OnAbilitySlotBeginDrag += GrabbingAbilitySlot;
            newSlot.OnAbilitySlotEndDrag += EndDraggingAbility;

            listOfAbilitySlot.Add(newSlot);
        }

        UpdateUnlockedAbilityList_Visual();
    }
    private void InitializedHolder()
    {
        listOfSlotHolder = transform.GetComponentsInChildren<SlotAbilityHolder>();
        foreach (var holder in listOfSlotHolder)
        {
            holder.OnResetAbilityHolder += ResetHolder;
            holder.OnAbilitySlotHolderBeginDrag += GrabbingAbilitySlot;
            holder.OnAbilitySlotHolderDrop += SwappingSlot;
            holder.OnAbilitySlotHolderEndDrag += EndDraggingAbility;
        }
    }

    private void ResetHolder(SlotAbilityHolder slotHolder)
    {
        //Removing use ability in holders
        var holderIndex = listOfSlotHolder.ToList().IndexOf(slotHolder);

        currentUsedAbilities[holderIndex] = null;
        Debug.Log(holderIndex);

        UpdateHolderVisual();
    }

    private void SlotPointerClick(AbilitySlot slotScript)
    {
        AbilityScript ability;
        if (dictAbilitySlots.TryGetValue(slotScript, out ability))
        {
            Debug.Log("Pressing " + ability.abilityName);
        }
        else
        {
            Debug.LogWarning("This slot doesn't have ability");
        }
    }

    private void GrabbingAbilitySlot(object scriptItem)
    {
        if (!scriptItem.GetType().IsClass) { return; }

        var testIndex = -1;

        if ((scriptItem.GetType() == typeof(SlotAbilityHolder)))
        {
            testIndex = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);
            if (testIndex == -1) { return; }
        }
        else
        {
            testIndex = listOfAbilitySlot.ToList().IndexOf((AbilitySlot)scriptItem);
            if (testIndex == -1) { return; }
        }

        firstDragScript = scriptItem;
        firstDragIndex = testIndex;

        //Visual for dragging the ability
        Debug.Log("Visual Grabbing");
    }
    private void SwappingSlot(object scriptItem)
    {
        //Handle Swaping abilities and use abilities
        if (!scriptItem.GetType().IsClass || firstDragScript == null) { return; }

        if ((firstDragScript.GetType() == typeof(SlotAbilityHolder)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
        {
            //Swapping abilities in slot holder

            int indexHolder = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);
            var item1 = currentUsedAbilities[firstDragIndex]; //Save the 1st item
            currentUsedAbilities[firstDragIndex] = currentUsedAbilities[indexHolder]; //Transfer 2nd position to 1st position
            currentUsedAbilities[indexHolder] = item1; //Apply the save 1st position to 2nd position

        }
        else if ((firstDragScript.GetType() == typeof(AbilitySlot)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
        {
            /** 
             * First drag is AbilityScript and Second drag is SlotAbilityHolder
             * To handle the swapping Slot
             * Place the ability slot to Slot Holder 
            **/

            int indexHolder = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);

            var ability = dictAbilitySlots[(AbilitySlot)firstDragScript];

            currentUsedAbilities[indexHolder] = ability;

        }

        UpdateHolderVisual();
    }

    private void EndDraggingAbility(object scriptItem)
    {
        //Reseting when end dragging 
        firstDragScript = null;
        firstDragIndex = -1;
    }



    //Update the visual of the ability holder
    private void UpdateHolderVisual()
    {
        //Reset the list of ability
        foreach (var item in listOfAbilitySlot)
        {
            //if (item.isLocked) { continue; }
            item.EnableSlot();
        }

        for (int i = 0; i < listOfSlotHolder.Length; i++)
        {
            //Reset holder
            listOfSlotHolder[i].ResetHolder();

            //Set new data in holder
            if (currentUsedAbilities[i] != null)
            {
                listOfSlotHolder[i].SetData(currentUsedAbilities[i].abilityIcon);
            }
        }
        UpdateUnlockedAbilityList_Visual();
    }

    //Update the visuals of list abilities
    private void UpdateUnlockedAbilityList_Visual()
    {
        //Clear data of each slots
        foreach (var item in listOfAbilitySlot)
        {
            item.ClearData();
        }

        //Update data each slots
        foreach (var item in dictAbilitySlots)
        {
            item.Key.SetData(item.Value);
            item.Key.UnlockAbility();
        }

        //Disable the ability in slot kase nagamit na dito sa ability holder
        for (int i = 0; i < listOfSlotHolder.Length; i++)
        {
            //Set new data in holder
            if (currentUsedAbilities[i] != null)
            {
                foreach (var item in dictAbilitySlots)
                {
                    if (item.Value == currentUsedAbilities[i])
                    {
                        item.Key.DisableSlot();
                        break;
                    }
                }
            }
        }
    }


    //Update the list and dictionary of the ability list
    private void UpdateUnlockAbilityInList()
    {
        //Register the default abilities to listOfUnlockedAbilities
        foreach (var ability in currentUsedAbilities)
        {
            //If the default ability is already inside the list then continue to next object
            if (listOfUnlockedAbilities.Count > 0)
                if (listOfUnlockedAbilities.Contains(ability) || ability == null) { continue; }

            //If not yet inside then add it
            listOfUnlockedAbilities.Add(ability);
        }

        //Unlock Ability in the list.
        foreach (AbilityScript unlockedAbility in listOfUnlockedAbilities.Distinct())
        {
            //Check if this ability is already registered in dictionary.
            if (dictAbilitySlots.ContainsValue(unlockedAbility))
            {
                //If the ability is already registered, then skip this
                continue;
            }


            foreach (AbilitySlot slot in listOfAbilitySlot)
            {
                //Check if the slot is available for ability
                if (dictAbilitySlots.ContainsKey(slot))
                {
                    //If this slot hold an ability, skip this slot
                    continue;
                }

                //Else, Register it to dictionary
                dictAbilitySlots.Add(slot, unlockedAbility);
                break;
            }
        }
    }



    public override void ShowBehavior()
    {
        //DEBUG
        UpdateUnlockAbilityInList();
        UpdateHolderVisual();
        oldCurrentAbilities = currentUsedAbilities;
    }

    public override void HideBehavior()
    {
        UpdateUnlockAbilityInList();
        UpdateHolderVisual();

        entity.GetAbility_Controller.ListOfCurrentAbilities = currentUsedAbilities.ToList();
    }








































    
    }
//public class AbilityInventory : UIPages
//{
//private Entities entity;

//[SerializeField] private RectTransform contentSlot;
//[SerializeField] private AbilitySlot slotPrefab;
//[SerializeField] private MMTouchButton doneEditBtn;
////[SerializeField] private Button doneBtn;


//private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all available abilities
//private List<AbilityScript> listOfUnlockedAbilities = new List<AbilityScript>(); //List of all unlocked abilties

//private List<AbilitySlot> listOfAbilitySlot = new List<AbilitySlot>(); //Just a list of ability slot
//private Dictionary<AbilitySlot, AbilityScript> dictAbilitySlots = new Dictionary<AbilitySlot, AbilityScript>(); //Register abilities with the slot

//private AbilityScript[] currentUsedAbilities; //Current used abilities
//private SlotAbilityHolder[] listOfSlotHolder; //List of used ability holder

//private object firstDragScript;
//private int firstDragIndex = -1;



//private void Awake()
//{
//    entity = GameManager.Instance.PlayerEntity;
//    InitializedHolder();

//    listOfAllAbilities = GameManager.Instance.GetAllListOfAbility;
//    listOfUnlockedAbilities = entity.GetAbility_Controller.GetListOfUnlockedAbilities();
//}

//private void Start()
//{
//    currentUsedAbilities = entity.GetAbility_Controller.ListOfCurrentAbilities.ToArray();

//    //doneBtn.onClick.AddListener(DoneEditAbilities);
//    doneEditBtn.ButtonReleased.AddListener(DoneEditAbilities);

//    GenerateSlots();
//    UpdateUnlockAbilityInList();

//    UpdateHolderVisual();

//}

//private void DoneEditAbilities()
//{
//    //Done edit ability
//    UI_Manager.Instance.CloseMenu("Ability Inventory UI");
//    UI_Manager.Instance.ActivateID_OpenMenu("game_ui");

//    PlayerSingleton.Instance.playerScript.GetAbility_Controller.ListOfCurrentAbilities = currentUsedAbilities.ToList(); //Update the ability of the player
//    UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons();
//    //MobileController mobileController = UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI").UpdateAbilityButtons();
//    //mobileController.UpdateAbilityButtons();
//    //UIManager.Instance.ChangeUIState = UIManager.GUIState.InGame;
//}

//private void GenerateSlots()
//{
//    //List.Distinct() method is removing all the duplicate items in the list
//    foreach (AbilityScript ability in listOfAllAbilities.Distinct())
//    {
//        //For warning purposes, kapag yung ability is nag duplicate sa list
//        int count = listOfAllAbilities.Where(x => x == ability).Count();
//        if (count >= 2)
//        {
//            Debug.LogWarning(string.Format("{0} is duplicated ({1}) in list of all ability", ability, count));
//        }

//        //Create a new slot
//        AbilitySlot newSlot = Instantiate(slotPrefab);
//        newSlot.transform.SetParent(contentSlot);
//        newSlot.GetComponent<RectTransform>().localScale = Vector3.one;
//        newSlot.LockedAbility(); //Set the slot as locked

//        newSlot.OnAbilitySlotClicked += SlotPointerClick;
//        newSlot.OnAbilitySlotBeginDrag += GrabbingAbilitySlot;
//        newSlot.OnAbilitySlotEndDrag += EndDraggingAbility;

//        listOfAbilitySlot.Add(newSlot);
//    }

//    UpdateUnlockedAbilityList_Visual();
//}
//private void InitializedHolder()
//{
//    listOfSlotHolder = transform.GetComponentsInChildren<SlotAbilityHolder>();
//    foreach (var holder in listOfSlotHolder)
//    {
//        holder.OnResetAbilityHolder += ResetHolder;
//        holder.OnAbilitySlotHolderBeginDrag += GrabbingAbilitySlot;
//        holder.OnAbilitySlotHolderDrop += SwappingSlot;
//        holder.OnAbilitySlotHolderEndDrag += EndDraggingAbility;
//    }
//}

//private void ResetHolder(SlotAbilityHolder slotHolder)
//{
//    //Removing use ability in holders
//    var holderIndex = listOfSlotHolder.ToList().IndexOf(slotHolder);

//    currentUsedAbilities[holderIndex] = null;
//    Debug.Log(holderIndex);

//    UpdateHolderVisual();
//}

//private void SlotPointerClick(AbilitySlot slotScript)
//{
//    AbilityScript ability;
//    if (dictAbilitySlots.TryGetValue(slotScript, out ability))
//    {
//        Debug.Log("Pressing " + ability.abilityName);
//    }
//    else
//    {
//        Debug.LogWarning("This slot doesn't have ability");
//    }
//}

//private void GrabbingAbilitySlot(object scriptItem)
//{
//    if (!scriptItem.GetType().IsClass) { return; }

//    var testIndex = -1;

//    if ((scriptItem.GetType() == typeof(SlotAbilityHolder)))
//    {
//        testIndex = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);
//        if (testIndex == -1) { return; }
//    }
//    else
//    {
//        testIndex = listOfAbilitySlot.ToList().IndexOf((AbilitySlot)scriptItem);
//        if (testIndex == -1) { return; }
//    }

//    firstDragScript = scriptItem;
//    firstDragIndex = testIndex;

//    //Visual for dragging the ability
//    Debug.Log("Visual Grabbing");
//}
//private void SwappingSlot(object scriptItem)
//{
//    //Handle Swaping abilities and use abilities
//    if (!scriptItem.GetType().IsClass || firstDragScript == null) { return; }

//    if ((firstDragScript.GetType() == typeof(SlotAbilityHolder)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
//    {
//        //Swapping abilities in slot holder

//        int indexHolder = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);
//        var item1 = currentUsedAbilities[firstDragIndex]; //Save the 1st item
//        currentUsedAbilities[firstDragIndex] = currentUsedAbilities[indexHolder]; //Transfer 2nd position to 1st position
//        currentUsedAbilities[indexHolder] = item1; //Apply the save 1st position to 2nd position

//    }
//    else if ((firstDragScript.GetType() == typeof(AbilitySlot)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
//    {
//        /** 
//         * First drag is AbilityScript and Second drag is SlotAbilityHolder
//         * To handle the swapping Slot
//         * Place the ability slot to Slot Holder 
//        **/

//        int indexHolder = listOfSlotHolder.ToList().IndexOf((SlotAbilityHolder)scriptItem);

//        var ability = dictAbilitySlots[(AbilitySlot)firstDragScript];

//        currentUsedAbilities[indexHolder] = ability;

//    }

//    UpdateHolderVisual();
//}

//private void EndDraggingAbility(object scriptItem)
//{
//    //Reseting when end dragging 
//    firstDragScript = null;
//    firstDragIndex = -1;
//}



////Update the visual of the ability holder
//private void UpdateHolderVisual()
//{
//    //Reset the list of ability
//    foreach (var item in listOfAbilitySlot)
//    {
//        //if (item.isLocked) { continue; }
//        item.EnableSlot();
//    }

//    for (int i = 0; i < listOfSlotHolder.Length; i++)
//    {
//        //Reset holder
//        listOfSlotHolder[i].ResetHolder();

//        //Set new data in holder
//        if (currentUsedAbilities[i] != null)
//        {
//            listOfSlotHolder[i].SetData(currentUsedAbilities[i].abilityIcon);
//        }
//    }
//    UpdateUnlockedAbilityList_Visual();
//}

////Update the visuals of list abilities
//private void UpdateUnlockedAbilityList_Visual()
//{
//    //Clear data of each slots
//    foreach (var item in listOfAbilitySlot)
//    {
//        item.ClearData();
//    }

//    //Update data each slots
//    foreach (var item in dictAbilitySlots)
//    {
//        item.Key.SetData(item.Value);
//        item.Key.UnlockAbility();
//    }

//    //Disable the ability in slot kase nagamit na dito sa ability holder
//    for (int i = 0; i < listOfSlotHolder.Length; i++)
//    {
//        //Set new data in holder
//        if (currentUsedAbilities[i] != null)
//        {
//            foreach (var item in dictAbilitySlots)
//            {
//                if (item.Value == currentUsedAbilities[i])
//                {
//                    item.Key.DisableSlot();
//                    break;
//                }
//            }
//        }
//    }
//}


////Update the list and dictionary of the ability list
//private void UpdateUnlockAbilityInList()
//{
//    //Register the default abilities to listOfUnlockedAbilities
//    foreach (var ability in currentUsedAbilities)
//    {
//        //If the default ability is already inside the list then continue to next object
//        if (listOfUnlockedAbilities.Count > 0)
//            if (listOfUnlockedAbilities.Contains(ability) || ability == null) { continue; }

//        //If not yet inside then add it
//        listOfUnlockedAbilities.Add(ability);
//    }

//    //Unlock Ability in the list.
//    foreach (AbilityScript unlockedAbility in listOfUnlockedAbilities.Distinct())
//    {
//        //Check if this ability is already registered in dictionary.
//        if (dictAbilitySlots.ContainsValue(unlockedAbility))
//        {
//            //If the ability is already registered, then skip this
//            continue;
//        }


//        foreach (AbilitySlot slot in listOfAbilitySlot)
//        {
//            //Check if the slot is available for ability
//            if (dictAbilitySlots.ContainsKey(slot))
//            {
//                //If this slot hold an ability, skip this slot
//                continue;
//            }

//            //Else, Register it to dictionary
//            dictAbilitySlots.Add(slot, unlockedAbility);
//            break;
//        }
//    }
//}



//public override void ShowBehavior()
//{
//    //DEBUG
//    UpdateUnlockAbilityInList();
//    UpdateHolderVisual();

//    GameManager.Instance.SetPauseValue(true);
//}

//public override void HideBehavior()
//{
//    UpdateUnlockAbilityInList();
//    UpdateHolderVisual();

//    entity.GetAbility_Controller.ListOfCurrentAbilities = currentUsedAbilities.ToList();
//    GameManager.Instance.SetPauseValue(false);
//}
//}
