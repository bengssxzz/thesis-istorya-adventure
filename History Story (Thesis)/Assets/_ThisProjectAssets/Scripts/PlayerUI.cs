using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using MoreMountains.Tools;

public class PlayerUI : MonoBehaviour
{
    private Entities entity;

    [SerializeField] private MMProgressBar healthBarUI;
    

    private void Start()
    {
        entity = PlayerSingleton.Instance.GetPlayerScript;

        healthBarUI.SetBar(entity.GetEntityStats.currentHealth, 0, entity.GetEntityStats.maxHealth);

        entity.GetEntityStats.OnCurrentHealthChange += ChangeHealth;
        //entity.OnHealthChanged += ChangeHealth;
    }

    public void ChangeHealth(float currentHealth, float maxHealth)
    {
        healthBarUI.UpdateBar(currentHealth, 0, maxHealth);
    }
}
