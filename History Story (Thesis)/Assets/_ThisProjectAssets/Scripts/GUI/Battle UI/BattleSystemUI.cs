using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;
using TMPro;
using UnityEngine.Events;
using System;

public class BattleSystemUI : MonoBehaviour
{
    [SerializeField] private RectTransform bossInfoPage;
    [SerializeField] private TextMeshProUGUI bossNameTxt;
    [SerializeField] private MMProgressBar bossHealthbar;

    [SerializeField] private RectTransform battleInfoPage;
    [SerializeField] private TextMeshProUGUI enemyRemainTxt;
    [SerializeField] private TextMeshProUGUI waveInfoTxt;



    private void Awake()
    {
        ToggleBossInfo(false);
        ToggleWaveInfo(false);
    }
    private void Start()
    {
        enemyRemainTxt.text = "";
        waveInfoTxt.text = "";
    }



    public void ToggleBossInfo(bool toggle)
    {
        bossInfoPage.gameObject.SetActive(toggle);
    }
    public void ToggleWaveInfo(bool toggle)
    {
        battleInfoPage.gameObject.SetActive(toggle);
    }

    //For boss
    public void UpdateBossName(string bossName)
    {
        bossNameTxt.text = bossName;
    }
    public void SetBossHealthBar(float currentHealth, float maxHealth)
    {
        bossHealthbar.SetBar(currentHealth, 0, maxHealth);
    }
    public void UpdateBossHealth(float currentHealth, float maxHealth)
    {
        bossHealthbar.UpdateBar(currentHealth, 0, maxHealth);
    }

    //For Wave
    public void UpdateEnemyRemain(int enemies)
    {
        enemyRemainTxt.text = string.Format("Enemy to spawn: {0}", enemies);
    }
    public void UpdateWaveInfo(int currentWave, int maxWave)
    {
        waveInfoTxt.text = string.Format("Waves: {0}/{1}", currentWave, maxWave);
    }






























}
