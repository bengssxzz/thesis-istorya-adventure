using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbilityPageUI : MonoBehaviour
{
    [SerializeField] private AbilitySlotUI abilitySlotPrefab;
    [SerializeField] private RectTransform abilitySlotContent;


    private List<AbilitySlotUI> slotUIPrefabs = new List<AbilitySlotUI>();
    private List<AbilityScript> listOfAbilities_Chapter;


    private void OnEnable()
    {
        SetAbilitiesUI();
    }


    public void SetListOfAbility(List<AbilityScript> listOfArtifacts)
    {
        listOfAbilities_Chapter = new List<AbilityScript>(listOfArtifacts);
    }

    private void SetAbilitiesUI()
    {
        if (slotUIPrefabs.Count > 0)
        {
            foreach (var slotUI in slotUIPrefabs)
            {
                slotUI.SetAbilitySlotUILocked();
            }
        }

        for (int i = 0; i < listOfAbilities_Chapter.Count; i++)
        {
            AbilityScript abilitiesInfo = listOfAbilities_Chapter[i];
            AbilitySlotUI slot;

            // Check if slotUIPrefabs has an item at index i
            if (i < slotUIPrefabs.Count && slotUIPrefabs[i] != null)
            {
                slot = slotUIPrefabs[i];
            }
            else
            {
                slot = CreateNewSlotUI();
            }

            // Unsubscribe previous event handlers before adding new ones
            slot.OnAbilityPressed -= abilitySlotPressed;
            slot.OnAbilityPressed += abilitySlotPressed;

            slot.SetArtifactSlotImage.sprite = abilitiesInfo.abilityIcon;

            if (CheckCollectedArtifact(abilitiesInfo))
            {
                slot.SetAbilitySlotUIUnlocked();
            }
            else
            {
                slot.SetAbilitySlotUILocked();
            }
        }
    }

    private async void abilitySlotPressed(AbilitySlotUI slotUI)
    {
        var index = 0;

        index = slotUIPrefabs.IndexOf(slotUI);

        var chapterSO = listOfAbilities_Chapter[index];

        UI_Manager.Instance.OpenMenu("AbilityPaperPage");

        var abilityPaperPage = await UI_Manager.Instance.FindComponentInUIMenu<AbilityPaperPageUI>("AbilityPaperPage");
        abilityPaperPage.SetPaperPage(chapterSO);
    }

    private AbilitySlotUI CreateNewSlotUI()
    {
        var newSlot = Instantiate(abilitySlotPrefab);
        newSlot.transform.SetParent(abilitySlotContent);
        slotUIPrefabs.Add(newSlot);

        return newSlot;
    }
    private bool CheckCollectedArtifact(AbilityScript artifacts) //Check if this artifact is already collected
    {
        var collectedAbilities = GameManager.Instance.GetListOfCollectedAbility;

        return collectedAbilities.Contains(artifacts);
    }














}
