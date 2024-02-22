using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using PixelCrushers.DialogueSystem;
using MoreMountains.Feedbacks;
using System;
using System.Linq;

public class ChestScript : MonoBehaviour
{
    private DropLoot dropLoot;

    [SerializeField] private Transform openChest;
    [SerializeField] private Transform closeChest;
    [SerializeField] private Transform chestVisual;

    [Space(10)]
    [SerializeField] private MMF_Player openFeedback;
    [SerializeField] private MMF_Player closeFeedback;
    [SerializeField] private VisualSelector selector;

    public UnityEvent OnOpened;
    public UnityEvent OnNearToChest;

    private bool isLocked = false;
    private bool isOpened = false;

    public Transform GetChestVisual { get { return chestVisual; } }
    public bool IsChestOpened { get { return isOpened; } set { isOpened = value; } }


    private void Awake()
    {
        dropLoot = GetComponent<DropLoot>();

        var loadedData = SaveGameDataManager.Instance.LoadChestInScene();

        if (loadedData != null)
        {
            var findData = loadedData.FirstOrDefault(x => x.id == GetInstanceID());

            if(findData != null)
            {
                chestVisual.gameObject.SetActive(findData.isActiveInScene);
                isOpened = findData.isChestOpened;
            }
        }
    }

    private void OnEnable()
    {
        selector.OnEventUseObject += UseObject;
        selector.OnTriggerEnterSelectorRange += NearToChest;
    }

    private void OnDisable()
    {
        selector.OnEventUseObject -= UseObject;
        selector.OnTriggerEnterSelectorRange -= NearToChest;
    }

    private void Start()
    {
        selector.gameObject.SetActive(!isOpened);

        openChest.gameObject.SetActive(isOpened);
        closeChest.gameObject.SetActive(!isOpened);
    }


    private void NearToChest(Collider2D obj) //When player is close to chest
    {
        if (isOpened || isLocked) 
        {
            return; 
        }

        OnNearToChest?.Invoke();
    }

    private void UseObject() //When the player use this object
    {
        if (isOpened || isLocked)
        {
            return; 
        }

        openFeedback?.PlayFeedbacks();
        isOpened = true;
        selector.gameObject.SetActive(false);

        OnOpened?.Invoke();
    }

    public void DropTheLoot()
    {
        if(dropLoot == null) { return; }

        dropLoot.LootDrop();
    }

    //TODO: TIMER

}
