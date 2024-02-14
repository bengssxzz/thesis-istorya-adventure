using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;
using System;

public class ArtifactsPaperPage : MonoBehaviour
{
    private ArtifactsSO assignArtifact;
    
    
    [SerializeField] private Image artifactsImgHolder;
    [SerializeField] private TextMeshProUGUI artifactName;
    [SerializeField] private TextMeshProUGUI artifactDescription;

    [SerializeField] private MMTouchButton closeBtn;


    public ArtifactsSO SetAssignArtifacts { set { assignArtifact = value; } }




    private void OnEnable()
    {
        closeBtn?.ButtonReleased.AddListener(ClosePaperPage);
    }

   

    private void OnDisable()
    {
        artifactsImgHolder.sprite = null;
        artifactName.text = "";
        artifactDescription.text = "";

        closeBtn?.ButtonReleased.RemoveListener(ClosePaperPage);
    }

    public void SetPaperPage(ArtifactsSO artifact)
    {
        artifactsImgHolder.sprite = artifact.artifactsSprite;

        artifactName.text = artifact.artifactName;
        artifactDescription.text = artifact.description;
    }
    private void ClosePaperPage()
    {
        UI_Manager.Instance.CloseMenu("ArtifactPaperPage");
    }






















}
