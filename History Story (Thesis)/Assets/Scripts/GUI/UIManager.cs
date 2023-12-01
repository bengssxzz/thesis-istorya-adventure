using System.Collections;
using System.Collections.Generic;
using System.Linq;
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

    public MobileUITouchController touchController { get; private set; }
    public AbilityInventory abilityInventory { get; private set; }
    public UpgradeStatsSystem upgradeStats{ get; private set; }
    public PlayerUI playerUI{ get; private set; }
    public DialogUI dialogUI{ get; private set; }
    public QuestionaireUI QandAUI{ get; private set; }


    private List<UIPages> pages = new List<UIPages>();

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


        touchController = GetComponentInChildren<MobileUITouchController>(true);
        abilityInventory = GetComponentInChildren<AbilityInventory>(true);
        upgradeStats = GetComponentInChildren<UpgradeStatsSystem>(true);
        playerUI = GetComponentInChildren<PlayerUI>(true);
        dialogUI = GetComponentInChildren<DialogUI>(true);
        QandAUI = GetComponentInChildren<QuestionaireUI>(true);

        pages = transform.GetComponentsInChildren<UIPages>(true).ToList();
    }

    private void Start()
    {
        HideAllUI();
        ChangeGUIState(uiState);
    }

    public void SetGUIState(GUIState state = GUIState.InGame)
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
                touchController.UIEnabled();
                playerUI.UIEnabled();
                break;
            case GUIState.Inventory:
                abilityInventory.UIEnabled();
                break;
            case GUIState.Upgradable:
                upgradeStats.UIEnabled();
                break;
            case GUIState.DialogMode:
                dialogUI.UIEnabled();
                break;
            case GUIState.QandA:
                QandAUI.UIEnabled();
                break;
            
        }
    }

    private void HideAllUI()
    {
        foreach (var page in pages)
        {
            page.UIDisabled();
        }
    }
}
