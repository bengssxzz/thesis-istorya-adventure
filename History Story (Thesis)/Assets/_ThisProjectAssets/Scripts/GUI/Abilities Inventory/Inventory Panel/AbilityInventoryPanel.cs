using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using MoreMountains.Tools;
using UnityEngine.UI;

public class AbilityInventoryPanel : MonoBehaviour
{
    private AbilityHolderPanel holderPanel;

   
    [SerializeField] private RectTransform contentSlot;
    [SerializeField] private AbilitySlot slotPrefab;
    [SerializeField] private RectTransform abilityIndicatorHolder;

    //private List<AbilityScript> listOfAllAbilities;//List of all available abilities
    //private List<AbilityScript> listOfUnlockedAbilities; //List of all unlocked abilties

    private List<AbilitySlot> listOfAbilitySlot; //Just a list of ability slot



    private void OnDestroy()
    {
        holderPanel.OnEquipAbilityChange -= OnEquippedAbilityChange;
        holderPanel.OnEnableEquipAbility -= OnEnableGetCurrentAbilities;

        foreach (var ability in listOfAbilitySlot)
        {
            ability.OnSlotClicked -= SlotClicked;
            ability.OnSlotBeginDrag -= SlotBeginDragged;
            ability.OnSlotDragging -= SlotDragging;
            ability.OnSlotDrop -= SlotDropped;
            ability.OnSlotEndDrag -= SlotEndDragged;
        }
    }

    private void Awake()
    {
        holderPanel = GetComponentInChildren<AbilityHolderPanel>(true);

        holderPanel.OnEquipAbilityChange += OnEquippedAbilityChange;
        holderPanel.OnEnableEquipAbility += OnEnableGetCurrentAbilities;

        //listOfAllAbilities = new List<AbilityScript>(GameManager.Instance.GetListOfAllAbility);

        listOfAbilitySlot = new List<AbilitySlot>();

        InitializeInventory();
    }

    
    private void OnEnable()
    {
        //listOfUnlockedAbilities = new List<AbilityScript>(GameManager.Instance.GetListOfCollectedAbility);

        UpdateAbilitySlot();
    }
    


    private void InitializeInventory() //Adding slot to inventory
    {
        foreach (var ability in GameManager.Instance.GetListOfAllAbility)
        {
            var newSlot = Instantiate(slotPrefab);
            newSlot.transform.SetParent(contentSlot);

            newSlot.OnSlotClicked += SlotClicked;
            newSlot.OnSlotBeginDrag += SlotBeginDragged;
            newSlot.OnSlotDragging += SlotDragging;
            newSlot.OnSlotDrop += SlotDropped;
            newSlot.OnSlotEndDrag += SlotEndDragged;

            listOfAbilitySlot.Add(newSlot);
        }
    }

    private Transform SetImageToIndicatorHolder(bool toggle, Sprite sprite)
    {
        abilityIndicatorHolder.gameObject.SetActive(toggle);
        var findImgHolder = abilityIndicatorHolder.transform.MMFindDeepChildDepthFirst("AbilityImg")?.GetComponent<Image>();

        if(findImgHolder != null)
        {
            findImgHolder.sprite = sprite;
        }

        //abilityIndicatorHolder.transform.Find("AbilityImg").GetComponent<Image>().sprite = null;

        return abilityIndicatorHolder.transform;
    }
    private void UpdateAbilitySlot()
    {
        //foreach (var abiSlot in listOfAbilitySlot)
        //{
        //    abiSlot.ResetData();
        //}

        for (int i = 0; i < GameManager.Instance.GetListOfCollectedAbility.Count; i++)
        {
            var slot = listOfAbilitySlot[i];

            slot.AssignedAbility = GameManager.Instance.GetListOfCollectedAbility[i];
            slot.InitializeSlot();
        }

    }

    private void OnEnableGetCurrentAbilities(List<AbilityScript> currentAbilities)
    {
        OnEquippedAbilityChange(currentAbilities);
    }

    private void OnEquippedAbilityChange(List<AbilityScript> currentAbilities)
    {
        foreach (var slot in listOfAbilitySlot)
        {
            slot.EnableSlot();
        }

        foreach (var currAbilities in currentAbilities)
        {
            if (currAbilities == null)
                continue;

            var slot = listOfAbilitySlot.FirstOrDefault(x => x.AssignedAbility == currAbilities);
            if(slot != null)
            {
                slot.DisableSlot();
            }
        }
        
    }
    


    private void SlotClicked(BaseSlot obj)
    {
        Debug.Log("THIS IS WORKING");
        if (obj is AbilitySlot)
        {
            var Ability_Slot = ((AbilitySlot)obj).AssignedAbility;
            Debug.Log("FUCK UNITY " + Ability_Slot.abilityName);
        }
    }
    private void SlotBeginDragged(BaseSlot obj)
    {
    }
    private void SlotDragging(BaseSlot obj)
    {
        if(obj is AbilitySlot)
        {
            var ability_Slot = ((AbilitySlot)obj).AssignedAbility;

            var indicator = SetImageToIndicatorHolder(true, ability_Slot.abilityIcon);

            Vector2 position;
            Canvas canvas = transform.root.GetComponent<Canvas>();
            Camera cam = Camera.main;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(
                (RectTransform)canvas.transform,
                Input.mousePosition,
                canvas.worldCamera,
                out position
                );

            indicator.position = canvas.transform.TransformPoint(position);

        }
    }
    private void SlotDropped(BaseSlot obj)
    {
    }

    private void SlotEndDragged(BaseSlot obj)
    {
        SetImageToIndicatorHolder(false, null);
    }



























}
