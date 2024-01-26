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

    [SerializeField] private string openMenuID = "Menu ID";

    private void Awake()
    {
        buttonMenu = GetComponent<Button>();
    }

    public void BackClick()
    {
        UI_Manager.Instance.BackToPreviousActiveMenu();
    }

    public void OpenMenu()
    {
        UI_Manager.Instance.OpenMenu(openMenuID);
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
