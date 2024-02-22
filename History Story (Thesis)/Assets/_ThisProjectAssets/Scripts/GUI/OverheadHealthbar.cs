using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using System;

public class OverheadHealthbar : MonoBehaviour
{

    [SerializeField] private Entities targetEntity;
    [SerializeField] private RectTransform healthbarTransform;

    private Canvas canvas;
    private MMProgressBar healthbar;




    private void Awake()
    {
        canvas = GetComponent<Canvas>();
        healthbar = GetComponentInChildren<MMProgressBar>();
    }


    private void OnEnable()
    {
        if(targetEntity == null || healthbar == null) {
            healthbarTransform.gameObject.SetActive(false);
            return; }

        var entityStats = targetEntity.GetEntityStats;

        healthbar.SetBar(targetEntity.GetEntityStats.currentHealth, 0, targetEntity.GetEntityStats.maxHealth);

        targetEntity.GetEntityStats.OnCurrentHealthChange += CurrentHealthChange;

        if (entityStats.currentHealth == entityStats.maxHealth)
        {
            healthbarTransform.gameObject.SetActive(false);
        }
    }


    private void OnDisable()
    {
        targetEntity.GetEntityStats.OnCurrentHealthChange -= CurrentHealthChange;
    }

    private void Start()
    {
        canvas.worldCamera = Camera.main;
    }




    private void CurrentHealthChange(float currentHealth, float maxHealth)
    {
        healthbar.UpdateBar(currentHealth, 0, maxHealth);

        if (currentHealth != maxHealth)
        {
            healthbarTransform.gameObject.SetActive(true);
        }
    }



























}
