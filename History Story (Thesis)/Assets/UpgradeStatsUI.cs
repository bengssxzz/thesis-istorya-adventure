using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel.Design.Serialization;
using System.Linq.Expressions;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UIElements;

public class UpgradeStatsUI : MonoBehaviour
{
    private Entities player;

    private VisualElement root;

    private Label lbl_remainingPoints;
    private ProgressBar progBar_healthStats, progBar_manaStats, progBar_defenceStats, progBar_damageStats, progBar_CDreductStats;
    private Label lbl_healthStats, lbl_manaStats, lbl_defenceStats, lbl_damageStats, lbl_CDreductStats;
    private Button upg_healthbtn, upg_manabtn, upg_defencebtn, upg_damagebtn, upg_CDreduct;
    private Button confirmUpgrage;

    private int TEST_remainingPoints = 5;
    private bool isVisible = false;


    void OnEnable()
    {
        
        //UpdateStats();
    }

    private void Awake()
    {
        
    }
    void Start()
    {
        Register();
        root.visible = false;
    }
    public void ToggleVisible()
    {
        isVisible = !isVisible;
        root.visible = isVisible;
        if (isVisible)
        {
            UpdateStats();
        }
    }

    private void Register(){
        player = GameObject.FindGameObjectWithTag("Player").GetComponent<Entities>();
        root = GetComponent<UIDocument>().rootVisualElement;

        lbl_remainingPoints = root.Q<Label>("UpgradePoint");

        progBar_healthStats = root.Q<ProgressBar>("HealthStatsProgressBar");
        lbl_healthStats = root.Q<Label>("HealthCount");
        upg_healthbtn = root.Q<Button>("HealthUpgradeButton");
        upg_healthbtn.clicked += () => {
            TEST_remainingPoints -= 1;
            player.GetEntityStats.UpgradeHealth = 10;
            UpdateStats();
        };
        

        progBar_manaStats = root.Q<ProgressBar>("ManaStatsProgressBar");
        lbl_manaStats = root.Q<Label>("ManaCount");
        upg_manabtn = root.Q<Button>("ManaUpgradeButton");
        upg_manabtn.clicked += () => {
            TEST_remainingPoints -= 1;
            player.GetEntityStats.UpgradeMana = 10;
            UpdateStats();
        };

        progBar_defenceStats = root.Q<ProgressBar>("DefenceStatsProgressBar");
        lbl_defenceStats = root.Q<Label>("DefenceCount");
        upg_defencebtn = root.Q<Button>("DefenceUpgradeButton");
        upg_defencebtn.clicked += () => {
            TEST_remainingPoints -= 1;
            player.GetEntityStats.UpgradeDefence = 2;
            UpdateStats();
        };

        progBar_damageStats = root.Q<ProgressBar>("DamageStatsProgressBar");
        lbl_damageStats = root.Q<Label>("DamageCount");
        upg_damagebtn = root.Q<Button>("DamageUpgradeButton");
        upg_damagebtn.clicked += () => {
            TEST_remainingPoints -= 1;
            player.GetEntityStats.UpgradeBaseDamage = 10;
            UpdateStats();
        };

        progBar_CDreductStats = root.Q<ProgressBar>("CoolDownStatsProgressBar");
        lbl_CDreductStats = root.Q<Label>("CoolDownCount");
        upg_CDreduct = root.Q<Button>("CoolDownUpgradeButton");
        upg_CDreduct.clicked += () => {
            TEST_remainingPoints -= 1;
            player.GetEntityStats.UpgradeCooldownReduction = 2;
            UpdateStats();
        };

        confirmUpgrage = root.Q<Button>("ConfirmButton");
        confirmUpgrage.clicked += () => {
            ToggleVisible();
        };
    }

    
    private void UpdateStats(){
        lbl_remainingPoints.text = TEST_remainingPoints.ToString();
        UpdateLabelStats();
        UpdateProgressStats();
        UpgradeButtonDisable();
    }
    private void UpgradeButtonDisable(){
        bool hasPoints = TEST_remainingPoints > 0;

        upg_healthbtn.SetEnabled(hasPoints);
        upg_manabtn.SetEnabled(hasPoints);
        upg_defencebtn.SetEnabled(hasPoints);
        upg_damagebtn.SetEnabled(hasPoints);
        upg_CDreduct.SetEnabled(hasPoints);
    }
    private void UpdateLabelStats()
    {
        lbl_healthStats.text = player.GetEntityStats.GetMaxHealth.ToString();
        lbl_manaStats.text = player.GetEntityStats.GetMaxMana.ToString();
        lbl_defenceStats.text = player.GetEntityStats.defence.ToString();
        lbl_damageStats.text =player.GetEntityStats.baseDamage.ToString();
        lbl_CDreductStats.text =player.GetEntityStats.cooldownReduction.ToString();
    }
    private void UpdateProgressStats()
    {
        progBar_healthStats.value = (float)player.GetEntityStats.GetMaxHealth / 500;
        progBar_manaStats.value = player.GetEntityStats.GetMaxMana/300;
        progBar_defenceStats.value = player.GetEntityStats.defence/200;
        progBar_damageStats.value =player.GetEntityStats.baseDamage/400;
        progBar_CDreductStats.value =player.GetEntityStats.cooldownReduction/50;
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
