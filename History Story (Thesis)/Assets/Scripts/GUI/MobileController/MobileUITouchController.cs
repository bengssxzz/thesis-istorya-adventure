using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MobileUITouchController : MonoBehaviour
{
    private PlayerScript entity;
    private List<TouchSkillUI> listOfTouchSkillUI = new List<TouchSkillUI>();


    private void OnEnable()
    {
        Show();
    }
    private void OnDisable()
    {
        Hide();
    }


    private void Start()
    {
        entity = GameManager.instance.GetPlayer();

        foreach (var item in transform.GetComponentsInChildren<TouchSkillUI>())
        {
            listOfTouchSkillUI.Add(item);
        }
        
    }

    private void UpdateUIData()
    {
        UpdateSkills();
        foreach (var item in listOfTouchSkillUI)
        {
            if (item.IsHasAbility())
            {
                item.AddSubscriber();
            }
            continue;
        }
    }
    private void UpdateSkills()
    {
        for (int i = 0; i < listOfTouchSkillUI.Count; i++)
        {
            var item = listOfTouchSkillUI[i];
            if(entity.abilityHolder.GetListOfAbilities()[i] == null)
            {
                item.SetNoSkill();
                continue;
            }
            item.UpdateSkillUIButton(entity.abilityHolder.GetListOfAbilities()[i]);
        }
    }


    public void Show()
    {
        gameObject.SetActive(true);
        UpdateUIData();
    }
    public void Hide()
    {
        gameObject.SetActive(false);
        foreach (var item in listOfTouchSkillUI)
        {
            if (item.IsHasAbility())
            {
                item.RemoveSubscriber();
            }
            continue;
        }
    }
}
