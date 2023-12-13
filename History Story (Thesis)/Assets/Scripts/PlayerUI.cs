using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerUI : UIPages
{
    private Entities entity;

    [SerializeField] private Slider healthBar;
    

    private void Start()
    {
        entity = GameManager.instance.GetPlayer();

        entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;
        //entity.OnHealthChanged += ChangeHealth;
    }

    public void ChangeHealth(float currentHealth, float maxHealth)
    {
        float value = currentHealth / maxHealth;

        healthBar.value = value;
    }

    public override void ShowBehavior()
    {
    }

    public override void HideBehavior()
    {
    }
}
