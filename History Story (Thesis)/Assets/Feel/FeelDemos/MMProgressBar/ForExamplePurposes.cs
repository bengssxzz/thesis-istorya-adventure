using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Tools;

public class ForExamplePurposes : MonoBehaviour
{
    public MMProgressBar progressBar;

    public float maxHealth = 100;

    private float currentHealth = 0;


    private void Start()
    {
        currentHealth = maxHealth;

        progressBar.UpdateBar(currentHealth, 0, maxHealth);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            AddMinusHealth(10);
        }

        if (Input.GetKeyDown(KeyCode.LeftShift))
        {
            AddMinusHealth(-10);
        }
    }


    private void AddMinusHealth(float amount)
    {
        currentHealth = Mathf.Clamp(currentHealth + amount, 0, maxHealth);
        progressBar.UpdateBar(currentHealth, 0, maxHealth);
    }

}
