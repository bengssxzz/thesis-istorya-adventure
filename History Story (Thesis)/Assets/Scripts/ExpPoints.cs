using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExpPoints : MonoBehaviour
{
    private int expPoints;

    private void OnEnable()
    {
        RandomPoints();
    }

    private void RandomPoints() => expPoints = Random.Range(10, 30);

    void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            PlayerScript playerScript = other.GetComponent<PlayerScript>();
            playerScript.AddExperience(expPoints);
            gameObject.SetActive(false);
            Debug.Log($"Points: {expPoints} == Current: {playerScript.GetLevelSystem.GetCurrentExp()}  Target: {playerScript.GetLevelSystem.GetTargetExp()}");
        }
    }

    

}
