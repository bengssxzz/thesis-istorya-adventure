using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestionOrb : MonoBehaviour
{
    public const int POINTS = 100;
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            gameObject.SetActive(false);
            UIManager.instance.SetGUIState(UIManager.GUIState.QandA);
        }
    }
}
