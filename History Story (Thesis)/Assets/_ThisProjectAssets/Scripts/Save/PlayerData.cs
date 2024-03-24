using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerData
{
    public EntityStatistics playerStats;

    //Save the artifacts collected
    //public List<ArtifactsSO> artifactsCollected;
    public List<string> artifactsCollected_ID;

    //Save the unlocked abilities and current used ability
    //public List<AbilityScript> abilitiesCollected;
    //public List<AbilityScript> usedCurrentAbilities;
    public List<string> abilitiesCollected;
    public List<string> usedCurrentAbilities;

    //Save the unlocked chapters
    public Dictionary<Chapter_LevelSO, bool> unlockedChapters;

    //Save the score each chapter
    public Dictionary<string, int> chapterScores;
}
