using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ThesisLibrary;
using Cysharp.Threading.Tasks;
using System.Linq;
using System;

public class AbilityItem_Pickable : BasePoints
{
    [SerializeField] private Image abilityImage;
    [SerializeField] private AbilityScript abilitySO;

    [Tooltip("If the ability is already collected, instantiate this")]
    [SerializeField] private ObjectPoolerInfo[] alternativePoints;
     

    protected override async void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();

        abilityImage.sprite = abilitySO.abilityIcon;
        await UniTask.Delay(20);

        bool alreadyCollected = GameManager.Instance.GetListOfCollectedAbility.Contains(abilitySO);

        if (alreadyCollected)
        {
            if(alternativePoints.Length > 0)
            {
                var objectRandom = alternativePoints.RandomGetObject();
                //var newObject = ObjectPooling.Instance.GetObjectInPool("loot", objectRandom, transform.position, true);
                var newObject = ObjectPoolingManager.Instance.GetItemFromPool(objectRandom);
                newObject.transform.position = transform.position;
                newObject.GetComponent<BasePoints>().GetAmountPoints = GetAmountPoints;
                newObject.SetActive(true);
            }

            gameObject.SetActive(false);
            return;
        }
    }
    protected override void CollectedBehaviour(PlayerScript player, int points)
    {
        //Add points
        AbilityScript ability = GameManager.Instance.GetListOfAllAbility.FirstOrDefault(abilityItem => abilityItem == abilitySO);

        if(ability == null)
        {
            Debug.LogError($"{abilitySO.abilityName} ABILITY IS NOT REGISTERED TO THE GAME MANAGER IN 'LIST OF ALL ABILITIES'");
            return;
        }

        GameManager.Instance.AddCurrentChapterScore(points);
        //GameManager.Instance.CollectedAbilities(abilitySO);
        GameManager.Instance.CollectedAbilities(ability);
        player.CollectFeedbackModified("Ability Collected: " + abilitySO.abilityName);

        Debug.Log($"PLAYER COLLECTED {abilitySO.abilityName} ABILITY");
    }

    
}
