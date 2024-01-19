using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;

public class PlayerUI : UIPages
{
    private Entities entity;

    [SerializeField] private MMProgressBar healthBarUI;
    

    private void Start()
    {
        entity = GameManager.Instance.PlayerEntity;

        healthBarUI.SetBar(entity.GetEntityStats.currentHealth, 0, entity.GetEntityStats.maxHealth);

        entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;
        //entity.OnHealthChanged += ChangeHealth;
    }

    public void ChangeHealth(float currentHealth, float maxHealth)
    {
        healthBarUI.UpdateBar(currentHealth, 0, maxHealth);
    }

    public override void ShowBehavior()
    {
    }

    public override void HideBehavior()
    {
    }
}
