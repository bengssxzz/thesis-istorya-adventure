using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData
{

    private List<GameObject> artifactsCollected = new List<GameObject>();

    private List<GameObject> abilitiesUnlocked = new List<GameObject>();
    private List<GameObject> chapterUnlocked = new List<GameObject>();

    private Dictionary<string, int> chapterScores = new Dictionary<string, int> {
        {"Chapter 1", 0},
        {"Chapter 2", 0},
        {"Chapter 3", 0},
        {"Chapter 4", 0},
        {"Chapter 5", 0},

    };

    /* This to save
     * Abilities unlocked
     * chapter unlocked
     * 
     * The collected artifacts
     * 
     * the player's stats
     * Player score
     */


    public PlayerData()
    {
        
    }


    public void SaveChapterScore(string chapterName, int score)
    {
        chapterScores[chapterName] += score;
    }


}
