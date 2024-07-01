using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using MoreMountains.Tools;
using System;
using UnityEngine.SceneManagement;
using System.Linq;
using UnityEngine.UI;

public class AccountPageUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI playerName;
    [SerializeField] private TextMeshProUGUI playerId;

    [SerializeField] private TextMeshProUGUI characterStatsInfo;
    [SerializeField] private TextMeshProUGUI artifactsCollected;
    [SerializeField] private TextMeshProUGUI abilitiesCollected;
    [SerializeField] private TextMeshProUGUI totalPoints;

    [SerializeField] private TMP_Dropdown titleDropDown;


    [SerializeField] private MMTouchButton logoutBtn;
    [SerializeField] private MMTouchButton backupDataBtn;
    [SerializeField] private MMTouchButton retriveDataBtn;

    [SerializeField] private MMTouchButton closeAccountPage;


    private string selectedTitle = "Titan Gel1";



    private async void OnEnable()
    {
        UpdateAccountPage();

        try
        {
            var loadTitle = await PlayfabManager.Instance.GetDataInUserCloud("title");

            selectedTitle = loadTitle;
        }
        finally
        {
            selectedTitle = "";
        }
    }
    private void OnDisable()
    {
        //Save title
        selectedTitle = titleDropDown.options[titleDropDown.value].text;

        PlayfabManager.Instance.SetDataInUserCloud("title", selectedTitle, true).Forget();
    }

    private void Start()
    {
        titleDropDown.onValueChanged.AddListener(DropdownChanged);

        logoutBtn.ButtonReleased.AddListener(LogoutBtn);
        backupDataBtn.ButtonReleased.AddListener(CreateBackUpData);
        retriveDataBtn.ButtonReleased.AddListener(RetriveData);
        closeAccountPage.ButtonReleased.AddListener(CloseAccountPage);
    }

    private void DropdownChanged(int value)
    {
        Debug.Log("Selected: " + value + " = " + titleDropDown.options[value].text);
    }

    private void UpdateAccountPage()
    {
        PlayerUserData userData = PlayfabManager.Instance.GetUserDataAccount();
        PlayerData gameSavedFile = SaveGameDataManager.Instance.LoadPlayerData();


        if (userData != null)
        {
            playerName.text = userData.displayerName;
            playerId.text = userData.userId;
        }
        else
        {
            Debug.LogError("FAILED TO OPEN THE ACCOUNT PAGE: THERE ARE NO SAVED USER DATA");
            PlayfabManager.Instance.LogoutAccount();
        }

        if (gameSavedFile != null)
        {
            characterStatsInfo.text = SetPlayerStats(gameSavedFile.playerStats);
            //artifactsCollected.text = SetPlayerTotalArtifactsCollected(gameSavedFile.artifactsCollected.Count);
            artifactsCollected.text = SetPlayerTotalArtifactsCollected(gameSavedFile.artifactsCollected_ID.Count);
            abilitiesCollected.text = SetPlayerTotalAbilitiesCollected(gameSavedFile.abilitiesCollected.Count);
            totalPoints.text = SetPlayerTotalScore(gameSavedFile.chapterScores.Values.Sum());

            //Dropdown
            titleDropDown.ClearOptions();
            titleDropDown.AddOptions(new List<string>() { "None" });
            titleDropDown.AddOptions(GameManager.Instance.GetListOfCollectedTitles); //Temp

            // Find the index of the selected title
            var findIndex = titleDropDown.options.FindIndex(option => option.text == selectedTitle);
            // Set the dropdown value to the found index
            titleDropDown.value = findIndex != -1 ? findIndex : 0; // Default to 0 if the title is not found


            //if (gameSavedFile.titlesCollected != null || gameSavedFile.titlesCollected.Count > 0)
            //{
            //    foreach (var title in gameSavedFile.titlesCollected)
            //    {
            //        titleDropDown.AddOptions(gameSavedFile.titlesCollected);
            //    }
            //}
        }
        else
        {
            characterStatsInfo.text = SetPlayerStats(null);
            artifactsCollected.text = SetPlayerTotalArtifactsCollected(0);
            abilitiesCollected.text = SetPlayerTotalAbilitiesCollected(0);
            totalPoints.text = SetPlayerTotalScore(0);
        }


    }

    #region SETTING A TEXT
    private string SetPlayerStats(EntityStatistics entityStats)
    {
        float maxHealth = 0;
        float maxDamage = 0;
        float maxDefense = 0;
        float maxMoveSpeed = 0;
        float maxAttackSpeed = 0;
        float maxCriticalDamage = 0;
        float maxDodgeChance = 0;
        float maxCriticalChance = 0;
        float lifeSteal = 0;

        if(entityStats != null)
        {
            maxHealth = entityStats.maxHealth;
            maxDamage = entityStats.maxDamage;
            maxDefense = entityStats.maxDefense;
            maxMoveSpeed = entityStats.maxMoveSpeed;
            maxAttackSpeed = entityStats.maxAttackSpeed;
            maxCriticalDamage =  entityStats.maxCriticalDamage;
            maxDodgeChance =  entityStats.maxDodgeChance;
            maxCriticalChance =  entityStats.maxCriticalChance;
            lifeSteal =  entityStats.lifeSteal;
        }

        var setText = $"Health: {maxHealth}\n" +
                      $"Damage: {maxDamage}\n" +
                      $"Defense: {maxDefense}\n" +
                      $"Move Speed: {maxMoveSpeed}\n" +
                      $"Attack Speed: {maxAttackSpeed}\n" +
                      $"Critical Damage: {maxCriticalDamage}\n" +
                      $"Dodge Chance: {maxDodgeChance}\n" +
                      $"Critical Chance: {maxCriticalChance}\n" +
                      $"Life Steal: {lifeSteal}";

        return setText;
    }
    private string SetPlayerTotalArtifactsCollected(int totalArtifactsCollected)
    {
        var setText = $"Artifacts Collected: {totalArtifactsCollected}";

        return setText;
    }
    private string SetPlayerTotalAbilitiesCollected(int totalAbilitiesCollected)
    {
        var setText = $"Abilities Collected: {totalAbilitiesCollected}";

        return setText;
    }
    private string SetPlayerTotalScore(int totalChapterScores)
    {
        var setText = $"Total Points: {totalChapterScores}";

        return setText;
    }
    #endregion

    #region BUTTONS
    private void CloseAccountPage()
    {
        UI_Manager.Instance.OpenMenu("MainPage Menu");
    }

    private void LogoutBtn()
    {
        PlayfabManager.Instance.LogoutAccount();
        UI_Manager.Instance.CloseMenu("AccountPage");
        UI_Manager.Instance.OpenMenu("AccountSetup Menu");
    }

    private void CreateBackUpData()
    {
        PlayfabManager.Instance.SavePlayerDataCloud();
    }

    private async void RetriveData()
    {
        try
        {
            await PlayfabManager.Instance.RequestRetrievePlayerData();
            GameManager.Instance.LoadPlayerData();
            SceneTransitionManager.Instance.SceneTransitionInstant(SceneManager.GetActiveScene().name);
        }
        catch (Exception ex)
        {
            Debug.LogError("Error retrieving player data: " + ex.Message);
        }
    }
    #endregion





























}
