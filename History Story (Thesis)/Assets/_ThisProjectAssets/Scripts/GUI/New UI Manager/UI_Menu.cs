using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ThesisLibrary;
using UnityEngine.Events;

public class UI_Menu : UIAbstract
{
    [SerializeField] private RectTransform menuPage;
    [SerializeField] private bool isSubMenu = false;

    public UnityEvent OnPageEnable;
    public UnityEvent OnPageDisable;

    public RectTransform GetMenuPage { get { return menuPage; } }
    public bool IsSubMenu { get { return isSubMenu; } }


    private void OnEnable()
    {
        OnPageEnable.Invoke();
    }
    private void OnDisable()
    {
        OnPageDisable.Invoke();
    }

    protected override void Start()
    {
        base.Start();

    }



    public override void EnablePage() //Open the page
    {
        if(menuPage == null)
        {
            Debug.LogError($"{gameObject.name}'s menu page is not assign");
            return;
        }
        menuPage.gameObject.SetActive(true);
    }
    public override void DisablePage() //Close the page
    {
        if (menuPage == null)
        {
            Debug.LogError($"{gameObject.name}'s menu page is not assign");
            return;
        }
        menuPage.gameObject.SetActive(false);
    }
}
