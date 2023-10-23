using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FloatingBarBehaviour : MonoBehaviour
{
    [SerializeField] private GameObject HealthBar, ManaBar;
    private Slider healthSlider, manaSlider;

    void OnEnable()
    {
        transform.root.gameObject.GetComponent<Entities>().OnManaChanged += UpdateManaBar;
        transform.root.gameObject.GetComponent<Entities>().OnHealthChanged += UpdateHealthBar;
    }

    void Start()
    {
        healthSlider = HealthBar.GetComponent<Slider>();
        manaSlider = ManaBar.GetComponent<Slider>();
    }
    public void UpdateHealthBar(float healthValue){
        healthSlider.value = healthValue;
    }
    public void UpdateManaBar(float manaValue)
    {
        manaSlider.value = manaValue;
    }
}

