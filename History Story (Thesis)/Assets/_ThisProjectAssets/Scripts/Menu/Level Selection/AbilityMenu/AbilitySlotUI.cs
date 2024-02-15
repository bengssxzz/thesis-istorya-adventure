using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using MoreMountains.Tools;

public class AbilitySlotUI : MonoBehaviour
{

    private MMTouchButton abilityBtn;

    [SerializeField] private Image abilityImgHolder;
    [SerializeField] private RectTransform lockPanel;

    public event Action<AbilitySlotUI> OnAbilityPressed;


    public Image SetArtifactSlotImage { get { return abilityImgHolder; } }



    private void Awake()
    {
        abilityBtn = GetComponent<MMTouchButton>();
    }

    private void OnEnable()
    {
        abilityBtn.ButtonReleased.AddListener(AbilityPressed);
    }


    private void OnDisable()
    {
        abilityBtn.ButtonReleased.RemoveListener(AbilityPressed);
    }



    private void AbilityPressed()
    {
        OnAbilityPressed?.Invoke(this);
    }

    public void SetAbilitySlotUILocked()
    {
        abilityBtn.Interactable = false;

        lockPanel.gameObject.SetActive(true);
    }

    public void SetAbilitySlotUIUnlocked()
    {
        abilityBtn.Interactable = true;

        lockPanel.gameObject.SetActive(false);
    }





}
