using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogTrigger : MonoBehaviour
{
    [SerializeField] private TextAsset inkyJSON;

    private bool canTalk = false;

    private void Update()
    {
        if (!canTalk) { return; }

        if (Input.GetKeyDown(KeyCode.E))
        {
            if(inkyJSON == null)
            {
                Debug.LogWarning(gameObject.name + " has no inky JSON file");
                return;
            }

            DialogManager.instance.EnterDialogMode(inkyJSON);
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            canTalk = true;
        }
    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            canTalk = false;
        }
    }
}
