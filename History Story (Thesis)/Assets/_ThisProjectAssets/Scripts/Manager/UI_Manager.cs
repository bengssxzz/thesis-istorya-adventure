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
        SceneManager.sceneLoaded += SceneLoaded;
    }
    private void OnDisable()
    {
        
    }


    private void Start()
    {
        menus = GetAllUIMenus();
        buttons = GetAllUIButtons();

        ActivateOnStartMenu(); //Activate the OnStartMenu
    }

    private void SceneLoaded(Scene arg0, LoadSceneMode arg1)
    {
        
    }


    private List<UI_Menu> GetAllUIMenus()
    {
        IEnumerable<UI_Menu> menus = FindObjectsOfType<UIAbstract>().OfType<UI_Menu>();
        return new List<UI_Menu>(menus);
    }
    private List<UI_ButtonMenu> GetAllUIButtons()
    {
        IEnumerable<UI_ButtonMenu> buttons = FindObjectsOfType<UIAbstract>().OfType<UI_ButtonMenu>();
        return new List<UI_ButtonMenu>(buttons);
    }
    private void ActivateOnStartMenu()
    {
        if(menus.Count(x => x.IsOnStartMenu) == 1)
        {
            //One OnStartMenu in the scene UI
            var onStartMenuActive = menus.FirstOrDefault(x => x.IsOnStartMenu);
            OpenMenu(onStartMenuActive.GetMenuID);
        }
        else if (menus.Count(x => x.IsOnStartMenu) > 1)
        {
            Debug.LogWarning("There are 2 or more 'OnStartmenu' active in the scene UI");
        }
        else if (menus.Count(x => x.IsOnStartMenu) < 1)
        {
            Debug.LogWarning("There are no 'OnStartMenu' in scene UI");
        }
    }
    private void ClearMenuList() => menus.Clear(); //Clear the list menu
    private void CloseAllMenu()
    {
        foreach (var item in menus)
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
        if(menus.Exists(x => x.GetMenuID == menuID)) //If the menu ID exist in the list
        {
            CloseAllMenu(); //Close all the menu page first

            if(newMenuActive != null)
                previousMenuActive = newMenuActive; //Contain the latest active menu to previour menu active

            var selectedMenu = menus.FirstOrDefault(script => script.GetMenuID == menuID);
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
        var selectedMenu = menus.FirstOrDefault(script => script.GetMenuID == menuID);
        selectedMenu.EnablePage();
    }

    public void ActiveID_OpenMenu(string activeID) //Activate all the 
    {
        var menuWithActiveID = menus.Where(script => script.GetMenuID == activeID);

        foreach (var item in menuWithActiveID)
        {
            item.EnablePage();
        }
    }
    public void ActiveID_CloseMenu(string activeID)
    {
        var menuWithActiveID = menus.Where(script => script.GetMenuID == activeID);

        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }
    #endregion
}
