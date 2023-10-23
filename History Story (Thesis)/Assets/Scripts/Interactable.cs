using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class Interactable : MonoBehaviour
{
    [SerializeField] private UIDocument uiDoc;
    [SerializeField] private ImageSO imSO;
    private bool playerInRange = false;

    private GameObject iconViewer;

    VisualElement image;
    Label title, description;


    private void Awake()
    {
        iconViewer = gameObject.transform.GetChild(0).gameObject;
        iconViewer.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (!uiDoc.gameObject.activeInHierarchy)
        {
            if (Input.GetKeyDown(KeyCode.E) && playerInRange)
            {
                Debug.Log("Player interacting me");

                uiDoc.gameObject.SetActive(true);

                image = uiDoc.rootVisualElement.Q<VisualElement>("Image");
                title = uiDoc.rootVisualElement.Q<Label>("title") as Label;
                description = uiDoc.rootVisualElement.Q<Label>("description") as Label;

                image.style.backgroundImage = new StyleBackground(imSO.picture);
                title.text = imSO.pictureName;
                description.text = imSO.pictureDescription;
            }
        }
        else
        {
            if (Input.GetKeyDown(KeyCode.E) && playerInRange)
            {
                Debug.Log("Player exiting me");

                uiDoc.gameObject.SetActive(false);
            }
        }
        
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            // If the player is on site of the area
            Debug.Log("PLayer can interact me");

            iconViewer.SetActive(true);
            playerInRange = true;
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.CompareTag("Player"))
        {
            // If the player is on site of the area
            Debug.Log("Player is exited");

            iconViewer.SetActive(false);
            playerInRange = false;
            uiDoc.gameObject.SetActive(false);
        }
    }

}
