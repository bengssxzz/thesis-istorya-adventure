using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Events;

public class UpgradeStatsSystem : UIPages
{
    private Entities entity;

    [SerializeField] private TextMeshProUGUI pointsTxt;
    [SerializeField] private UpgradableStats prefebUpgradeStats;
    [SerializeField] private Transform content;
    [SerializeField] private Button confirmBtn;

    private List<UpgradableStats> listOfUpgradables = new List<UpgradableStats>();

    private int points = 0;

    private void Start()
    {
        entity = GameObject.FindGameObjectWithTag("Player").GetComponent<Entities>();

        Initialize();
    }

    private void Initialize()
    {
        confirmBtn.onClick.AddListener(ConfirmBtn);

        int enumLength = Enum.GetNames(typeof(CategoryStats)).Length;

        for (int i = 0; i < enumLength; i++)
        {
            UpgradableStats newUpgradable = Instantiate(prefebUpgradeStats);
            newUpgradable.SetCategory((CategoryStats)i);
            newUpgradable.Initialize();
            newUpgradable.OnUpgrade += ApplyUpgrade;

            newUpgradable.transform.SetParent(content);
            listOfUpgradables.Add(newUpgradable);
        }
    }

    private void ConfirmBtn()
    {
        UIManager.instance.ChangeUIState = UIManager.GUIState.InGame;
        //Hide();
    }

    public void AddPoints() //Add points when leveling up
    {
        SetPoints(5);
    }

    public void SetPoints(int amount)
    {
        points = Mathf.Clamp(points + amount, 0, 99);
        pointsTxt.text = points.ToString();
    }

    private void UpdateUIVisuals()
    {
        pointsTxt.text = points.ToString();
        foreach (var item in listOfUpgradables) //Update buttons visuals
        {
            if(points > 0)
            {
                item.GetUpgradeBtn.interactable = true;
            }
            else //Disable buttons if the points is zero
            {
                item.GetUpgradeBtn.interactable = false;
            }
            
        }
    }

    private void ApplyUpgrade(CategoryStats category)
    {
        if(entity == null && points <= 0) 
        { return; }

        points--;
        
        UpdateUIVisuals();
        entity.GetEntityStats.UpgradeCategoryStats(category);
    }

    public override void ShowBehavior()
    {
        UpdateUIVisuals();
        GameManager.Instance.SetPauseValue(true);
    }

    public override void HideBehavior()
    {
        GameManager.Instance.SetPauseValue(false);
    }
}
