using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StatsUIButton : MonoBehaviour
{
    private Button button;
    [SerializeField] private GameObject statsView, skillView;

    private bool showSkillView = true;

    private void Awake()
    {
        button = GetComponent<Button>();
        button.onClick.AddListener(ToggleViews);
        }

    private void ToggleViews()
    {
        showSkillView = !showSkillView;

        if (showSkillView) 
        { 
            skillView.SetActive(true);
            statsView.SetActive(false);
        }
        else
        {
            skillView.SetActive(false);
            statsView.SetActive(true);
        }
    }
}
