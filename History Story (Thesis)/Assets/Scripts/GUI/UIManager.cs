using System.Collections;
using System.Collections.Generic;
using UnityEngine;


//public enum GUIState
//{
//    InGame,
//    Inventory,
//    Upgradable,
//    DialogMode,
//    QandA
//}

public class UIManager : MonoBehaviour
{
    public enum GUIState
    {
        HideAll,
        InGame,
        Inventory,
        Upgradable,
        DialogMode,
        QandA
    }


    [SerializeField] private Transform PlayerGUI;

    private MobileUITouchController touchController;
    private UISkillBag skillBag;
    private UpgradeStatsSystem upgradeStats;
    private PlayerUI playerUI;
    private DialogUI dialogUI;
    private QuestionaireUI QandAUI;


    private GUIState uiState = GUIState.InGame;
    public GUIState SetUIState 
    { 
        get { return uiState; } 
        set 
        {
            uiState = value;
            ChangeGUIState(value); 
        } 
    }


    public static UIManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
        }
        else
        {
            Destroy(gameObject);
        }

        foreach (Transform uiItem in PlayerGUI.transform)
        {
            uiItem.gameObject.SetActive(true);
        }

        touchController = GetComponentInChildren<MobileUITouchController>();
        skillBag = GetComponentInChildren<UISkillBag>();
        upgradeStats = GetComponentInChildren<UpgradeStatsSystem>();
        playerUI = GetComponentInChildren<PlayerUI>();
        dialogUI = GetComponentInChildren<DialogUI>();
        QandAUI = GetComponentInChildren<QuestionaireUI>();


    }

    private void Start()
    {
        //Initialize();
        ChangeGUIState(uiState);
    }

    private void Initialize()
    {
        touchController.Show();
        skillBag.Show();
        upgradeStats.Show();
        playerUI.Show();
        dialogUI.Show();
    }

    public void SetGUIState(GUIState state)
    {
        SetUIState = state;
    }

    private void ChangeGUIState(GUIState state)
    {
        HideAllUI();

        switch (state)
        {
            case GUIState.HideAll:
                HideAllUI();
                break;
            case GUIState.InGame:
                touchController.Show();
                playerUI.Show();
                break;
            case GUIState.Inventory:
                skillBag.Show();
                break;
            case GUIState.Upgradable:
                upgradeStats.Show();
                break;
            case GUIState.DialogMode:
                dialogUI.Show();
                break;
            case GUIState.QandA:
                QandAUI.Show();
                break;
            
        }
    }

    private void HideAllUI()
    {
        touchController.Hide();
        skillBag.Hide();
        upgradeStats.Hide();
        playerUI.Hide();
        dialogUI.Hide();
        QandAUI.Hide();
    }
}
