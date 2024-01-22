using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using UnityEngine.Events;

public class RoomSpawnerEnemy : MonoBehaviour
{
    [System.Serializable]
    public class WaveSystem
    {
        public int maxEnemySpawnInWave = 5;
        public GameObject[] enemyArray;
    }

    private PolygonCollider2D roomAreaCollider;
    private RoomArea roomArea;

    [SerializeField] private bool chanceToBattle = false;

    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private WaveSystem[] waveInfoList;
    [SerializeField] private int maxEnemySpawnInRoom = 5;

    [Space(25)]
    public UnityEvent OnStartedBattleTrigger;
    public UnityEvent OnFinishedBattleTrigger;

    private List<Collider2D> collidersList = new List<Collider2D>();
    private int currentWave = 0;
    private int enemySpawnCount = 0;

    private bool playerAlreadyTriggerBattle = false;
    private bool isRunningBattle = false;
    private bool isDoneBattleRoom = false;



    private void Awake()
    {
        roomArea = GetComponentInParent<RoomArea>();
        roomAreaCollider = GetComponentInParent<RoomArea>().GetComponent<PolygonCollider2D>();
    }

    private void OnEnable()
    {
        roomArea.OnPlayerEnterExitRoom += PlayerEnterExitRoom;
    }

    
    private void OnDisable()
    {
        roomArea.OnPlayerEnterExitRoom -= PlayerEnterExitRoom;
    }

    private void Update()
    {
        //ScanAllEnemy();
    }

    private void PlayerEnterExitRoom(bool playerEnterExit)
    {
        if (playerEnterExit)
        {
            //If the player is inside the room collider
        }
        else
        {
            //If the player exit the room collider
        }
    }


    private WaveSystem GetInfoCurrentWave() //Get the info of the current wave
    {
        return waveInfoList[currentWave];
    }

    private Vector2 RandomSpawnLocation() //Generate random valid position
    {
        if (roomAreaCollider == null || GetInfoCurrentWave().enemyArray.Length <= 0)
        {
            Debug.LogError("Please assign the PolygonCollider2D and Enemy Prefab in the inspector.");
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
        if (!isRunningBattle) { return; }

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
    IEnumerator ScanEnemies()
    {
        if (roomAreaCollider != null)
        {
            // Set up a ContactFilter2D to filter colliders by tag
            ContactFilter2D contactFilter = new ContactFilter2D();
            contactFilter.SetLayerMask(LayerMask.GetMask("Enemy")); // Replace "Enemy" with your actual layer or tag

            do
            {
                // Get all enemy colliders inside the PolygonCollider2D
                collidersList = new List<Collider2D>();
                roomAreaCollider.OverlapCollider(contactFilter, collidersList);

                Debug.Log("Still scanning enemies: " + collidersList.Count);
                yield return new WaitForSeconds(0.2f);

                //If there are no more enemy to be scan then while loop done
            } while (collidersList.Count > 0 || isRunningBattle);

            //TODO: Disable magical barrier
            OnFinishedBattleTrigger?.Invoke();
        }
        else
        {
            Debug.LogError("PolygonCollider2D is not existed.");
        }
    }
    IEnumerator EnemyWaveSpawner() //Control the spawning enemy in each wave
    {
        int maxNumberEnemy = GetInfoCurrentWave().maxEnemySpawnInWave;
        int remainingSpawn = maxNumberEnemy - enemySpawnCount;

        if (remainingSpawn > 0)
        {
            //If still have remaining enemy to be spawn
            int toSpawn = remainingSpawn > maxEnemySpawnInRoom ? maxEnemySpawnInRoom : remainingSpawn;

            for (int i = 0; i < toSpawn; i++)
            {

                var selectedRandomEnemy = ObjectPooling.Instance.GetObjectInPool("enemy", GetInfoCurrentWave().enemyArray.RandomGetObject()); //Get Enemy
                selectedRandomEnemy.transform.position = RandomSpawnLocation(); //Set the position
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

            if (collidersList.Count == 0 && enemySpawnCount >= GetInfoCurrentWave().maxEnemySpawnInWave)
            {
                //Next Wave
                Debug.Log("Next wave");
                yield return new WaitForSeconds(0.5f);
                enemySpawnCount = 0;
                currentWave++;

            }
            else if (collidersList.Count <= 3)
            {
                yield return StartCoroutine(EnemyWaveSpawner()); //Wait to finish the wave
                yield return new WaitForSeconds(0.5f);
            }



        } while (currentWave <= waveInfoList.Length - 1);

        //Done fighting
        Debug.Log("THIS ROOM IS FINISH");
        isDoneBattleRoom = true;
        isRunningBattle = false;
    }

    private void StartBattle() //Start the battle
    {
        StartCoroutine(ExecuteWaveBattle());
        isRunningBattle = true;

        //TODO: Enable magical barrier
        OnStartedBattleTrigger?.Invoke();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player") && !playerAlreadyTriggerBattle)
        {
            playerAlreadyTriggerBattle = true;

            if (!isRunningBattle)
            {
                //Trigger battle event
                StartCoroutine(ScanEnemies());
                if (!isDoneBattleRoom)
                {
                    StartBattle();
                }
                else
                {
                    //If chance to battle is done, then calculate a chance to trigger battle again
                    if (chanceToBattle && ThesisUtility.RandomGetChanceBool())
                    {
                        //Reset the variables
                        currentWave = 0;
                        enemySpawnCount = 0;

                        //Trigger the battle again
                        StartBattle();
                    }
                }
            }

        }    
    }















}
