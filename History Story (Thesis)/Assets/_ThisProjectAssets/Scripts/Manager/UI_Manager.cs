using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Linq;
using UnityEngine.SceneManagement;

public class UI_Manager : Singleton<UI_Manager>
{
    [Serializable]
    public class CallMenuOnStart
    {
        public string[] CallMenuID;
        public string[] CallActivateID;
    }

    private List<UI_Menu> menus;
    private List<UI_ButtonMenu> buttons;

    private UI_Menu previousMenuActive;
    private UI_Menu newMenuActive;

    [SerializeField] private CallMenuOnStart callOnStart;


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

    

    private void OnSceneLoaded(Scene scene, LoadSceneMode sceneMode) //Every new scene execute this
    {
        //ClearMenuList(); //Clear menu list on every new loaded scene

        //menus = GetAllUIMenus();
        //buttons = GetAllUIButtons();

        //ActivateOnStartMenu(); //Activate all the OnStartMenu
        //CallOnStart(); 

        StartCoroutine(TryFindMenus());
    }
    private void OnSceneUnloaded(Scene scene)
    {
        previousMenuActive = null;
        newMenuActive = null;

    }

   

    private void Start()
    {
        
    }

    private IEnumerator TryFindMenus()
    {
        ClearMenuList(); //Clear menu list on every new loaded scene

        do
        {
            this.menus = GetAllUIMenus();
            this.buttons = GetAllUIButtons();

            if(menus.Count == 0 || menus == null)
                Debug.LogWarning("FINDING MENUS");

            yield return new WaitForEndOfFrame();

        } while (menus.Count == 0 || menus == null);

        ActivateOnStartMenu(); //Activate all the OnStartMenu
        CallOnStart();
    }

    private void CallOnStart()
    {
        foreach (var item in callOnStart.CallMenuID)
        {
            OpenMenu(item);
        }
        foreach (var item in callOnStart.CallActivateID)
        {
            ActivateID_OpenMenu(item);
        }
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
        if (menus.Count < 0)
        {
            Debug.LogWarning("THERE ARE NO MENUS IN THE SYSTEM");
            return;
        }

        var menuWithActiveID = menus.Where(x => x.IsGlobalMenu == false);


        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }


    #region Menu UI public methods
    //SHOULD DELETE SOON
    public void BackToPreviousActiveMenu() //Back to the previous menu
    {
        if(previousMenuActive == null) { return; }

        CloseAllMenu();

        var oldMenu = previousMenuActive;
        oldMenu.EnablePage(); //Enable the old active menu

        previousMenuActive = null;
        newMenuActive = oldMenu;

    }
    //public void CloseSelf()
    //{

    //}


    public void OpenMenu(string menuID) //Find the page with the same ID and open it
    {
        if (menus.Count < 0 || menus == null)
        {
            Debug.LogWarning("THERE ARE NO MENUS TO OPEN IN THE SYSTEM");
            return;
        }

        if (menus.Exists(x => x.GetUI_ID == menuID)) //If the menu ID exist in the list
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
        if(menus.Count < 0 || menus == null)
        {
            Debug.LogWarning("THERE ARE NO MENUS TO CLOSE IN THE SYSTEM");
            return;
        }

        var selectedMenu = menus.FirstOrDefault(script => script.GetUI_ID == menuID);

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

        var menuWithActiveID = menus.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.EnablePage();
        }
    }
    public void ActivateID_CloseMenu(string activateID) //Close all the menu with the same activateID
    {
        var menuWithActiveID = menus.Where(script => script.GetActivationIDListener == activateID);

        foreach (var item in menuWithActiveID)
        {
            item.DisablePage();
        }
    }

    public T FindComponentInUIMenu<T>(string menuID) //Find object in menu
    {
        if(menus.Exists(x => x.GetUI_ID == menuID))
        {
            GameObject selectedMenu = menus.FirstOrDefault(script => script.GetUI_ID == menuID).gameObject;
            T component = selectedMenu.GetComponentInChildren<T>(true);

            if(component != null)
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
        if (menus.Exists(x => x.GetUI_ID == menuID))
        {
            GameObject selectedMenu = menus.FirstOrDefault(script => script.GetUI_ID == menuID).gameObject;
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



    private List<UI_ButtonMenu> GetAllUIButtons()
    {
        IEnumerable<UI_ButtonMenu> buttons = FindObjectsOfType<UIAbstract>(true).OfType<UI_ButtonMenu>();
        return new List<UI_ButtonMenu>(buttons);
    }

















}
