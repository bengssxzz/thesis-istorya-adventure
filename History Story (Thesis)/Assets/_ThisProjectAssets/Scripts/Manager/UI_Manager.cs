using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.SceneManagement;

public class UI_Manager : Singleton<UI_Manager>
{

    private List<UI_Menu> menus;
    private List<UI_ButtonMenu> buttons;

    private UI_Menu previousMenuActive;
    private UI_Menu newMenuActive;


    protected override void Awake()
    {
        base.Awake();
    }

    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
        SceneManager.sceneUnloaded += OnSceneUnloaded;
    }
    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
        SceneManager.sceneUnloaded -= OnSceneUnloaded;
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode sceneMode)
    {
        ClearMenuList(); //Clear menu list on every new loaded scene

        menus = GetAllUIMenus();
        buttons = GetAllUIButtons();

        ActivateOnStartMenu(); //Activate all the OnStartMenu
    }
    private void OnSceneUnloaded(Scene scene)
    {
        previousMenuActive = null;
        newMenuActive = null;

    }

    private void Start()
    {
        
    }

   


    private List<UI_Menu> GetAllUIMenus()
    {
        IEnumerable<UI_Menu> menus = FindObjectsOfType<UIAbstract>(true).OfType<UI_Menu>();
        return new List<UI_Menu>(menus);
    }

    private void ActivateOnStartMenu() //Activate the OnStartMenu
    {
        CloseAllMenu(); //Close all activate menu

        var menuOnStart = menus.Where(x => x.IsOnStartMenu);

        foreach (var item in menuOnStart)
        {
            item.EnablePage();
        }
    }
    private void ClearMenuList() => menus?.Clear(); //Clear the list menu
    private void CloseAllMenu() //Close all the menus active in the scene
    {
        var menuWithActiveID = menus.Where(x => x.IsGlobalMenu == false);


        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }


    #region Menu UI public methods
    public void BackToPreviousActiveMenu() //Back to the previous menu
    {
        if(previousMenuActive == null) { return; }

        CloseAllMenu();

        var oldMenu = previousMenuActive;
        oldMenu.EnablePage(); //Enable the old active menu

        previousMenuActive = null;
        newMenuActive = oldMenu;

    }
    public void OpenMenu(string menuID) //Find the page with the same ID and open it
    {
        if(menus.Exists(x => x.GetUI_ID == menuID)) //If the menu ID exist in the list
        {
            var selectedMenu = menus.FirstOrDefault(script => script.GetUI_ID == menuID);

            if (!selectedMenu.IsSubMenu) //If not sub menu then dont close other UI
            {
                CloseAllMenu(); //Close all the menu page first
            }
            
            
            if(newMenuActive != null)
                previousMenuActive = newMenuActive; //Contain the latest active menu to previour menu active

            selectedMenu.EnablePage();

            newMenuActive = selectedMenu; //Set the new menu active
        }
        else
        {
            Debug.LogError($"MENU ID ({menuID}) IS MISSPELLED/NOT EXIST IN THE PROJECT");
        }
    }
    public void CloseMenu(string menuID) //Find the page with the same ID and close it
    {
        var selectedMenu = menus.FirstOrDefault(script => script.GetUI_ID == menuID);
        selectedMenu.EnablePage();
    }

    public void ActivateID_OpenMenu(string activateID) //Activate all the menu with activateID
    {
        CloseAllMenu(); //Close all

        var menuWithActiveID = menus.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.EnablePage();
        }
    }
    public void ActivateID_CloseMenu(string activateID)
    {
        var menuWithActiveID = menus.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }
    #endregion



    private List<UI_ButtonMenu> GetAllUIButtons()
    {
        IEnumerable<UI_ButtonMenu> buttons = FindObjectsOfType<UIAbstract>(true).OfType<UI_ButtonMenu>();
        return new List<UI_ButtonMenu>(buttons);
    }

















}
