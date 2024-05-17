using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
public class AbilityController : MonoBehaviour
{
    private Entities entity;

    private List<AbilityScript> currentAbilities = new List<AbilityScript>();

    public List<AbilityScript> ListOfCurrentAbilities
    {
        get => currentAbilities;
        set
        {
            currentAbilities = new List<AbilityScript>(value);
            ResetAbilitiesOnStart();

            foreach (var item in currentAbilities)
            {
                if (item == null) { continue; }
                item.InitializeAbility_Used();
            }
        }
    }


    [SerializeField] private List<GameObject> abilityAttached = new List<GameObject>();
    private Dictionary<string, GameObject> abilityAttachedDict = new Dictionary<string, GameObject>();

    [SerializeField] private List<ParticleSystem> listOfParticlesEffects = new List<ParticleSystem>();
    private Dictionary<string, ParticleSystem> particleEffectsDict = new Dictionary<string, ParticleSystem>();


    private void Awake()
    {
        entity = GetComponent<Entities>();
        InitializedAttachedAbility();
        InitializedParticleEffects();
    }
    private void OnEnable()
    {
        ResetAbilitiesOnStart();
        foreach (var item in currentAbilities)
        {
            if (item == null) { continue; }
            item.InitializeAbility_Used();
        }
    }

    public void InitializedDefaultAbilities(List<AbilityScript> defaultAbility)
    {
        HashSet<AbilityScript> newList = new HashSet<AbilityScript>(defaultAbility);
        ListOfCurrentAbilities = new List<AbilityScript>(newList);
    }
    private void ResetAbilitiesOnStart() //Reset each abilities
    {
        if (currentAbilities.Count > 0)
        {
            foreach (var ability in currentAbilities)
            {
                if (ability == null)
                {
                    continue;
                }
                ability.RestartAbility();
            }
        }

    }

    //Unlock a new ability
    public void UnlockNewAbility(AbilityScript newAbility)
    {
        GameManager.Instance.CollectedAbilities(newAbility);
    }

    public void UseAbility(int index) //Use index ablity in array
    {
        try
        {
            var ability = currentAbilities[index];

            if (!ability.OnCoolDown)
            {
                currentAbilities[index].TriggerAbility(entity).Forget();
            }
        }
        catch (Exception)
        {
            Debug.LogWarning($"Ability index {index} is null");
        }

    }


    private void InitializedAttachedAbility()
    {

        foreach (var abilityObject in abilityAttached)
        {
            if (abilityObject == null) { continue; }

            if (abilityAttachedDict.ContainsKey(abilityObject.name))
            {
                Debug.LogWarning($"{abilityObject.name} OBJECT IS INPUTED TWICE");
                continue;
            }

            abilityAttachedDict.Add(abilityObject.name, abilityObject);
        }
    }
    public GameObject GetAttachedAbilityObject(string keyName)
    {
        abilityAttachedDict.TryGetValue(keyName, out GameObject abilityObjectAttached);

        if (abilityObjectAttached == null)
        {
            Debug.LogError($"YOU ARE CALLING AN ABILITY OBJECT THAT DOESNT ATTACHED TO {gameObject.name} OBJECT");
            return null;
        }
        else
        {
            return abilityObjectAttached;
        }
    }

    private void InitializedParticleEffects()
    {
        foreach (var effects in listOfParticlesEffects)
        {
            if (effects == null) { continue; }

            if (particleEffectsDict.ContainsKey(effects.name))
            {
                Debug.LogWarning($"{effects.name} OBJECT IS INPUTED TWICE");
                continue;
            }

            particleEffectsDict.Add(effects.name, effects);
        }
    }
    public void PlayParticleEffects(string keyname, float duration = 0)
    {
        if (particleEffectsDict.TryGetValue(keyname, out ParticleSystem particleEffect))
        {
            var mainModule = particleEffect.main;

            if (duration > 0)
            {
                mainModule.duration = duration;
            }

            particleEffect.Play();
        }
        else
        {
            Debug.LogError($"{keyname} PARTICLE EFFECT NAME IS NOT REGISTERED");
        }
    }










}
