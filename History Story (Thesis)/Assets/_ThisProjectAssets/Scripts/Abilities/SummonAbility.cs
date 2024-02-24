using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using Cysharp.Threading.Tasks;
using UnityEngine.Rendering.Universal;
using System;

[CreateAssetMenu(fileName = "New Summon Ability", menuName = "Abilities/Summon")]
public class SummonAbility : AbilityScript
{
    [Header("Entity Host")]
    public bool canMoveWhileSummon;
    public bool canAttackWhileSummon;

    [Space(10)]
    [Header("Summon Ability")]
    public Light2D lightPrefab;
    public AIEntity summonPrefab;
    public float randomRangePosition = 0.5f;
    public int spawnCount = 1;
    public float delay;

    [Space(10)]
    [Header("Summoned Entity")]
    public bool createLight = false;
    public bool followHost = false;
    public float lifeTimer = 0;
    //public string SetTag;
    //public string SetLayerMask;

    [Space(10)]
    [Header("Summoned Stats")]
    public float overrideScanRadius;
    public float overrideHealth;
    public float overrideDamage;
    public float overrideMoveSpeed;
    public float overrideAttackSpeed;

    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
        Debug.Log(entity.name + " CASTING SUMMONING");

        if (!canMoveWhileSummon)
            entity.StopMovement(true);
        if (!canAttackWhileSummon)
            entity.GetAttackHandler.IsCanAttack = false;

        await UniTask.Delay(TimeSpan.FromSeconds(delay));
    }
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);
        Debug.Log("casting");

        for (int i = 0; i < spawnCount; i++)
        {
            var generatedPosition = await GenerateRandomPosition(entity, randomRangePosition);
            var spawner = SummonObject(entity, generatedPosition);

            if(spawner != null)
            {
                if (createLight)
                {
                    var light = spawner.GetComponentInChildren<Light2D>(true);

                    if (light == null)
                    {
                        light = Instantiate(lightPrefab).GetComponent<Light2D>();
                        light.transform.position = spawner.transform.position;
                        light.transform.SetParent(spawner.transform);
                    }

                    light.color = entity.GetAttackHandler.GetColorType;
                    light.gameObject.SetActive(true);
                }
                else
                {
                    var light = spawner.GetComponentInChildren<Light2D>(true);

                    if (light != null)
                    {
                        light.gameObject.SetActive(false);
                    }
                }
            }
        }

    }
    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);
        Debug.Log("Finish casting");

        entity.StopMovement(false);
        entity.GetAttackHandler.IsCanAttack = true;
    }

    private void RemoveComponents(AIEntity summoned)
    {
        var hasBoss = summoned.GetComponent<EnemyBoss>();
        var hasDropLoot = summoned.GetComponent<DropLoot>();
        if (hasDropLoot)
        {
            summoned.GetDropLoot = null;
            hasDropLoot.enabled = false;
        }
        if (hasBoss)
        {
            hasBoss.enabled = false;
        }
    }
    private GameObject SummonObject(Entities entity, Vector2 spawnPosition)
    {
        if(summonPrefab == null) { return null; }
        var position = spawnPosition == null ? Vector2.zero : spawnPosition;
        //To summon object
        var spawningPosition = (Vector2)entity.transform.position + position;

        var spawner = ObjectPooling.Instance.GetObjectInPool("ability_spawner", summonPrefab.gameObject, spawningPosition);
        AIEntity _spawner = spawner.GetComponent<AIEntity>();

        RemoveComponents(_spawner);


        if (entity.CompareTag("Player"))
        {
            //From player
            _spawner.gameObject.layer = LayerMask.NameToLayer("Ally");
            _spawner.gameObject.tag = "Ally";
        }
        else
        {
            //From enemy
            _spawner.gameObject.layer = LayerMask.NameToLayer("Enemy");
            _spawner.gameObject.tag = "Enemy";
        }



        _spawner.GetAttackHandler.GetScannerEntities.GetTargetLayerMask = entity.GetAttackHandler.GetScannerEntities.GetTargetLayerMask;
        spawner.SetActive(true);


        var hasDropLoot = _spawner.GetComponent<DropLoot>();
        if (hasDropLoot)
        {
            _spawner.GetDropLoot = null;
        }

        if (followHost)
            _spawner.GetAttackHandler.GetScannerEntities.GetFollowTargetLayerMask = 1 << entity.gameObject.layer;
        if (lifeTimer > 0) //Set timer
        {
            _spawner.SetLifeTimer(lifeTimer);
            _ = _spawner.GetEntityStats.TempModifiedHealth(9999, 99);
        }

        if (overrideScanRadius > 0)
            _spawner.GetAttackHandler.GetScannerEntities.GetScanRadius = overrideScanRadius;

        if (overrideHealth > 0)
        {
            var overhealthBar = _spawner.GetComponentInChildren<OverheadHealthbar>();

            _ = _spawner.GetEntityStats.TempModifiedHealth(overrideHealth, 99);

            overhealthBar?.UpdateHealthBar();
        }
        if (overrideDamage > 0)
            _ = _spawner.GetEntityStats.TempModifiedDamage(overrideDamage, 99);
        if (overrideMoveSpeed > 0)
            _ = _spawner.GetEntityStats.TempModifiedMoveSpeed(overrideMoveSpeed, 99);
        if (overrideAttackSpeed > 0)
            _ = _spawner.GetEntityStats.TempModifiedAttackSpeed(overrideAttackSpeed, 99);


        return spawner;
    }

    public async UniTask<Vector2> GenerateRandomPosition(Entities entity, float randomDistance)
    {
        var cancellation = entity.GetEntityCancellationToken;
        var avoidLayer = entity.GetAttackHandler.GetScannerEntities.GetAvoidLayerMask;

        Vector2 generatedPosition;
        Collider2D invalidPosition;
        do
        {
            // Generate a random position within the boundaries of the game area
            var randomPos = ThesisUtility.RandomGetFloat(-randomDistance, randomDistance);

            generatedPosition = new Vector2(randomPos, randomPos);

            // Check if the random position collides with any collider in the avoid layer
            invalidPosition = Physics2D.OverlapCircle(generatedPosition, 0.05f, avoidLayer);

            await UniTask.Yield();
        } while (invalidPosition != null && !cancellation.IsCancellationRequested);

        return generatedPosition;
    }

}
