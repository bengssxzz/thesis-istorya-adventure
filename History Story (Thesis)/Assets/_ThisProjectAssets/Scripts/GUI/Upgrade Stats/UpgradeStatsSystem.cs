using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using UnityEngine.UI;
using UnityEngine.Events;
using System.Linq;
using ThesisLibrary;
using MoreMountains.Tools;
using MoreMountains.Feedbacks;
using Cysharp.Threading.Tasks;

public class UpgradeStatsSystem : MonoBehaviour
{
    private PlayerScript player;
    private CanvasGroup canvasGroup;

    private int maxAvailablePoints = 0;
    private int currentAvailablePoints = 0;

    private string[] generatedStatsUpgrade;

    private Dictionary<string, float> currentStatsCanUpgrade = new Dictionary<string, float>(); //current amount of stats that upgraded
    private Dictionary<string, float> maxStatsCanUpgrade = new Dictionary<string, float>(); //Maximum amount of stats can be upgraded
    private Dictionary<string, float> updaterTextValue; //Just to save the value

    [SerializeField] private TextMeshProUGUI pointsTxt;

    [SerializeField] private UpgradeStats[] upgradeStats;

    [SerializeField] private MMTouchButton powerupBtn;

    [Space(15)]
    [SerializeField] private MMF_Player clickFeedback;
    [SerializeField] private MMF_Player powerUpFeedback;


    private void Awake()
    {
        currentAvailablePoints = maxAvailablePoints;
        player = PlayerSingleton.Instance.GetPlayerScript;
        canvasGroup = GetComponent<CanvasGroup>();
    }
    private void OnEnable()
    {
        if (currentStatsCanUpgrade.Count != 0 || maxStatsCanUpgrade.Count != 0)
            InitializeUpgrade();

        powerupBtn?.ButtonReleased.AddListener(SuccessfulUpgrade);
        foreach (var item in upgradeStats)
        {
            item.SetClickFeedback = clickFeedback;
            item.OnAddAmountValue += OnAddPressed;
            item.OnReductAmountValue += OnMinusPressed;
        }
        
    }
    private void OnDisable()
    {
        canvasGroup.alpha = 1;
        powerupBtn?.ButtonReleased.RemoveListener(SuccessfulUpgrade);
        foreach (var item in upgradeStats)
        {
            item.OnAddAmountValue -= OnAddPressed;
            item.OnReductAmountValue -= OnMinusPressed;
        }
    }

   

    private async void Start()
    {
        //Run one time only
        await SetMaxAmountToUpgrade(); //Register the computed desired stats that can upgrade
        UpdateCurrentAmountStats(); //Register the current stats to dictionary

        InitializeUpgrade();


        //SetPowerPoints(5); //FOR TESTING PURPOSES
    }
    private float GetStatsUpgradePercent(EntityStats stats) //Percentage of adding stats amount
    {
        switch (stats)
        {
            case EntityStats.Health:
                return 5f;
            case EntityStats.Damage:
                return 3f;
            case EntityStats.Defense: // LIMITED
                return 0.3f;
            case EntityStats.MoveSpeed:// LIMITED
                return 0.25f;
            case EntityStats.AttackSpeed:// LIMITED
                return 0.5f;
            case EntityStats.CriticalChance:// LIMITED
                return 0.2f;
            case EntityStats.CriticalDamage:
                return 2f;
            case EntityStats.Dodging:// LIMITED
                return 0.3f;
            case EntityStats.LifeSteal:// LIMITED
                return 0.3f;
            default:
                Debug.LogError($"THERE ARE NO {stats} IN THE ENTITY STATISTICS");
                return 0f;
        }
    }
    public void SetPowerPoints(int amount) //Set the points
    {
        maxAvailablePoints = amount;
        currentAvailablePoints = maxAvailablePoints;
        ChangeCurrentVisualPowerText(amount);
        UpdateVisualUI();
    }
    private async void SuccessfulUpgrade() //
    {
        foreach (KeyValuePair<string, float> item in updaterTextValue)
        {
            if (item.Value == 0) { continue; }

            Enum.TryParse(item.Key, out EntityStats parseEnum);


            float percentToAdd = item.Value; //Value

            Debug.Log($"{item.Key}|| Add Amount: {percentToAdd} to: {item.Key}");
            player.GetEntityStats.AddStatsPermanent(parseEnum, percentToAdd);
        }

        player.GetEntityStats.ResetCurrentStats();
        powerUpFeedback?.PlayFeedbacks();
        await SaveGameDataManager.Instance.SavePlayerStatsData();
    }

    

    private void ChangeCurrentVisualPowerText(int value)
    {
        currentAvailablePoints = value;
        pointsTxt.text = currentAvailablePoints.ToString(); //Update the text

        //TODO: If the current availble points is 0, enable the POWER UP button. If there are still points then disable the button.
    }

    private void OnMinusPressed(UpgradeStats upgradeStat, string statsName)
    {
        var index = upgradeStats.ToList().IndexOf(upgradeStat);
        Enum.TryParse(statsName, out EntityStats parseEnum);

        updaterTextValue[statsName] -= GetStatsUpgradePercent(parseEnum); //Deduct amount
        upgradeStats[index].SetStatsValue(updaterTextValue[statsName]);

        ChangeCurrentVisualPowerText(currentAvailablePoints += 1);


        foreach (var item in upgradeStats)
        {
            bool isMinusEnable = updaterTextValue[upgradeStats[index].GetStatsAssign] > 0;
            bool isAddEnable = currentAvailablePoints > 0;

            upgradeStats[index].EnableAddButton(isAddEnable);
            upgradeStats[index].EnableMinusButton(isMinusEnable);
        }
        foreach (var item in upgradeStats)
        {
            bool isAddEnable = currentAvailablePoints > 0;
            item.EnableAddButton(isAddEnable);

        }
    }
    private void OnAddPressed(UpgradeStats upgradeStat, string statsName)
    {
        var index = upgradeStats.ToList().IndexOf(upgradeStat);
        Enum.TryParse(statsName, out EntityStats parseEnum);

        updaterTextValue[statsName] += GetStatsUpgradePercent(parseEnum); //Add amount 
        upgradeStats[index].SetStatsValue(updaterTextValue[statsName]);



        ChangeCurrentVisualPowerText(currentAvailablePoints -= 1);

        foreach (var item in upgradeStats)
        {
            bool isMinusEnable = updaterTextValue[upgradeStats[index].GetStatsAssign] > 0;
            bool isAddEnable = currentAvailablePoints > 0;

            upgradeStats[index].EnableAddButton(isAddEnable);
            upgradeStats[index].EnableMinusButton(isMinusEnable);
        }
        foreach (var item in upgradeStats)
        {
            bool isAddEnable = currentAvailablePoints > 0;
            item.EnableAddButton(isAddEnable);
        }
    }

    private void InitializeUpgrade() //Initialize the page
    {
        foreach (var item in upgradeStats)
        {
            item.ResetData();
        }

        GetUpdaterValue(); //Reset the updater value
        generatedStatsUpgrade = GetRandomStatsToUpgrade();

        for (int i = 0; i < upgradeStats.Length; i++)
        {
            if(generatedStatsUpgrade[i] == null) 
            { 
                upgradeStats[i].gameObject.SetActive(false);  //If the index in select list is null then disable the stats panel
            }

            if(Enum.TryParse(generatedStatsUpgrade[i], out EntityStats parseStats)) //Try parse the string to enum
            {
                upgradeStats[i].SetData(generatedStatsUpgrade[i], GetCurrentMaxStats(parseStats)); //Set the data
                upgradeStats[i].SetStatsValue(updaterTextValue[generatedStatsUpgrade[i]]);
            }
            else
            {
                Debug.LogWarning($"PARSING {generatedStatsUpgrade[i]} IS NOT WORKING");
            }


        }


    }
    private void UpdateVisualUI()
    {
        bool enableMinus = currentAvailablePoints < maxAvailablePoints; 
        bool enableAdd = currentAvailablePoints > 0;

        foreach (var item in upgradeStats)
        {
            item.EnableMinusButton(enableMinus);
            item.EnableAddButton(enableAdd);
        }
    }

    private void GetUpdaterValue()
    {
        updaterTextValue = new Dictionary<string, float>();
        foreach (EntityStats stat in Enum.GetValues(typeof(EntityStats)))
        {
            updaterTextValue.Add(stat.ToString(), 0);
        }
    }
    private async UniTask SetMaxAmountToUpgrade() //Set a max stats
    {
        float maxStatsBoundValue = 0;

        foreach (EntityStats stat in Enum.GetValues(typeof(EntityStats)))
        {
            switch (stat)
            {
                case EntityStats.Health: //Infinite can upgrate
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat); //Get the remaining value
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    Debug.Log($"Health: {GetCurrentMaxStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.Damage: //Infinite can upgrate
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    Debug.Log($"Damage: {GetCurrentMaxStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.Defense:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    Debug.Log($"Defense: {GetCurrentMaxStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.MoveSpeed:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    Debug.Log($"MoveSpeed: {GetCurrentMaxStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.AttackSpeed:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    //Debug.Log($"AttackSpeed: {GetCurrentStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.CriticalChance:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    //Debug.Log($"CriticalChance: {GetCurrentStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.CriticalDamage: //Infinite can upgrate
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    //Debug.Log($"CriticalDamage: {GetCurrentStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.Dodging:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    //Debug.Log($"Dodging: {GetCurrentStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                case EntityStats.LifeSteal:
                    maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
                    maxStatsCanUpgrade.Add(stat.ToString(), maxStatsBoundValue);
                    //Debug.Log($"{stat}: {GetCurrentStats(stat)} || Max Value: {maxStatsBoundValue}");

                    break;
                default:
                    Debug.LogWarning("No " + stat + " register");
                    break;
            }
        }

        await UniTask.Yield();
    }
    //private void SetMaxAmountToUpgrade()
    //{
    //    float maxStatsBoundValue = 0;
    //    float maxPercent = 0;
    //    float desiredMaxStats = 0;

    //    foreach (EntityStats stat in Enum.GetValues(typeof(EntityStats)))
    //    {
    //        switch (stat)
    //        {
    //            case EntityStats.Health: //Infinite can upgrate
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat); //Get the remaining value
    //                maxPercent = float.PositiveInfinity; //Infinite
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                Debug.Log($"Health: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.Damage: //Infinite can upgrate
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = float.PositiveInfinity; //Infinite
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                Debug.Log($"Damage: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.Defense:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                Debug.Log($"Defense: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.MoveSpeed:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                Debug.Log($"MoveSpeed: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.AttackSpeed:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                //Debug.Log($"AttackSpeed: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.CriticalChance:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = ThesisUtility.ComputeAddedValueWithPercentage(maxStatsBoundValue, maxPercent);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                //Debug.Log($"CriticalChance: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.CriticalDamage: //Infinite can upgrate
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = float.PositiveInfinity; //Infinite
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                //Debug.Log($"CriticalDamage: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.Dodging:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                //Debug.Log($"Dodging: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            case EntityStats.LifeSteal:
    //                maxStatsBoundValue = player.GetEntityStats.GetMaxBoundStats(stat);
    //                maxPercent = 20;
    //                desiredMaxStats = GetCurrentStats(stat) + ((maxPercent / 100) * maxStatsBoundValue);
    //                maxStatsCanUpgrade.Add(stat.ToString(), desiredMaxStats);
    //                //Debug.Log($"{stat}: {GetCurrentStats(stat)} || Percent: {maxPercent} || Desired: {desiredMaxStats} || Max Value: {maxStatsBoundValue}");

    //                break;
    //            default:
    //                Debug.LogWarning("No " + stat + " register");
    //                break;
    //        }
    //    }
    //}
    private void UpdateCurrentAmountStats()
    {
        foreach (EntityStats stat in Enum.GetValues(typeof(EntityStats)))
        {
            //Debug.Log($"{stat}|| Current: {GetCurrentStats(stat)} max bound: {maxStatsCanUpgrade[stat.ToString()]}");
            currentStatsCanUpgrade.Add(stat.ToString(), GetCurrentMaxStats(stat));
        }
    }


    
    private float GetCurrentMaxStats(EntityStats stats) //Get the maximum amount of stats
    {
        float statsCurrentValue = 0;
        switch (stats)
        {
            case EntityStats.Health:
                statsCurrentValue = player.GetEntityStats.maxHealth;
                break;
            case EntityStats.Damage:
                statsCurrentValue = player.GetEntityStats.maxDamage;
                break;
            case EntityStats.Defense:
                statsCurrentValue = player.GetEntityStats.maxDefense;
                break;
            case EntityStats.MoveSpeed:
                statsCurrentValue = player.GetEntityStats.maxMoveSpeed;
                break;
            case EntityStats.AttackSpeed:
                statsCurrentValue = player.GetEntityStats.maxAttackSpeed;
                break;
            case EntityStats.CriticalChance:
                statsCurrentValue = player.GetEntityStats.maxCriticalChance;
                break;
            case EntityStats.CriticalDamage:
                statsCurrentValue = player.GetEntityStats.maxCriticalDamage;
                break;
            case EntityStats.Dodging:
                statsCurrentValue = player.GetEntityStats.maxDodgeChance;
                break;
            case EntityStats.LifeSteal:
                statsCurrentValue = player.GetEntityStats.lifeSteal;
                break;
            default:
                break;
        }

        return statsCurrentValue;
    }
    



    private string[] GetRandomStatsToUpgrade() //Get array of stats to upgrade
    {
        List<string> selectedChoice = new List<string>();

        string[] enumValue = Enum.GetNames(typeof(EntityStats));
        int iterations = 0;

        while (selectedChoice.Count < 3 && iterations < enumValue.Length)
        {
            var select = enumValue.RandomGetObject();

            if (!selectedChoice.Contains(select))
            {
                float maxStatValue = maxStatsCanUpgrade[select];
                float currentStatValue = currentStatsCanUpgrade[select];

                // Check if the stats upgrade is still upgradable
                if (currentStatValue < maxStatValue)
                {
                    selectedChoice.Add(select);
                }
            }
            iterations++;
        }

        return ThesisUtility.Shuffle(selectedChoice.ToArray()); //Shuffle the list
    }



















    
















}
