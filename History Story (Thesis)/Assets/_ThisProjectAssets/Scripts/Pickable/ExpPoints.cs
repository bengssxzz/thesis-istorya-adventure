using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

public class ExpPoints : MonoBehaviour
{
    [SerializeField] private int minPoints = 10;
    [SerializeField] private int maxPoints = 20;

    private int amountPoints;

    private void OnEnable()
    {
        RandomPoints();

        StartCoroutine(StartLifeTime());
    }

    private void RandomPoints() => amountPoints = ThesisUtility.RandomGetAmount(minPoints, maxPoints);

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            //Regen health
            IRegenHealth regen = collision.GetComponent<IRegenHealth>();

            if(regen != null)
            {
                regen.RegenHealth(amountPoints);
            }

            //Add points
            GameManager.Instance.AddCurrentChapterScore(amountPoints);

            gameObject.SetActive(false);
        }
    }

    IEnumerator StartLifeTime() //Life time of the exp point
    {
        yield return new WaitForSeconds(ThesisUtility.RandomGetFloat(3, 8));
        gameObject.SetActive(false);
    }



}
