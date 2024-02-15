using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using MoreMountains.Tools;

public class AbilityPaperPageUI : MonoBehaviour
{
    private AbilityScript assignAbility;


    [SerializeField] private Image abilityImgHolder;
    [SerializeField] private TextMeshProUGUI abilityName;
    [SerializeField] private TextMeshProUGUI abilityDescription;

    [SerializeField] private MMTouchButton closeBtn;


    public AbilityScript SetAssignAbility{ set { assignAbility = value; } }




    private void OnEnable()
    {
        closeBtn?.ButtonReleased.AddListener(ClosePaperPage);
    }



    private void OnDisable()
    {
        abilityImgHolder.sprite = null;
        abilityName.text = "";
        abilityDescription.text = "";

        closeBtn?.ButtonReleased.RemoveListener(ClosePaperPage);
    }

    public void SetPaperPage(AbilityScript ability)
    {
        abilityImgHolder.sprite = ability.abilityIcon;

        abilityName.text = ability.abilityName;
        abilityDescription.text = ability.abilityDescription;
    }
    private void ClosePaperPage()
    {
        UI_Manager.Instance.CloseMenu("AbilityPaperPage");
    }



}
