using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class LevelSystem
{
    private int level;
    private int experience;
    private int targetExperience;

    public event Action OnChangedLevel;
    public event Action<int, int> OnChangedExperience;

    public LevelSystem(EntityStatsSO entityStats)
    {
        level = entityStats.defaultLevel;
        experience = 0;
        UpdateExpToLVL();
    }

    private void UpdateExpToLVL()
    {
        targetExperience = level * 100;
    }

    public int GetLevel()
    {
        return level;
    }
    public int GetCurrentExp()
    {
        return experience;
    }
    public int GetTargetExp()
    {
        return targetExperience;
    }
    public void AddExperience(int amount)
    {
        experience += amount;
        if(experience >= targetExperience)
        {
            level++;
            experience -= targetExperience;
            UpdateExpToLVL();
            OnChangedLevel?.Invoke();
        }
        OnChangedExperience?.Invoke(experience, targetExperience);
    }


}
