using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;

public class UpgradeStatsSystem : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private TextMeshProUGUI pointsTxt;
    [SerializeField] private UpgradableStats prefebUpgradeStats;
    [SerializeField] private Transform content;

    private List<UpgradableStats> listOfUpgradables = new List<UpgradableStats>();

    private int points;

    private void Start()
    {
        entity = GameObject.FindGameObjectWithTag("Player").GetComponent<Entities>();

        //Try
        SetPoints(5);

        Initialize();
    }

    private void Initialize()
    {
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

        points -= 1;
        
        UpdateUIVisuals();
        entity.GetEntityStats.UpgradeCategoryStats(category);
    }

    public void Show()
    {
        gameObject.SetActive(true);
    }
    public void Hide()
    {
        gameObject.SetActive(false);
    }
    public void ToggleVisible()
    {
        bool isActive = !gameObject.activeInHierarchy;
        gameObject.SetActive(isActive);
    }
}
