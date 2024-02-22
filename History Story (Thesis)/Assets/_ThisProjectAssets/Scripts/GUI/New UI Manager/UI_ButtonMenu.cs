using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using System;

public class UI_ButtonMenu : UIAbstract
{
    private Button buttonMenu;

    [SerializeField] private bool canClick = true;

    [SerializeField] private string activateID = "Activate ID";
    [SerializeField] private string interactMenuID = "Menu ID";


    [SerializeField] private bool callActivateID = false;

    private void Awake()
    {
        buttonMenu = GetComponent<Button>();
    }

    public void BackClick()
    {
        UI_Manager.Instance.BackToPreviousActiveMenu();
    }

    public async void OpenMenu()
    {
        if (callActivateID)
        {
            await UI_Manager.Instance.ActivateID_OpenMenu(activateID);
        }
        else
        {
            UI_Manager.Instance.OpenMenu(interactMenuID);
        }
    }
    public async void CloseMenu()
    {
        if (callActivateID)
        {
           await UI_Manager.Instance.ActivateID_OpenMenu(activateID);
        }
        else
        {
            UI_Manager.Instance.CloseMenu(interactMenuID);
        }
    }


    public override void EnablePage() //Open the page
    {
        buttonMenu.gameObject.SetActive(true);
    }
    public override void DisablePage() //Close the page
    {
        buttonMenu.gameObject.SetActive(false);
    }


























}
