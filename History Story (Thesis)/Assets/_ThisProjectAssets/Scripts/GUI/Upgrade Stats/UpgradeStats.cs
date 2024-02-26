using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using MoreMountains.Feedbacks;
using UnityEngine.UI;
using System;
using TMPro;
using Cysharp.Threading.Tasks;
using System.Threading;

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

    private CancellationTokenSource pressingCanellation;
    private bool holding = false;
    private float holdingDelay = 0.5f;
    private float pressingDelay = 0.1f;

    public string GetStatsAssign { get { return statsAssign; } }
    public MMF_Player SetClickFeedback { set { clickFeedback = value; } }

    private void OnEnable()
    {
        addValueButton.ButtonPressedFirstTime.AddListener(OnAddButtonPressing);
        minusValueButton.ButtonPressedFirstTime.AddListener(OnMinusButtonPressing);

        minusValueButton.ButtonReleased.AddListener(OnMinusButtonReleaseClick);
        addValueButton.ButtonReleased.AddListener(OnAddButtonReleaseClick);
    }
    private void OnDisable()
    {
        addValueButton.ButtonPressedFirstTime.RemoveListener(OnAddButtonPressing);
        minusValueButton.ButtonPressedFirstTime.RemoveListener(OnMinusButtonPressing);

        minusValueButton.ButtonReleased.RemoveListener(OnMinusButtonReleaseClick);
        addValueButton.ButtonReleased.RemoveListener(OnAddButtonReleaseClick);
    }

    private void OnDestroy()
    {
        pressingCanellation?.Cancel();
        pressingCanellation?.Dispose();
    }

    #region Button Events

    private async void OnAddButtonPressing()
    {
        pressingCanellation = new CancellationTokenSource();
        try
        {
            while (!pressingCanellation.IsCancellationRequested)
            {
                SetFeedback(addValueButton.transform);
                OnAddAmountValue?.Invoke(this, statsAssign);

                if (!holding)
                {
                    holding = true;
                    await UniTask.Delay(TimeSpan.FromSeconds(holdingDelay), cancellationToken: pressingCanellation.Token, ignoreTimeScale: true);
                }


                await UniTask.Delay(TimeSpan.FromSeconds(pressingDelay), cancellationToken: pressingCanellation.Token, ignoreTimeScale: true);
            }
        }
        catch (OperationCanceledException)
        {
            holding = false;
        }

        
    }
    private async void OnMinusButtonPressing()
    {
        pressingCanellation = new CancellationTokenSource();

        try
        {
            while (!pressingCanellation.IsCancellationRequested)
            {
                SetFeedback(minusValueButton.transform);
                OnReductAmountValue?.Invoke(this, statsAssign);

                if (!holding)
                {
                    holding = true;
                    await UniTask.Delay(TimeSpan.FromSeconds(holdingDelay), cancellationToken: pressingCanellation.Token, ignoreTimeScale: true);
                }

                await UniTask.Delay(TimeSpan.FromSeconds(pressingDelay), cancellationToken: pressingCanellation.Token, ignoreTimeScale: true);
            }
        }
        catch(OperationCanceledException)
        {
            holding = false;
        }
        
    }


    private void OnAddButtonReleaseClick()
    {
        holding = false;
        pressingCanellation?.Cancel();
    }
    private void OnMinusButtonReleaseClick()
    {
        holding = false;
        pressingCanellation?.Cancel();
    }

    #endregion

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
        statsAddValue.text = string.Format("{0}", amount.ToString("F1"));
    }
    public void ResetData()
    {
        statsAssign = "";
        this.statsName.text = "";

        statsPlayerValue.text = "";
        statsAddValue.text = "";

        EnableMinusButton(false);
    }


    public void EnableMinusButton(bool toggle)
    {
        if (toggle)
        {
            minusValueButton.EnableButton();
        }
        else
        {
            pressingCanellation?.Cancel();
            minusValueButton.DisableButton();
            holding = false;
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
            pressingCanellation?.Cancel();
            addValueButton.DisableButton();
            holding = false;
        }
    }




}
