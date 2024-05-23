using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;
using System;


public class ArtifactsSlotUI : MonoBehaviour
{
    [SerializeField] private MMTouchButton artifactBtn;

    [SerializeField] private Image artifactImage;


    public event Action<ArtifactsSlotUI> OnArtifactPressed;


    public Image SetArtifactSlotImage { get { return artifactImage; } }
    public MMTouchButton GetArtifactSlotBtn { get { return artifactBtn; } }




    private void OnEnable()
    {
        artifactBtn.ButtonReleased.AddListener(ArtifactPressed);
    }

    private void OnDisable()
    {
        artifactBtn.ButtonReleased.RemoveListener(ArtifactPressed);
    }


    private void ArtifactPressed()
    {
        OnArtifactPressed?.Invoke(this);
    }



    public void SetArtifactLocked()
    {
        artifactBtn.Interactable = false;
        
        artifactImage.color = Color.black;
    }

    public void SetArtifactUnlocked()
    {
        artifactBtn.Interactable = true;

        artifactImage.color = Color.white;
    }




}
