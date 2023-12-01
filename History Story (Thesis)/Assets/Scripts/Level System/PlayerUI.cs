using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerUI : UIPages
{
    [SerializeField] private Entities entity;

    [SerializeField] private GameObject expBarVisual;
    [SerializeField] private TextMeshProUGUI levelTxt;
    [SerializeField] private Slider playerUIExpBar;

    [SerializeField] private UpgradeStatsSystem upgradeSystemUI;

    private void Start()
    {
        entity = GameObject.FindGameObjectWithTag("Player").GetComponent<Entities>();

        //ExpBarToggle();
        //UpdateLevelText();
        //entity.GetLevelSystem.OnChangedExperience += ChangedExperience;
        //entity.GetLevelSystem.OnChangedLevel += ChangedLevel;
    }
    private void Update()
    {
        ExpBarToggle();
    }


    private void ChangedExperience(int exp, int expToNextLvl)
    {
        playerUIExpBar.value = (float)exp / expToNextLvl;
    }

    private void ExpBarToggle()
    {
        if (upgradeSystemUI.isActiveAndEnabled)
        {
            expBarVisual.SetActive(false);
        }
        else
        {
            expBarVisual.SetActive(true);
        }
    }

    public override void ShowBehavior()
    {
    }

    public override void HideBehavior()
    {
    }
}
