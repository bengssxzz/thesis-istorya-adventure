using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionOrb : MonoBehaviour
{
    public const int POINTS = 100;

    public string questionFrom = "Chapter1";



    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            gameObject.SetActive(false);
           // UIManager.Instance.ChangeUIState = UIManager.GUIState.QandA;

            QuestionsManager.Instance.TriggerQuestion(questionFrom, 4);
        }
    }
}
