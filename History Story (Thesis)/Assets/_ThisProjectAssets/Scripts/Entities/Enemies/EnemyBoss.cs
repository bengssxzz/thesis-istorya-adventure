using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Cysharp.Threading.Tasks;
using UnityEngine.Events;
using ThesisLibrary;


#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIEntity))]
public class EnemyBoss : MonoBehaviour
{
    [Serializable]
    public class HealthStateEvents
    {
        [Range(0, 100)] public int healthPercent;
        public UnityEvent TriggerEvent;

        private bool doneTrigger;

        public bool IsDoneTrigger { get { return doneTrigger; } set { doneTrigger = value; } }
    }



    private Entities entity;
    private BattleSystemUI battleUI;
    private EntityStatistics entityStats;

    [SerializeField] private string bossName;

    [SerializeField] private List<string> killedTitle = new List<string>();

    [Space(10)]
    [SerializeField] private List<HealthStateEvents> HealthEvents = new List<HealthStateEvents>();




    private void Awake()
    {
        entity = GetComponent<Entities>();
    }

    private async void OnEnable()
    {
        await UniTask.Delay(10);

        battleUI = BattleSystemUI.Instance;

        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Boss);

        //battleUI = UI_Manager.Instance.FindComponentInUIMenu<BattleSystemUI>("Battle UI");
        entityStats = entity.GetEntityStats;

        battleUI.ToggleBossInfo(true);
        battleUI.UpdateBossName(bossName);
        battleUI.SetBossHealthBar(entityStats.currentHealth, entityStats.maxHealth);

        entity.GetEntityStats.OnCurrentHealthChange += OnCurrentHealthChange;
    }
    private void OnDisable()
    {
        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Default);

        entity.GetEntityStats.OnCurrentHealthChange -= OnCurrentHealthChange;
        battleUI?.ToggleBossInfo(false);


    }

    private void OnCurrentHealthChange(float currentHealth, float maxHealth)
    {
        battleUI.UpdateBossHealth(currentHealth, maxHealth);


        var currentHealthPercentage = (currentHealth / maxHealth) * 100;
        CheckTriggerEvents(currentHealthPercentage);

        //Died
        if(currentHealthPercentage <= 0)
        {
            string selectedTitle = ThesisUtility.RandomGetObject(killedTitle.ToArray());

            GameManager.Instance.CollectedTitle(selectedTitle);
            battleUI?.PlayTitleShow(selectedTitle);
        }
    }


    private void CheckTriggerEvents(float currentHealthPercentage)
    {
        foreach (HealthStateEvents state in HealthEvents)
        {
            if(currentHealthPercentage <= state.healthPercent && !state.IsDoneTrigger)
            {
                //Trigger events
                state.TriggerEvent.Invoke();
                state.IsDoneTrigger = true; // Mark as triggered
            }
        }
    }
}
