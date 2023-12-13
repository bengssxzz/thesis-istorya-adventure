using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomSpawnerEnemy : MonoBehaviour
{
    [System.Serializable]
    public class WaveSystem
    {
        public int maxEnemySpawn = 5;
        public GameObject[] enemyArray;
    }

    private PolygonCollider2D roomAreaCollider;

    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private int maxEnemySpawnInRoom = 5;

    private List<Collider2D> collidersList = new List<Collider2D>();
    private int currentWave = 0;
    private int enemySpawnCount = 0;
    private bool isDoneBattleRoom = false;



    private void Awake()
    {
        roomAreaCollider = GetComponent<PolygonCollider2D>();
    }

    private void Start()
    {
        StartCoroutine(ExecuteWaveBattle());
    }

    private void Update()
    {
        if(isDoneBattleRoom == true) { return; }

        ScanAllEnemy();
    }


    
    private WaveSystem GetInfoCurrentWave() //Get the info of the current wave
    {
        return waveInfoList[currentWave];
    }

    private GameObject RandomEnemySpawn() //Randomize enemy according to wave round
    {
        //Get the value of the array in current wave
        var waveInfo = GetInfoCurrentWave();

        var enemyIndex = Random.Range(0, waveInfo.enemyArray.Length - 1);
        var chosenEnemy = ObjectPooling.instance.GetObjectInPool("enemy", waveInfo.enemyArray[enemyIndex]);
        return chosenEnemy;
    }
    private Vector2 RandomSpawnLocation() //Generate random valid position
    {
        if (roomAreaCollider == null || GetInfoCurrentWave().enemyArray.Length <= 0)
        {
            Debug.LogWarning("Please assign the PolygonCollider2D and Enemy Prefab in the inspector.");
            return Vector2.zero;
        }

        Vector2 generatedPos;
        Collider2D restrictedPos;

        Bounds colliderBounds = roomAreaCollider.bounds;
        

        do
        {
            // Generate a random point inside a unit circle
            Vector2 randomPoint = Random.insideUnitCircle;

            // Transform the point to local coordinates within the collider bounds
            generatedPos = new Vector2(
                Mathf.Lerp(colliderBounds.min.x, colliderBounds.max.x, (randomPoint.x + 1) * 0.5f),
                Mathf.Lerp(colliderBounds.min.y, colliderBounds.max.y, (randomPoint.y + 1) * 0.5f)
            );

            restrictedPos = Physics2D.OverlapCircle(generatedPos, 0.02f, cannotSpawn);
            //If restrictedPos collide with the layermask, repeat loop
        } while (restrictedPos);


        return generatedPos;
    }

    private void ScanAllEnemy() //Scanning the enemy
    {
        if (roomAreaCollider != null)
        {
            // Set up a ContactFilter2D to filter colliders by tag
            ContactFilter2D contactFilter = new ContactFilter2D();
            contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Replace "Enemy" with your actual layer or tag

            // Get all enemy colliders inside the PolygonCollider2D
            collidersList = new List<Collider2D>();
            roomAreaCollider.OverlapCollider(contactFilter, collidersList);
        }
        else
        {
            Debug.LogError("PolygonCollider2D is not existed.");
        }
    }

    IEnumerator EnemyWaveSpawner() //Control the spawning enemy in each wave
    {
        int maxNumberEnemy = GetInfoCurrentWave().maxEnemySpawn;
        int remainingSpawn = maxNumberEnemy - enemySpawnCount;

        if(remainingSpawn > 0)
        {
            //If still have remaining enemy to be spawn
            int toSpawn = remainingSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : remainingSpawn;

            for (int i = 0; i < toSpawn; i++)
            {
                var selectedRandomEnemy = RandomEnemySpawn();
                selectedRandomEnemy.transform.position = RandomSpawnLocation();
                enemySpawnCount++;
                yield return new WaitForSeconds(Random.Range(0.2f, 1.5f));
            }
        }
        else
        {
            //Wave is done
            Debug.Log("Enemy spawned reached maximum amount in this wave");
        }
    }
    IEnumerator ExecuteWaveBattle() //Control the wave
    {
        do
        {
            yield return new WaitForSeconds(0.2f);

            if (collidersList.Count == 0 && enemySpawnCount >= GetInfoCurrentWave().maxEnemySpawn)
            {
                //Next Wave
                Debug.Log("Next wave");
                yield return new WaitForSeconds(0.5f);
                enemySpawnCount = 0;
                currentWave++;

            } else if (collidersList.Count <= 3)
            {
                yield return StartCoroutine(EnemyWaveSpawner()); //Wait to finish the wave
                yield return new WaitForSeconds(0.5f);
            }
            
            
            
        } while (currentWave <= waveInfoList.Length - 1);

        //Done fighting
        Debug.Log("THIS ROOM IS FINISH");
        isDoneBattleRoom = true;
    }


















}
