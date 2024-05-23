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
        //Set to default
        foreach (var slotUI in slotUIPrefabs)
        {
            slotUI.SetArtifactLocked();
            slotUI.gameObject.SetActive(false);
        }

        //Set slots
        for (int i = 0; i < listOfArtifacts_Chapter.Count; i++)
        {
            ArtifactsSO artifactInfo = listOfArtifacts_Chapter[i];
            ArtifactsSlotUI slot;

            // Check if slotUIPrefabs has an item at index i
            slot = i < slotUIPrefabs.Count && slotUIPrefabs[i] != null ? slotUIPrefabs[i] : CreateNewSlotUI();


            // Unsubscribe previous event handlers before adding new ones
            slot.OnArtifactPressed -= ArtifactSlotPressed;
            slot.OnArtifactPressed += ArtifactSlotPressed;

            slot.SetArtifactSlotImage.sprite = artifactInfo.artifactsSprite;

            //Check if the artifact is already collected
            if (CheckCollectedArtifact(artifactInfo))
            {
                Debug.Log("Artifact Unlocked: " + artifactInfo.artifactName);
                slot.SetArtifactUnlocked();
            }
            else
            {
                Debug.Log("Artifact locked: " + artifactInfo.artifactName);
                slot.SetArtifactLocked();
            }

            slot.gameObject.SetActive(true);
        }




        ////Set to default
        //if (slotUIPrefabs.Count > 0)
        //{
        //    foreach (var slotUI in slotUIPrefabs)
        //    {
        //        slotUI.SetArtifactLocked();
        //        slotUI.gameObject.SetActive(false);
        //    }

        //    for (int i = 0; i < listOfArtifacts_Chapter.Count; i++)
        //    {
        //        slotUIPrefabs[i].gameObject.SetActive(true);
        //    }
        //}

        ////Unlocked artifacts
        //for (int i = 0; i < listOfArtifacts_Chapter.Count; i++)
        //{
        //    ArtifactsSO artifactInfo = listOfArtifacts_Chapter[i];
        //    ArtifactsSlotUI slot;

        //    // Check if slotUIPrefabs has an item at index i
        //    if (i < slotUIPrefabs.Count && slotUIPrefabs[i] != null)
        //    {
        //        slot = slotUIPrefabs[i];
        //    }
        //    else
        //    {
        //        slot = CreateNewSlotUI();
        //    }

        //    // Unsubscribe previous event handlers before adding new ones
        //    slot.OnArtifactPressed -= ArtifactSlotPressed;
        //    slot.OnArtifactPressed += ArtifactSlotPressed;

        //    slot.SetArtifactSlotImage.sprite = artifactInfo.artifactsSprite;

        //    if (CheckCollectedArtifact(artifactInfo))
        //    {
        //        Debug.LogError("Artifact Unlocked: " + artifactInfo.artifactName);
        //        slot.SetArtifactUnlocked();
        //    }
        //    else
        //    {
        //        Debug.LogError("Artifact locked: " + artifactInfo.artifactName);
        //        slot.SetArtifactLocked();
        //    }
        //}
    }

    private async void ArtifactSlotPressed(ArtifactsSlotUI slotUI)
    {
        var index = 0;

        index = slotUIPrefabs.IndexOf(slotUI);

        var chapterSO = listOfArtifacts_Chapter[index];

        UI_Manager.Instance.OpenMenu("ArtifactPaperPage");

        var artifactsPaperPage = await UI_Manager.Instance.FindComponentInUIMenu<ArtifactsPaperPage>("ArtifactPaperPage");
        artifactsPaperPage.SetPaperPage(chapterSO);
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
