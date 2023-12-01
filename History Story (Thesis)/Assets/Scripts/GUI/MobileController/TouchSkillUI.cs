using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;
using UnityEngine.InputSystem.OnScreen;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.Layouts;

public class TouchSkillUI : OnScreenControl, IPointerDownHandler, IPointerUpHandler, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    [InputControl(layout = "Button")]
    [SerializeField] private string m_ControlPath;

    [SerializeField] private TextMeshProUGUI timerTxt;
    [SerializeField] private Image abilityImage;
    [SerializeField] private Image disableImage;

    private Button buttonAbility;
    private bool hasAbility = false;

    protected override string controlPathInternal { get => m_ControlPath; set => m_ControlPath = value; }

    public void Awake()
    {
        buttonAbility = GetComponent<Button>();
    }

    public void SetDataHolder(AbilityScript ability)
    {
        ActivateAbility();
        hasAbility = true;
        buttonAbility.interactable = true;
        abilityImage.sprite = ability.abilityIcon;
        abilityImage.gameObject.SetActive(true);
    }
    public void ResetDataHolder()
    {
        ActivateAbility();
        hasAbility = false;
        buttonAbility.interactable = false;
        abilityImage.sprite = null;
        abilityImage.gameObject.SetActive(false);
    }

    public void AbilityCooldown(bool isOnCooldown, float timeLapse)
    {
        //Debug.Log(isOnCooldown + " Remaining Time: " + timeLapse);
        if (isOnCooldown)
        {
            DeactivateAbility();
            timerTxt.text = timeLapse.ToString("F1");
        }
        else
        {
            ActivateAbility();
        }
    }
    private void ActivateAbility()
    {
        buttonAbility.interactable = true;
        disableImage.gameObject.SetActive(false);
        timerTxt.gameObject.SetActive(false);
    }
    private void DeactivateAbility()
    {
        buttonAbility.interactable = false;
        disableImage.gameObject.SetActive(true);
        timerTxt.gameObject.SetActive(true);
    }


    public void OnPointerUp(PointerEventData eventData)
    {
        Debug.Log("OnPointerUp");
        SendValueToControl(0.0f);
    }
    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("OnPointerDown");
        SendValueToControl(1.0f);
    }
    public void OnDrag(PointerEventData eventData)
    {
        Debug.Log("OnDrag");

    }
    public void OnBeginDrag(PointerEventData eventData)
    {
        Debug.Log("OnBeginDrag");

    }
    public void OnEndDrag(PointerEventData eventData)
    {
        Debug.Log("OnEndDrag");

    }


    //public Action<TouchSkillUI> OnPressedAbility;

    //private Button buttonSkill;

    //[SerializeField] private TextMeshProUGUI timerTxt;
    //[SerializeField] private Image skillImage;
    //[SerializeField] private Image disableImage;

    //private AbilityScript ability;

    //private float skillDuration;
    //private float _skillDuration;

    //public void Awake()
    //{
    //    buttonSkill = GetComponent<Button>();

    //    buttonSkill.onClick.AddListener(UsedSkill);
    //}

    //private void UsedSkill()
    //{
    //    Debug.Log("Used Skill");
    //    StartCoroutine(StartSkill());
    //    OnPressedAbility?.Invoke(this);
    //}

    //private IEnumerator StartSkill()
    //{
    //    _skillDuration = skillDuration;
    //    DeactivateSkill();

    //    while (_skillDuration >= 0)
    //    {
    //        //Debug.Log(_skillDuration);
    //        _skillDuration -= Time.deltaTime;
    //        timerTxt.text = _skillDuration.ToString("F1");
    //        yield return new WaitForFixedUpdate();
    //    }

    //    ActiveSkill();
    //}

    //public bool IsHasAbility()
    //{
    //    return ability != null;
    //}
    //public void AddSubscriber()
    //{
    //    ability.OnAbilityUsed += UsedSkill;
    //}
    //public void RemoveSubscriber()
    //{
    //    ability.OnAbilityUsed -= UsedSkill;
    //}
    //public void UpdateSkillUIButton(AbilityScript _ability)
    //{
    //    SetNoSkill();

    //    ability = _ability;

    //    skillDuration = _ability.cooldownTime;
    //    skillImage.sprite = _ability.abilityIcon;
    //    skillImage.gameObject.SetActive(true);
    //}

    //public void SetNoSkill()
    //{
    //    ability = null;
    //    skillImage.gameObject.SetActive(false);
    //    disableImage.gameObject.SetActive(false);
    //    timerTxt.gameObject.SetActive(false);
    //}
    //public void ActiveSkill()
    //{
    //    buttonSkill.interactable = true;
    //    disableImage.gameObject.SetActive(false);
    //    timerTxt.gameObject.SetActive(false);
    //}
    //public void DeactivateSkill()
    //{
    //    buttonSkill.interactable = false;
    //    disableImage.gameObject.SetActive(true);
    //    timerTxt.gameObject.SetActive(true);
    //}
}
