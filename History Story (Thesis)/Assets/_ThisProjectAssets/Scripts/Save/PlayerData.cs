using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData
{

    //Save the artifacts collected
    public List<GameObject> artifactsCollected = new List<GameObject>();

    //Save the unlocked abilities and current used ability
    public List<AbilityScript> unlockedAbilities = new List<AbilityScript>();
    public List<AbilityScript> usedCurrentAbilities = new List<AbilityScript>();

    //Save the unlocked chapters
    public List<GameObject> unlockedChapters = new List<GameObject>();

    //Save the score each chapter
    public Dictionary<string, int> chapterScores = new Dictionary<string, int> {
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
