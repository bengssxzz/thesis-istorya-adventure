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
        /* Next target is 100 * level
         * then add 25% of max target exp (exp. 100 maxExp = 25)
         * Next target will be 100 + 25% max target (100+25) = 125
         */
        int TARGET = 100 * level;
        float previousTargetRate = (float)targetExperience * 0.25f;
        int newTargetExp = Mathf.RoundToInt(TARGET + previousTargetRate);

        targetExperience = newTargetExp;
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
