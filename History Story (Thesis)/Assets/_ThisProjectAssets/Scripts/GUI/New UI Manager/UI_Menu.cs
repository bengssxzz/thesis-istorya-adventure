using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using ThesisLibrary;
using UnityEngine.Events;

public class UI_Menu : UIAbstract
{
    [SerializeField] private RectTransform menuPage;
    [SerializeField] protected bool onStartMenu = false;


    public UnityEvent OnPageEnable;
    public UnityEvent OnPageDisable;

    public bool IsOnStartMenu { get { return onStartMenu; } }
    public string GetMenuID { get { return menuID; } }
    public RectTransform GetMenuPage { get { return menuPage; } }



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
        menuPage.gameObject.SetActive(true);
    }
    public override void DisablePage() //Close the page
    {
        menuPage.gameObject.SetActive(false);
    }
}
