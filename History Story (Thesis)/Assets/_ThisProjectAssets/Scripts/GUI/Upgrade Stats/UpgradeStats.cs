using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using MoreMountains.Feedbacks;
using UnityEngine.UI;
using System;
using TMPro;

public class UpgradeStats : MonoBehaviour
{

    private string statsAssign;
    private MMF_Player clickFeedback;

    
    public event Action<UpgradeStats, string> OnAddAmountValue;
    public event Action<UpgradeStats, string> OnReductAmountValue;

    [SerializeField] private MMTouchButton minusValueButton;
    [SerializeField] private MMTouchButton addValueButton;

    [SerializeField] private TextMeshProUGUI statsName;
    [SerializeField] private TextMeshProUGUI statsPlayerValue;
    [SerializeField] private TextMeshProUGUI statsAddValue;

    public string GetStatsAssign { get { return statsAssign; } }
    public MMF_Player SetClickFeedback { set { clickFeedback = value; } }

    private void OnEnable()
    {
        minusValueButton.ButtonReleased.AddListener(OnMinusButtonReleaseClick);
        addValueButton.ButtonReleased.AddListener(OnAddButtonReleaseClick);
    }
    private void OnDisable()
    {
        minusValueButton.ButtonReleased.RemoveListener(OnMinusButtonReleaseClick);
        addValueButton.ButtonReleased.RemoveListener(OnAddButtonReleaseClick);
    }


    private void OnAddButtonReleaseClick()
    {
        SetFeedback(addValueButton.transform);
        OnAddAmountValue?.Invoke(this, statsAssign);
    }

    private void OnMinusButtonReleaseClick()
    {
        SetFeedback(minusValueButton.transform);
        OnReductAmountValue?.Invoke(this, statsAssign);
    }

    private void SetFeedback(Transform button)
    {
        MMF_SquashAndStretch squashAndStretch = clickFeedback?.GetFeedbackOfType<MMF_SquashAndStretch>("ButtonClick");
        squashAndStretch.SquashAndStretchTarget = button;

        clickFeedback?.PlayFeedbacks();
    }


    public void SetData(string statsName, float statsCurrentValue)
    {
        statsAssign = statsName;
        this.statsName.text = statsName;
        statsPlayerValue.text = statsCurrentValue.ToString("F1");
    }
    public void SetStatsValue(float amount)
    {
        statsAddValue.text = string.Format("{0}%", amount.ToString("F1"));
    }
    public void ResetData()
    {
        statsAssign = "";
        this.statsName.text = "";

        statsPlayerValue.text = "";
        statsAddValue.text = "";
    }


    public void EnableMinusButton(bool toggle)
    {
        if (toggle)
        {
            minusValueButton.EnableButton();
        }
        else
        {
            minusValueButton.DisableButton();
        }
    }
    public void EnableAddButton(bool toggle)
    {
        if (toggle)
        {
            addValueButton.EnableButton();
        }
        else
        {
            addValueButton.DisableButton();
        }
    }
    





}
