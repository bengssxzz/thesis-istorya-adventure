using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.SceneManagement;
using Cysharp.Threading.Tasks;

public enum UI_ManagerState
{
    Start, Running, End
}
public class UI_Manager : Singleton<UI_Manager>
{
    private UI_ManagerState managerState = UI_ManagerState.Start;

    private List<UI_Menu> menuList;
    private List<UI_ButtonMenu> buttons;

    private UI_Menu previousMenuActive;
    private UI_Menu newMenuActive;


    public UI_ManagerState GetManagerState { get { return managerState; } }

    protected override void Awake()
    {
        base.Awake();
    }

    //private void OnEnable()
    //{
    //    SceneManager.sceneLoaded += OnSceneLoaded;
    //    SceneManager.sceneUnloaded += OnSceneUnloaded;
    //}
    //private void OnDisable()
    //{
    //    SceneManager.sceneLoaded -= OnSceneLoaded;
    //    SceneManager.sceneUnloaded -= OnSceneUnloaded;
    //}



    private void OnSceneLoaded(Scene scene, LoadSceneMode sceneMode) //Every new scene execute this
    {
        var antiSpill = "AntiSpillScene";
        var loadingScene = "IstoryaAdventureLoadingScreen";
        var addLoadingScene = "IstoryaAdventureAdditiveLoadingScreen";

        var loadedSceneName = scene.name;

        if (loadedSceneName == antiSpill || loadedSceneName == loadingScene || loadedSceneName == addLoadingScene) { return; }

        managerState = UI_ManagerState.End;

        previousMenuActive = null;
        newMenuActive = null;


        managerState = UI_ManagerState.Start;

        StartCoroutine(TryFindMenus());
    }
    private void OnSceneUnloaded(Scene scene)
    {
        var antiSpill = "AntiSpillScene";
        var loadingScene = "IstoryaAdventureLoadingScreen";
        var addLoadingScene = "IstoryaAdventureAdditiveLoadingScreen";
        var loadedSceneName = scene.name;
        if (loadedSceneName == antiSpill || loadedSceneName == loadingScene || loadedSceneName == addLoadingScene) { return; }

        managerState = UI_ManagerState.End;

        previousMenuActive = null;
        newMenuActive = null;

        menuList.Clear();
        buttons.Clear();
    }






    private IEnumerator TryFindMenus()
    {
        ClearMenuList(); //Clear menu list on every new loaded scene

        do
        {
            this.menuList = GetAllUIMenus();
            this.buttons = GetAllUIButtons();

            if (menuList.Count == 0 || menuList == null)
                Debug.LogWarning("FINDING MENUS");

            yield return new WaitForEndOfFrame();

        } while (menuList.Count == 0 || menuList == null);

        ActivateOnStartMenu(); //Activate all the OnStartMenu

        managerState = UI_ManagerState.Running;
    }

    private List<UI_Menu> GetAllUIMenus()
    {
        IEnumerable<UI_Menu> menus = FindObjectsOfType<UI_Menu>(true);
        return new List<UI_Menu>(menus);
    }
    private List<UI_ButtonMenu> GetAllUIButtons()
    {
        IEnumerable<UI_ButtonMenu> buttons = FindObjectsOfType<UI_ButtonMenu>(true);
        return new List<UI_ButtonMenu>(buttons);
    }

    private void ActivateOnStartMenu() //Activate the OnStartMenu
    {
        CloseAllMenu(); //Close all activate menu

        var menuOnStart = menuList.Where(x => x.IsOnStartMenu);

        foreach (var item in menuOnStart)
        {
            item.EnablePage();
        }
    }
    private void ClearMenuList() => menuList?.Clear(); //Clear the list menu



    public async UniTask InitializeGetAllMenus()
    {
        ClearMenuList();
        await UniTask.Delay(50);

        this.menuList = GetAllUIMenus();
        this.buttons = GetAllUIButtons();

        managerState = UI_ManagerState.Running;

        await UniTask.Yield();
    }


    #region Menu UI public methods
    public void CloseAllMenu() //Close all the menus active in the scene
    {
        var menuWithActiveID = menuList.Where(x => x.IsGlobalMenu == false);


        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }
    public bool IsMenuOpened(string menuID)
    {
        if (menuList.Count < 0 || menuList == null)
        {
            Debug.LogWarning($"THERE ARE NO MENUS TO CHECK IF {menuID} IS OPEN IN THE SYSTEM");
            return false;
        }

        if (menuList.Exists(x => x.GetUI_ID == menuID)) //If the menu ID exist in the list
        {
            var selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID);

            return selectedMenu.GetMenuPage.gameObject.activeInHierarchy;
        }
        else
        {
            Debug.LogError($"MENU ID ({menuID}) IS MISSPELLED/NOT EXIST IN THE PROJECT");
            return false;
        }


    }


    public void OpenMenu(string menuID) //Find the page with the same ID and open it
    {
        if (menuList.Count < 0 || menuList == null)
        {
            Debug.LogWarning("THERE ARE NO MENUS TO OPEN IN THE SYSTEM");
            return;
        }

        if (menuList.Exists(x => x.GetUI_ID == menuID)) //If the menu ID exist in the list
        {
            var selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID);

            if (!selectedMenu.IsSubMenu) //If not sub menu then dont close other UI
            {
                CloseAllMenu(); //Close all the menu page first
            }


            if (newMenuActive != null)
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
        if (menuList.Count < 0 || menuList == null)
        {
            Debug.LogWarning("THERE ARE NO MENUS TO CLOSE IN THE SYSTEM");
            return;
        }

        var selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID);

        if (selectedMenu != null)
        {
            selectedMenu.DisablePage();
        }
        else
        {
            Debug.LogWarning($"{menuID} menu is doesn't exist");
        }
    }


    public void ActivateID_OpenMenu(string activateID) //Open all the menu with the same activateID
    {
        CloseAllMenu(); //Close all

        var menuWithActiveID = menuList.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.EnablePage();
        }
    }
    public void ActivateID_CloseMenu(string activateID) //Close all the menu with the same activateID
    {
        var menuWithActiveID = menuList.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }


    public RectTransform GetMenu(string menuID)
    {
        if (menuList.Exists(x => x.GetUI_ID == menuID))
        {
            var selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID);
            if (selectedMenu != null)
            {
                return selectedMenu.GetMenuPage;
            }
            else
            {
                Debug.Log($"THERE ARE NO ASSIGN MENU IN {menuID} PAGE MENU");
                return null;
            }
        }
        else
        {
            Debug.LogError($"MENU ID ({menuID}) IS MISSPELLED/NOT EXIST IN THE PROJECT");
            return null;
        }
    }


    public T FindComponentInUIMenu<T>(string menuID) //Find object in menu
    {
        if (menuList.Exists(x => x.GetUI_ID == menuID))
        {
            GameObject selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID).gameObject;
            T component = selectedMenu.GetComponentInChildren<T>(true);

            if (component != null)
            {
                Debug.Log($"I FOUND {typeof(T).ToString()} IN {component}");
                return component;
            }
            else
            {
                Debug.LogWarning($"THERE ARE NO {typeof(T).ToString()} ATTACH TO {menuID}'s ID MENU");
                return default(T);
            }
        }
        else
        {
            Debug.LogError($"MENU ID ({menuID}) IS MISSPELLED/NOT EXIST IN THE PROJECT");
            return default(T);
        }
    }
    public T[] FindComponentsInUIMenu<T>(string menuID) //Find all objects in menu
    {
        if (menuList.Exists(x => x.GetUI_ID == menuID))
        {
            GameObject selectedMenu = menuList.FirstOrDefault(script => script.GetUI_ID == menuID).gameObject;
            T[] component = selectedMenu.GetComponentsInChildren<T>(true);

            if (component != null)
            {
                Debug.Log($"I FOUND {typeof(T).ToString()} IN {component}");
                return component;
            }
            else
            {
                Debug.LogWarning($"THERE ARE NO {typeof(T).ToString()} ATTACH TO {menuID}'s ID MENU");
                return default(T[]);
            }
        }
        else
        {
            Debug.LogError($"MENU ID ({menuID}) IS MISSPELLED/NOT EXIST IN THE PROJECT");
            return default(T[]);
        }
    }
    #endregion





















}
