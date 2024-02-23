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



    private async void OnEnable()
    {
        await UniTask.Delay(20);

        entity = PlayerSingleton.Instance.GetPlayerScript;
        if(entity == null) {
            Debug.LogError($"{gameObject.name} CANT FIND THE PLAYER IN THE SCENE");
            return; 
        }

        var currentHealth = entity.GetEntityStats.currentHealth;
        var maxHealth = entity.GetEntityStats.maxHealth;

        healthBarUI?.SetBar(currentHealth, 0, maxHealth);

        GameManager.Instance.OnChangeChapterPoints += OnChangePoints;
        entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;

    }
    private void OnDisable()
    {
        GameManager.Instance.OnChangeChapterPoints -= OnChangePoints;
        entity.GetEntityStats.OnCurrentHealthChange -= ChangeHealth;
    }


    private void Start()
    {
        //entity.OnHealthChanged += ChangeHealth;
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
