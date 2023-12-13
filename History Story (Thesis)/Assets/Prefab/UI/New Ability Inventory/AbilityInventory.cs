using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.EventSystems;
using UnityEngine.UI;

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
    [SerializeField] private Button doneBtn;


    [SerializeField] private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>(); //List of all abilities
    private List<AbilitySlot> listOfAbilitySlot = new List<AbilitySlot>(); //Just a list of ability slot

    [SerializeField] private List<AbilityScript> listOfUnlockedAbilities = new List<AbilityScript>(); //List of all unlocked abilties
    private Dictionary<AbilitySlot, AbilityScript> dictAbilitySlots = new Dictionary<AbilitySlot, AbilityScript>(); //Register abilities with the slot

    private AbilityScript[] currentUsedAbilities; //Current used abilities
    private SlotAbilityHolder[] listOfSlotHolder; //List of used ability holder

    private object firstDragScript;
    private int firstDragIndex = -1;


    private void Awake()
    {
        entity = GameManager.instance.GetPlayer();
        currentUsedAbilities = entity.abilityHolder.GetListOfCurrentAbilities().ToArray();
        InitializedHolder();
    }

    private void Start()
    {
        doneBtn.onClick.AddListener(DoneEditAbilities);

        
        GenerateSlots();
        UpdateUnlockAbilityInList();

        UpdateHolderVisual();

    }

    private void DoneEditAbilities()
    {
        //Done edit ability
        
        UIManager.instance.SetGUIState();
    }

    private void GenerateSlots()
    {
        //List.Distinct() method is removing all the duplicate items in the list
        foreach (AbilityScript ability in listOfAllAbilities.Distinct())
        {
            //For warning purposes, kapag yung ability is nag duplicate sa list
            int count = listOfAllAbilities.Where(x => x == ability).Count();
            if(count >= 2)
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

        GameManager.instance.SetPauseValue(true);
    }

    public override void HideBehavior()
    {
        //UpdateUnlockedAbilityListVisual();
        entity.abilityHolder.SetChangeListAbilities(currentUsedAbilities.ToList());
        GameManager.instance.SetPauseValue(false);
    }

























    //private Entities entity;

    //[SerializeField] private List<SlotAbilityUnlocked> unlockedAbilities1 = new List<SlotAbilityUnlocked>();
    //[SerializeField] private RectTransform contentSlot;
    //[SerializeField] private AbilitySlot slotPrefab;

    //[SerializeField] private MouseFollower mouseFollower;

    //private AbilityScript[] currentUsedAbilities = new AbilityScript[4]; //List of used skills

    //[SerializeField] private List<AbilityScript> listOfAllAbilities = new List<AbilityScript>();
    //private Dictionary<AbilityScript, AbilitySlot> dictionaryAbilitySlot = new Dictionary<AbilityScript, AbilitySlot>();

    //[SerializeField] private List<AbilityScript> unlockedAbilities = new List<AbilityScript>(); //List of unlocked abilities
    //private List<AbilitySlot> listOfAbilitySlot = new List<AbilitySlot>(); //List of all slots
    //private List<SlotAbilityHolder> listOfSlotHolder = new List<SlotAbilityHolder>(); //List of ability slot holder

    //private object firstDragScript;
    //private int firstDragIndex = -1;

    //private bool isDroppingOn = false;

    //private void Awake()
    //{
    //    entity = GameManager.instance.GetPlayer();
    //}
    //private void Start()
    //{
    //    InitializeSlot1();
    //    InitializeSlotHolder();

    //    //Testing
    //    //UpdateListOfAbility();
    //    UnlockAbilitySlot();
    //    GetCurrentAbilities();
    //    RefreshVisualSlotHolder();

    //    foreach (KeyValuePair<AbilityScript, AbilitySlot> item in dictionaryAbilitySlot)
    //    {
    //        Debug.Log(item.Key + " ::: " + item.Value);
    //    }
    //}

    //private void InitializeSlot1() //Initialize the ability slot holder 
    //{
    //    for (int i = 0; i < listOfAllAbilities.Count; i++)
    //    {
    //        //If the ability is not yet registered
    //        if (!dictionaryAbilitySlot.ContainsKey(listOfAllAbilities[i])) 
    //        {
    //            AbilitySlot newSlot = Instantiate(slotPrefab); //New slot ability
    //            newSlot.transform.SetParent(contentSlot);
    //            newSlot.GetComponent<RectTransform>().localScale = Vector3.one;
    //            newSlot.LockedAbility();

    //            newSlot.OnAbilitySlotClicked += SlotPointerClick;
    //            newSlot.OnAbilitySlotBeginDrag += DraggingSlot;
    //            newSlot.OnAbilitySlotDrop += SwappingSlot;
    //            newSlot.OnAbilitySlotEndDrag += SlotEndDrag;

    //            listOfAbilitySlot.Add(newSlot);
    //            dictionaryAbilitySlot.Add(listOfAllAbilities[i], newSlot);
    //        }
    //        else
    //        {
    //            Debug.LogWarning(listOfAllAbilities[i].abilityName + " is already registered");
    //        }

    //    }
    //}
    //private void InitializeSlot() //Initialize ability slot
    //{
    //    //Adding slots
    //    for (int i = 0; i < 5; i++)
    //    {
    //        AbilitySlot newSlot = Instantiate(slotPrefab);
    //        newSlot.transform.SetParent(contentSlot);
    //        newSlot.GetComponent<RectTransform>().localScale = Vector3.one;
    //        newSlot.LockedAbility();
    //        listOfAbilitySlot.Add(newSlot);
    //    }

    //    //Subscribing to events
    //    foreach (var slot in listOfAbilitySlot)
    //    {
    //        slot.OnAbilitySlotClicked += SlotPointerClick;
    //        slot.OnAbilitySlotBeginDrag += DraggingSlot;
    //        slot.OnAbilitySlotDrop += SwappingSlot;
    //        slot.OnAbilitySlotEndDrag += SlotEndDrag;
    //    }
    //}
    //private void InitializeSlotHolder() //Initialize the ability slot holder 
    //{
    //    foreach (SlotAbilityHolder slotHolder in transform.GetComponentsInChildren<SlotAbilityHolder>())
    //    {
    //        slotHolder.ResetHolder();
    //        listOfSlotHolder.Add(slotHolder);

    //        slotHolder.OnAbilitySlotHolderClicked += SlotHolderPointerClick;
    //        slotHolder.OnAbilitySlotHolderBeginDrag += DraggingSlot;
    //        slotHolder.OnAbilitySlotHolderDrop += SwappingSlot;
    //        slotHolder.OnAbilitySlotHolderEndDrag += SlotHolderEndDrag;

    //    }
    //}

    //private void GetCurrentAbilities() //Get the current abilities of the player
    //{
    //    var currentAbility = entity.abilityHolder.GetListOfAbilities().ToArray();
    //    currentUsedAbilities = currentAbility;
    //}
    //private void SetCurrentAbilities() //Set the abilities of the player
    //{
    //    var editedAbility = currentUsedAbilities.ToList();
    //    entity.abilityHolder.SetChangeListAbilities(editedAbility);

    //}

    //private void RefreshVisualSlotHolder()
    //{
    //    /* If the ability is already at default ability of the player, 
    //     * unlock the abilities, then disabled it kase ginagamit na ng player yung ability
    //     */
    //    for (int i = 0; i < currentUsedAbilities.Length; i++)
    //    {
    //        listOfSlotHolder[i].ResetHolder();

    //        if(currentUsedAbilities[i] != null)
    //        {
    //            listOfSlotHolder[i].SetData(currentUsedAbilities[i].skillIcon); //Set the data of the slot

    //            if (dictionaryAbilitySlot.ContainsKey(currentUsedAbilities[i]))
    //            {
    //                AddAbility(currentUsedAbilities[i]); //Add ability to unlockAbility
    //                dictionaryAbilitySlot[currentUsedAbilities[i]].UnlockAbility(currentUsedAbilities[i]); //Unlock the slot
    //                dictionaryAbilitySlot[currentUsedAbilities[i]].DisableSlot(); //Disabled the slot
    //            }
    //        }

    //    }
    //}

    //private void UnlockAbilitySlot()
    //{
    //    for (int i = 0; i < unlockedAbilities.Count; i++)
    //    {
    //        AbilitySlot slot;

    //        if(unlockedAbilities[i] == null) { continue; }

    //        if (dictionaryAbilitySlot.TryGetValue(unlockedAbilities[i], out slot))
    //        {
    //            slot.UnlockAbility(unlockedAbilities[i]);
    //        }
    //    }
    //} 
    //private void UpdateListOfAbility()
    //{
    //    for (int i = 0; i < unlockedAbilities.Count; i++)
    //    {
    //        listOfAbilitySlot[i].UnlockAbility(unlockedAbilities[i]);
    //    }
    //} //To be delete
    //public void AddAbility(AbilityScript ability)
    //{
    //    unlockedAbilities.Add(ability);

    //    UpdateListOfAbility();
    //}


    //private void DraggingSlot(object scriptItem)
    //{
    //    isDroppingOn = false;
    //    var script = scriptItem.GetType();
    //    if (script.IsClass)
    //    {
    //        if (script == typeof(SlotAbilityHolder))
    //        {
    //            int index = listOfSlotHolder.IndexOf((SlotAbilityHolder)scriptItem);
    //            firstDragScript = scriptItem;
    //            firstDragIndex = index;
    //        }
    //        else if (script == typeof(AbilitySlot))
    //        {
    //            int index = listOfAbilitySlot.IndexOf((AbilitySlot)scriptItem);
    //            firstDragScript = scriptItem;
    //            firstDragIndex = index;
    //        }
    //    }

    //    Debug.Log(firstDragScript + " : " + firstDragIndex);
    //}
    //private void SwappingSlot(object scriptItem)
    //{
    //    //Handle Swaping abilities and use abilities
    //    if (!scriptItem.GetType().IsClass) { return; }

    //    Debug.Log("1st: " + firstDragScript.GetType() + " 2nd: " + scriptItem.GetType());

    //    if((firstDragScript.GetType() == typeof(SlotAbilityHolder)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
    //    {
    //        //Swapping abilities in slot holder
    //        Debug.Log("Swapping Skill");

    //        isDroppingOn = true;

    //        int indexSlot = listOfSlotHolder.IndexOf((SlotAbilityHolder)scriptItem);
    //        var item1 = currentUsedAbilities[firstDragIndex]; //Save the 1st item
    //        currentUsedAbilities[firstDragIndex] = currentUsedAbilities[indexSlot]; //Transfer 2nd position to 1st position
    //        currentUsedAbilities[indexSlot] = item1; //Apply the save 1st position to 2nd position
    //        RefreshVisualSlotHolder();
    //    }
    //    else if ((firstDragScript.GetType() == typeof(AbilitySlot)) && (scriptItem.GetType() == typeof(SlotAbilityHolder)))
    //    {
    //        //First drag is AbilityScript and Second drag is SlotAbilityHolder
    //        //To handle the swapping Slot
    //        //Place the ability slot to Slot Holder
    //        isDroppingOn = true;
    //        int indexSlot = listOfSlotHolder.IndexOf((SlotAbilityHolder)scriptItem);

    //        Debug.Log("Used Skill : " + indexSlot);

    //        listOfSlotHolder[indexSlot].SetData(unlockedAbilities[firstDragIndex].skillIcon); //Set the data in the ability holder
    //        listOfAbilitySlot[firstDragIndex].DisableSlot(); // Disabled the slot
    //    }
    //}



    ////Ability Slot
    //private void SlotPointerClick(AbilitySlot obj)
    //{
    //    int index = listOfAbilitySlot.IndexOf(obj);
    //    if (index == -1) { return; }

    //    Debug.Log(obj.gameObject.name + ": " + index);
    //}
    //private void SlotBeginDrag(AbilitySlot obj)
    //{
    //    Debug.Log("Start Dragging");
    //}
    //private void SlotDrop(AbilitySlot obj)
    //{
    //    Debug.Log("On Drop something");
    //}
    //private void SlotEndDrag(AbilitySlot obj)
    //{
    //    Debug.Log("End Dragging");
    //}


    ////Ability Slot Holder
    //private void SlotHolderPointerClick(SlotAbilityHolder obj)
    //{
    //    int index = listOfSlotHolder.IndexOf(obj);
    //    if (index == -1) { return; }

    //    Debug.Log(obj.gameObject.name + ": " + index);
    //}
    //private void SlotHolderBeginDrag(SlotAbilityHolder obj)
    //{
    //    Debug.Log("Start dragging");

    //}
    //private void SlotHolderDrop(SlotAbilityHolder obj)
    //{
    //    throw new NotImplementedException();
    //}
    //private void SlotHolderEndDrag(SlotAbilityHolder obj)
    //{
    //    //Reset
    //    Debug.Log("Holder End Drag");

    //    if (isDroppingOn) { return; }

    //    int index = listOfSlotHolder.IndexOf(obj);
    //    listOfSlotHolder[index].ResetHolder();
    //}




}
