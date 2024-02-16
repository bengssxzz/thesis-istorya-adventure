using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData
{
    public EntityStatistics playerStats;

    //Save the artifacts collected
    public List<ArtifactsSO> artifactsCollected;

    //Save the unlocked abilities and current used ability
    public List<AbilityScript> abilitiesCollected;
    public List<AbilityScript> usedCurrentAbilities;

    //Save the unlocked chapters
    public Dictionary<Chapter_LevelSO, bool> unlockedChapters;

    //Save the score each chapter
    public Dictionary<string, int> chapterScores;
}
