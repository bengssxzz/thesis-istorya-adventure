using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

public class TouchSkillUI : MonoBehaviour
{
    private Button buttonSkill;

    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Image skillImage;
    [SerializeField] private Image disableImage;

    private AbilityScript ability;

    private float skillDuration;
    private float _skillDuration;

    public void Awake()
    {
        buttonSkill = GetComponent<Button>();

        buttonSkill.onClick.AddListener(UsedSkill);
    }

    private void UsedSkill()
    {
        Debug.Log("Used Skill");
        StartCoroutine(StartSkill());
    }

    private IEnumerator StartSkill()
    {
        _skillDuration = skillDuration;
        DeactivateSkill();

        while (_skillDuration >= 0)
        {
            //Debug.Log(_skillDuration);
            _skillDuration -= Time.deltaTime;
            timerTxt.text = _skillDuration.ToString("F1");
            yield return new WaitForFixedUpdate();
        }

        ActiveSkill();
    }

    public bool IsHasAbility()
    {
        return ability != null;
    }
    public void AddSubscriber()
    {
        ability.OnAbilityUsed += UsedSkill;
    }
    public void RemoveSubscriber()
    {
        ability.OnAbilityUsed -= UsedSkill;
    }
    public void UpdateSkillUIButton(AbilityScript _ability)
    {
        SetNoSkill();

        ability = _ability;

        skillDuration = _ability.cooldownTime;
        skillImage.sprite = _ability.skillIcon;
        skillImage.gameObject.SetActive(true);
    }

    public void SetNoSkill()
    {
        ability = null;
        skillImage.gameObject.SetActive(false);
        disableImage.gameObject.SetActive(false);
        timerTxt.gameObject.SetActive(false);
    }
    public void ActiveSkill()
    {
        buttonSkill.interactable = true;
        disableImage.gameObject.SetActive(false);
        timerTxt.gameObject.SetActive(false);
    }
    public void DeactivateSkill()
    {
        buttonSkill.interactable = false;
        disableImage.gameObject.SetActive(true);
        timerTxt.gameObject.SetActive(true);
    }
}
