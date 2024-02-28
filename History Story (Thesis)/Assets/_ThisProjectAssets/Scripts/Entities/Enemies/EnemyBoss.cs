using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Cysharp.Threading.Tasks;
using UnityEngine.Events;
#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIEntity))]
public class EnemyBoss : MonoBehaviour
{
    [Serializable]
    public class HealthStateEvents
    {
        public int healthPercent;
        public UnityEvent TriggerEvent;

        private bool doneTrigger;

        public bool IsDoneTrigger { get { return doneTrigger; } set { doneTrigger = value; } }
    }



    private Entities entity;
    private BattleSystemUI battleUI;
    private EntityStatistics entityStats;

    [SerializeField] private string bossName;

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



//    private IEnumerator FindPlayer()
//    {
//        // Perform overlap circle check
//        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, bossRange, LayerMask.GetMask("Player"));

//        // Loop through all colliders found
//        if(colliders.Length > 0)
//        {
//            //Player is in range
//            battleUI.ToggleBossInfo(true);
//        }

//        yield return null; // Yield to end the coroutine
//    }
















//    private void OnDrawGizmosSelected()
//    {
//#if UNITY_EDITOR
//        Handles.color = Color.red;
//        Handles.DrawWireDisc(transform.position, transform.forward, bossRange);
//#endif
//    }



}
