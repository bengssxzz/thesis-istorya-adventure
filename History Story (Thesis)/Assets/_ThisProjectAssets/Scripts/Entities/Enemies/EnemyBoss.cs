using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

[RequireComponent(typeof(AIEntity))]
public class EnemyBoss : MonoBehaviour
{
    private Entities entity;
    private BattleSystemUI battleUI;
    private EntityStatistics entityStats;

    [SerializeField] private string bossName;

    /* When the player is in range of this boss, the boss health
     * and name will appear in the middle of the screen
     */
    //[SerializeField] private float bossRange;




    private void Awake()
    {
        entity = GetComponent<Entities>();
    }

    private void OnEnable()
    {
        SceneMusicController.Instance?.ChangeMusic(SceneMusicController.MusicState.Boss);

        battleUI = UI_Manager.Instance.FindComponentInUIMenu<BattleSystemUI>("Battle UI");
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
        battleUI.ToggleBossInfo(false);
    }

    private void OnCurrentHealthChange(float currentHealth, float maxHealth)
    {
        battleUI.UpdateBossHealth(currentHealth, maxHealth);
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
