using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AbilityItem_Pickable : PickableObject
{
    [SerializeField] private Image abilityImage;

    [SerializeField] private AbilityScript abilitySO;


    private void OnEnable()
    {
        SetingUp();
    }

    private void Start()
    {
        SetingUp();
    }

    private void SetingUp()
    {
        if (abilitySO == null)
        {
            Debug.LogWarning($"{this.name} missing a scriptable object");
            abilityImage.gameObject.SetActive(false);
            return;
        }
        abilityImage.gameObject.SetActive(true);
        abilityImage.sprite = abilitySO.abilityIcon;
    }

    protected override void PickUpLogic(Entities entity)
    {
        if (abilitySO != null)
        {
            abilityImage.gameObject.SetActive(true);
            entity.Ability_Controller.UnlockNewAbility(abilitySO);
        }
    }
}
