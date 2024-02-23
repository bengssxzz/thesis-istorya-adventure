using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;
using Cysharp.Threading.Tasks;

public class PlayerUI : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private MMProgressBar healthBarUI;
    [SerializeField] private TextMeshProUGUI pointsTxt;

    private bool alreadyFound = false;


    private void OnEnable()
    {
        entity = PlayerSingleton.Instance.GetPlayerScript;


        if(entity.GetEntityStats != null && !alreadyFound)
        {
            alreadyFound = true;
            var currentHealth = entity.GetEntityStats.currentHealth;
            var maxHealth = entity.GetEntityStats.maxHealth;

            healthBarUI?.SetBar(currentHealth, 0, maxHealth);

            GameManager.Instance.OnChangeChapterPoints += OnChangePoints;
            entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;
            entity.GetEntityStats.OnCurrentStatsChange += PlayerUpgradedStats;
        }
    }
    private void OnDisable()
    {
        alreadyFound = false;

        GameManager.Instance.OnChangeChapterPoints -= OnChangePoints;
        entity.GetEntityStats.OnCurrentHealthChange -= ChangeHealth;
        entity.GetEntityStats.OnCurrentStatsChange -= PlayerUpgradedStats;
    }

    private void Start()
    {
        entity = PlayerSingleton.Instance.GetPlayerScript;


        if (entity.GetEntityStats != null && !alreadyFound)
        {
            alreadyFound = true;
            var currentHealth = entity.GetEntityStats.currentHealth;
            var maxHealth = entity.GetEntityStats.maxHealth;

            healthBarUI?.SetBar(currentHealth, 0, maxHealth);

            GameManager.Instance.OnChangeChapterPoints += OnChangePoints;
            entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;
        }
    }

    private void PlayerUpgradedStats()
    {
        var currentHealth = entity.GetEntityStats.currentHealth;
        var maxHealth = entity.GetEntityStats.maxHealth;

        healthBarUI?.SetBar(currentHealth, 0, maxHealth);
        ChangeHealth(currentHealth, maxHealth);
    }


    private void ChangeHealth(float currentHealth, float maxHealth)
    {
        healthBarUI.TextValueMultiplier = maxHealth;
        healthBarUI.UpdateBar(currentHealth, 0, maxHealth);
    }

    private void OnChangePoints(int points)
    {
        pointsTxt.text = points.ToString("D11");
    }




}
