using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData
{
    //Character name
    public string characterName;

    public EntityStatistics playerStats;

    //Save the artifacts collected
    public List<ArtifactsSO> artifactsCollected;

    //Save the unlocked abilities and current used ability
    public List<AbilityScript> unlockedAbilities;
    public List<AbilityScript> usedCurrentAbilities;

    //Save the unlocked chapters
    public Dictionary<Chapter_LevelSO, bool> unlockedChapters;

    //Save the score each chapter
    public Dictionary<string, int> chapterScores;

    /* This to save
     * Abilities unlocked
     * chapter unlocked
     * 
     * The collected artifacts
     * 
     * the player's stats
     * Player score
     */

}
