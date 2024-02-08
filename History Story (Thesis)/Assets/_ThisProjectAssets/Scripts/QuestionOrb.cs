using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class QuestionOrb : MonoBehaviour
{

    private void OnEnable()
    {
        StartCoroutine(StartLifeTime());
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            gameObject.SetActive(false);
            QuestionsManager.Instance.QuestionTriggerUI();
        }
    }


    IEnumerator StartLifeTime() //Life time of the exp point
    {
        yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(5, 10));
        gameObject.SetActive(false);
    }

}
