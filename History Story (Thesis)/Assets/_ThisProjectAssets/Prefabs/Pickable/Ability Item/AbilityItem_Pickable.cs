using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ThesisLibrary;
using Cysharp.Threading.Tasks;

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

        var alreadyCollected = GameManager.Instance.GetListOfCollectedAbility.Contains(abilitySO);

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
        GameManager.Instance.AddCurrentChapterScore(points);
        GameManager.Instance.CollectedAbilities(abilitySO);
        player.CollectFeedbackModified("Ability Collected: " + abilitySO.abilityName);
    }

    
}
