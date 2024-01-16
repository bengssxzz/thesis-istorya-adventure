using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;


public class UpgradableStats : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI statName;
    [SerializeField] private Slider statBar;
    [SerializeField] private Button upgradeBtn;
    public Button GetUpgradeBtn { get { return upgradeBtn; } }

    private CategoryStats categoryStats;
    
    private int currentValue = 0;
    private const int maxValue = 35;
    private bool isMax = false;

    public event Action<CategoryStats> OnUpgrade;

    public void Initialize()
    {
        statName.text = SetName(categoryStats);
        UpdateProgressBar();

        upgradeBtn.onClick.AddListener(UpgradeButton);
    }

    public void SetCategory(CategoryStats category)
    {
        categoryStats = category;
    }
    private string SetName(CategoryStats category)
    {
        switch (category)
        {
            case CategoryStats.MainStats:
                return "MainStats";

            case CategoryStats.Speed:
                return "Speed";

            case CategoryStats.Accuracy:
                return "Luck";

            case CategoryStats.Sight:
                return "Sight";

            case CategoryStats.Regeneration:
                return "Regeneration";

            default:
                return "???";

        }
    }
    

    private void UpdateProgressBar()
    {
        //float value = (float)currentValue / (float)maxValue;
        statBar.value = (float)currentValue / maxValue;
        statBar.GetComponentInChildren<TextMeshProUGUI>().text = ($"{currentValue}/{maxValue}");
    }
    private void UpdateStats()
    {
        if (isMax) { return; }

        currentValue = Mathf.Clamp(currentValue + 1, 0, maxValue);
        UpdateProgressBar();

        isMax = (currentValue == maxValue); //If the current value is the same as max value it means this is already max
        upgradeBtn.interactable = !isMax;
    }
    private void UpgradeButton()
    {
        UpdateStats();
        
        OnUpgrade?.Invoke(categoryStats);
    }
}
