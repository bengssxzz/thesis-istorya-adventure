using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;

public enum MenuState
{
    Main,
    Start,
    Journal,
    Option
}
public class MenuController : MonoBehaviour
{
    

    private MenuState defaultMenuState = MenuState.Main;
    private List<GameObject> menus = new List<GameObject>();

    void Start()
    {
        //Debug.Log(transform.childCount.ToString());
        foreach (Transform menu in transform)
        {
            menus.Add(menu.gameObject);
        }

        MenuStateChange((int)defaultMenuState);
    }
    
    public void SetDifficulties(int difficultIndex){
        GameManager.instance.SetDifficulties = (GameDifficulties)difficultIndex;
        GameManager.instance.ChangeScene(1);
    }
    public void MenuStateChange(int index){
        foreach (var menu in menus)
        {
            menu.gameObject.SetActive(false);
        }

        MenuState _set = (MenuState)index;

        menus[(int)_set].SetActive(true);
        switch (_set)
        {
            case MenuState.Main:
                break;
            case MenuState.Start:
                break;
            case MenuState.Journal:
                break;
            case MenuState.Option:
                break;
            default:
                break;
        }
    }
}
