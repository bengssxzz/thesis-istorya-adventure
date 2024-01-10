using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;


public class MenuController : MonoBehaviour
{
    [SerializeField] private GameObject defaultPage;
    [SerializeField] private List<GameObject> listOfPages;


    void Start()
    {

        ShowPage(defaultPage);
    }

    private void HideAllPages()
    {
        foreach (var item in listOfPages)
        {
            item.gameObject.SetActive(false);
        }
    }
    public void ShowPage(GameObject _page)
    {
        HideAllPages();

        GameObject pageToShow = listOfPages.FirstOrDefault(obj => obj == _page);
        pageToShow.SetActive(true);
    }


    //public void EasyMode()
    //{
    //    LevelManager.Instance.SetGameDifficulties(GameDifficulties.Easy);
    //    LevelManager.Instance.ChangeLevel(1);
    //}
    //public void NormalMode() 
    //{
    //    LevelManager.Instance.SetGameDifficulties(GameDifficulties.Normal);
    //    LevelManager.Instance.ChangeLevel(1);
    //}
    //public void HardMode()
    //{
    //    LevelManager.Instance.SetGameDifficulties(GameDifficulties.Hard);
    //    LevelManager.Instance.ChangeLevel(1);
    //}


    //public void SetDifficulties(int difficultIndex){
    //    GameManager.instance.SetDifficulties = (GameDifficulties)difficultIndex;
    //    GameManager.instance.ChangeScene(1);
    //}
    //public void MenuStateChange(int index){
    //    foreach (var menu in menus)
    //    {
    //        menu.gameObject.SetActive(false);
    //    }

    //    MenuState _set = (MenuState)index;

    //    menus[(int)_set].SetActive(true);
    //    switch (_set)
    //    {
    //        case MenuState.Main:
    //            break;
    //        case MenuState.Start:
    //            break;
    //        case MenuState.Journal:
    //            break;
    //        case MenuState.Option:
    //            break;
    //        default:
    //            break;
    //    }
    //}
}
