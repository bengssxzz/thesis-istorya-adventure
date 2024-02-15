using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;

public class ArtifactsPage : MonoBehaviour
{
    [SerializeField] private ArtifactsSlotUI artifactsSlotPrefab;
    [SerializeField] private RectTransform artifactsSlotContent;


    private List<ArtifactsSlotUI> slotUIPrefabs = new List<ArtifactsSlotUI>();
    private List<ArtifactsSO> listOfArtifacts_Chapter;


    private void OnEnable()
    {
        SetArtifactsUI();
    }


    public void SetListOfArtifacts(List<ArtifactsSO> listOfArtifacts)
    {
        listOfArtifacts_Chapter = new List<ArtifactsSO>(listOfArtifacts);
    }

    private void SetArtifactsUI()
    {
        if (slotUIPrefabs.Count > 0)
        {
            foreach (var slotUI in slotUIPrefabs)
            {
                slotUI.SetArtifactLocked();
            }
        }

        for (int i = 0; i < listOfArtifacts_Chapter.Count; i++)
        {
            ArtifactsSO artifactInfo = listOfArtifacts_Chapter[i];
            ArtifactsSlotUI slot;

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
            slot.OnArtifactPressed -= ArtifactSlotPressed;
            slot.OnArtifactPressed += ArtifactSlotPressed;

            slot.SetArtifactSlotImage.sprite = artifactInfo.artifactsSprite;

            if (CheckCollectedArtifact(artifactInfo))
            {
                slot.SetArtifactUnlocked();
            }
            else
            {
                slot.SetArtifactLocked();
            }
        }
    }

    private void ArtifactSlotPressed(ArtifactsSlotUI slotUI)
    {
        var index = 0;

        index = slotUIPrefabs.IndexOf(slotUI);

        var chapterSO = listOfArtifacts_Chapter[index];

        UI_Manager.Instance.OpenMenu("ArtifactPaperPage");
        UI_Manager.Instance.FindComponentInUIMenu<ArtifactsPaperPage>("ArtifactPaperPage").SetPaperPage(chapterSO);
    }

    private ArtifactsSlotUI CreateNewSlotUI()
    {
        var newSlot = Instantiate(artifactsSlotPrefab);
        newSlot.transform.SetParent(artifactsSlotContent);
        slotUIPrefabs.Add(newSlot);

        return newSlot;
    }
    private bool CheckCollectedArtifact(ArtifactsSO artifacts) //Check if this artifact is already collected
    {
        var collectedArtifacts = GameManager.Instance.GetListOfCollectedArtifacts;

        return collectedArtifacts.Contains(artifacts);
    }








}
