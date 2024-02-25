using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;
using MoreMountains.Tools;
using UnityEngine.UI;

public class AbilityHolderPanel : MonoBehaviour
{
    [SerializeField] private MMTouchButton setChangesButton;
    [SerializeField] private RectTransform abilityIndicatorHolder;

    private PlayerScript player;
    private List<SlotAbilityHolder> slotAbilityHolders;
    private List<AbilityScript> listOfOldCurrentAbilities;
    private AbilityScript[] abilityPositions;

    public event Action<List<AbilityScript>> OnEnableEquipAbility;
    public event Action<List<AbilityScript>> OnEquipAbilityChange;





    private void OnDestroy()
    {
        foreach (var holderSlot in slotAbilityHolders)
        {
            holderSlot.OnSlotClicked -= SlotClicked;
            holderSlot.OnSlotBeginDrag -= SlotBeginDragged;
            holderSlot.OnSlotDragging -= SlotDragging;
            holderSlot.OnSlotDrop -= SlotDropped;
            holderSlot.OnSlotEndDrag -= SlotEndDragged;

            holderSlot.OnRemoveEquippedAbilities -= RemovedAbility;
        }
    }
    private void Awake()
    {
        slotAbilityHolders = new List<SlotAbilityHolder>(GetComponentsInChildren<SlotAbilityHolder>(true));

        InitializedHolderSlot();
    }

    private void OnEnable()
    {
        UpdateHolderSlotOnOpen();

        setChangesButton.ButtonReleased.AddListener(SetChangesAbilities);

    }
    private void OnDisable()
    {
        setChangesButton.ButtonReleased.RemoveListener(SetChangesAbilities);
    }


    private void InitializedHolderSlot()
    {
        foreach (var holderSlot in slotAbilityHolders)
        {
            holderSlot.OnSlotClicked += SlotClicked;
            holderSlot.OnSlotBeginDrag += SlotBeginDragged;
            holderSlot.OnSlotDragging += SlotDragging;
            holderSlot.OnSlotDrop += SlotDropped;
            holderSlot.OnSlotEndDrag += SlotEndDragged;

            holderSlot.OnRemoveEquippedAbilities += RemovedAbility;
        }
    }

   
    private void UpdateHolderSlotOnOpen()
    {
        player = FindObjectOfType<PlayerScript>(true);

        AbilityScript[] playerCurrentAbilities;

        if(player != null)
        {
            playerCurrentAbilities = player.GetAbility_Controller.ListOfCurrentAbilities.ToArray(); //Get the current abilities of the player
            listOfOldCurrentAbilities = new List<AbilityScript>(playerCurrentAbilities); //Set the old abilities
            abilityPositions = playerCurrentAbilities; //Set the current ability to this abilityPositions

            UpdateHolderSlotVisual();

            OnEnableEquipAbility?.Invoke(new List<AbilityScript>(abilityPositions));
        }
        else
        {
            Debug.LogError("CANT FIND THE PLAYER IN THE SCENE");
        }
    }
    private void UpdateHolderSlotVisual()
    {
        for (int i = 0; i < slotAbilityHolders.Count; i++)
        {
            var ability = abilityPositions[i];
            var holder = slotAbilityHolders[i];

            holder.ResetHolder();

            if(ability != null)
            {
                holder.SetData(ability.abilityIcon);
            }

        }
    }

    private Transform SetImageToIndicatorHolder(bool toggle, Sprite sprite)
    {
        abilityIndicatorHolder.gameObject.SetActive(toggle);
        var findImgHolder = abilityIndicatorHolder.transform.MMFindDeepChildDepthFirst("AbilityImg")?.GetComponent<Image>();

        if (findImgHolder != null)
        {
            findImgHolder.sprite = sprite;
        }

        return abilityIndicatorHolder.transform;
    }

    private async void SetChangesAbilities()
    {
        UI_Manager.Instance.CloseMenu("Ability Inventory UI");
        UI_Manager.Instance.ActivateID_OpenMenu("game_ui");


        player.GetAbility_Controller.ListOfCurrentAbilities = new List<AbilityScript>(abilityPositions); //Update the current abilities
        var mobileController = await UI_Manager.Instance.FindComponentInUIMenu<MobileController>("TouchController UI");
        mobileController.UpdateAbilityButtons(listOfOldCurrentAbilities.ToArray());
    }


    //Removing Ability
    private void RemovedAbility(SlotAbilityHolder slot)
    {
        int index = slotAbilityHolders.IndexOf(slot);

        abilityPositions[index] = null;

        OnEquipAbilityChange?.Invoke(new List<AbilityScript>(abilityPositions));
        UpdateHolderSlotVisual();
    }

    private void SlotClicked(SlotAbilityHolder slot,  BaseSlot slotInteracted)
    {
        if (slotInteracted is SlotAbilityHolder)
        {
            Debug.Log(slotInteracted.gameObject.name);
        }
    }
    private void SlotBeginDragged(SlotAbilityHolder slot, BaseSlot slotInteracted)
    {

    }
    private void SlotDragging(SlotAbilityHolder slot, BaseSlot slotInteracted)
    {
        if (slot is SlotAbilityHolder)
        {
            int index = slotAbilityHolders.IndexOf(slot);

            var ability = abilityPositions[index];

            var indicator = SetImageToIndicatorHolder(true, ability.abilityIcon);

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

    private void SlotDropped(SlotAbilityHolder slot, BaseSlot slotInteracted)
    {
        Debug.Log("DROPPED SOMETHING");
        
        if (slotInteracted is AbilitySlot) //If the slotInteracted is from AbilitySlot 
        {
            //Equip the ability
            AbilitySlot interactedSlot = (AbilitySlot)slotInteracted;

            if(!interactedSlot.IsSlotEnabled || interactedSlot.IsSlotLocked) { return; }

            int index = slotAbilityHolders.IndexOf(slot);

            slotAbilityHolders[index].SetData(interactedSlot.AssignedAbility.abilityIcon);
            abilityPositions[index] = interactedSlot.AssignedAbility;


            interactedSlot.DisableSlot();
        }
        else if(slotInteracted is SlotAbilityHolder)  //If the slotInteracted is from SlotAbilityHolder 
        {
            //Swap the ability
            SlotAbilityHolder interactedSlot = (SlotAbilityHolder)slotInteracted;

            int index1 = slotAbilityHolders.IndexOf(slot);
            int index2 = slotAbilityHolders.IndexOf(interactedSlot);

            var item1 = abilityPositions[index2]; //Save the 1st item
            abilityPositions[index2] = abilityPositions[index1]; //Transfer 2nd position to 1st position
            abilityPositions[index1] = item1; //Apply the save 1st position to 2nd position


        }

        OnEquipAbilityChange?.Invoke(new List<AbilityScript>(abilityPositions));
        UpdateHolderSlotVisual();
    }

    private void SlotEndDragged(SlotAbilityHolder slot, BaseSlot slotInteracted)
    {
        SetImageToIndicatorHolder(false, null);
    }














    

   

    

}
