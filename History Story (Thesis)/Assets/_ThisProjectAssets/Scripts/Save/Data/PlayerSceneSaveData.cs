using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class PlayerSceneSaveData
{
    /* What to save in player data scene?
     * Current Health
     * Where player last scene? //DONE
     * SpawnPosition //DONE
     * Is holding something?
     * What object is players holding?
     */

    public string sceneName; //Where the player in the chapter scene
    public Vector2 spawnPosition; //Where the player to spawn
    //public float currentHealth; //What is the current health of the player
}
