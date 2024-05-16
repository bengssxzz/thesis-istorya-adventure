using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestIndicator : MonoBehaviour
{
    [SerializeField] private bool questStarted = false;

    [SerializeField] private GameObject questionObj, exclamationObj;


    private void Start()
    {
        SetIndicator();
    }

    private void SetIndicator()
    {
        if (questStarted)
        {
            questionObj.SetActive(true);
            exclamationObj.SetActive(false);
        }
        else
        {
            questionObj.SetActive(false);
            exclamationObj.SetActive(true);
        }
    }


    public void QuestStarted(bool isStarted)
    {
        questStarted = isStarted;

        SetIndicator();
    }
    public void ShowIndicator(bool visible)
    {
        gameObject.SetActive(visible);
    }


}
