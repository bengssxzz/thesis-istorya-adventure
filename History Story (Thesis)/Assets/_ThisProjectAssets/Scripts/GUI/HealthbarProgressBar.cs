using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;

public class HealthbarProgressBar : MonoBehaviour
{
    private Entities entity;
    private MMProgressBar healthbar;


    private void Awake()
    {
        entity = GetComponentInParent<Entities>();
        healthbar = GetComponent<MMProgressBar>();
    }

    private void OnEnable()
    {
        entity.GetEntityStats.OnCurrentHealthChange += OnChangeHealth;
    }
    private void OnDisable()
    {
        entity.GetEntityStats.OnCurrentHealthChange -= OnChangeHealth;

    }

    private void Start()
    {
        entity.GetEntityStats.OnCurrentHealthChange += OnChangeHealth;

        healthbar.SetBar(entity.GetEntityStats.currentHealth, 0, entity.GetEntityStats.maxHealth);
    }

    private void OnChangeHealth(float current, float max)
    {
        healthbar.UpdateBar(current, 0, max);
    }

}
