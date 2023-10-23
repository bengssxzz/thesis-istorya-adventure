using System.Collections;
using System.Collections.Generic;
using UnityEngine;




public class BattleManager : MonoBehaviour
{
    [System.Serializable] public class WaveSystem
    {
        public int numberOfEnemies = 5;
        public GameObject[] enemyArray;
    }


    [SerializeField] private LayerMask cannotSpawn;
    [SerializeField] private WaveSystem[] numberOfWaves;

    public static BattleManager instance;

    private Camera cam;
    private Transform pointA, pointB;
    private Transform cloneContainer;
    private int currentWave = 0;


    private void Awake()
    {
        //Instance
        if(instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            DestroyImmediate(this);
        }
    }

    private void Start()
    {
        cam = GameObject.Find("Main Camera").GetComponent<Camera>();
        pointA = transform.Find("Point A");
        pointB = transform.Find("Point B");
        cloneContainer = transform.Find("Clone Container");

        StartCoroutine(StartSpawningEnemy());
    }

    private void LateUpdate()
    {
        //Debug.Log(CheckRemainingEnemy());
    }

    //Get the info of the current wave
    private WaveSystem GetInfoCurrentWave()
    {
        return numberOfWaves[currentWave];
    }

    //Random enemy that will spawn
    private GameObject RandomEnemySpawn()
    {
        //Get the value of the array in current wave
        var waveInfo = GetInfoCurrentWave();

        var enemyIndex = Random.Range(0, waveInfo.enemyArray.Length);
        var chosenEnemy = ObjectPooling.instance.CreateObject(ObjectPooling.TagPooling.Enemy ,waveInfo.enemyArray[enemyIndex]);
        return chosenEnemy;
    }


    //Random location within the 2 points
    private Vector2 RandomSpawnLocation()
    {
        var posX = Random.Range(pointA.position.x, pointB.position.x);
        var posY = Random.Range(pointA.position.y, pointB.position.y);

        //float cameraX = cam.orthographicSize * cam.aspect;
        //float cameraY = cam.orthographicSize;
        //var posX = Random.Range(cameraX, cameraX);
        //var posY = Random.Range(cameraY, cameraY);

        Vector2 generatedPos;
        Collider2D restrictedPos;

        generatedPos = new Vector2(posX, posY);
        restrictedPos = Physics2D.OverlapCircle(generatedPos, 0.1f, cannotSpawn);

        while (!restrictedPos){
            generatedPos = new Vector2(posX, posY);
            restrictedPos = Physics2D.OverlapCircle(generatedPos, 0.1f, cannotSpawn);
        }

        return generatedPos;
    }

    private Vector2 RandomSpawnLocation1()
    {
        //float cameraX = cam.orthographicSize * cam.aspect;
        //float cameraY = cam.orthographicSize;
        //var posX = Random.Range(cameraX, cameraX);
        //var posY = Random.Range(cameraY, cameraY);

        Vector2 generatedPos;
        Collider2D restrictedPos;


        do
        {
            var posX = Random.Range(pointA.position.x, pointB.position.x);
            var posY = Random.Range(pointA.position.y, pointB.position.y);

            generatedPos = new Vector2(posX, posY);
            restrictedPos = Physics2D.OverlapCircle(generatedPos, 0.02f, cannotSpawn);
        } while (restrictedPos);

        return generatedPos;
    }

    private int CheckRemainingEnemy()
    {
        var alive = 0;
        foreach (Transform enemy in cloneContainer)
        {
            if (enemy.gameObject.activeInHierarchy)
            {
                alive += 1;
            } 
        }

        return alive;
    }

    IEnumerator StartSpawningEnemy()
    {
        
        for (int i = 0; i < GetInfoCurrentWave().numberOfEnemies; i++)
        {
            var selectedEnemy = RandomEnemySpawn();
            selectedEnemy.transform.position = RandomSpawnLocation1();
            yield return new WaitForSeconds(Random.Range(0.2f, 1.5f));
        }

        Debug.Log("Done");

    }
}


