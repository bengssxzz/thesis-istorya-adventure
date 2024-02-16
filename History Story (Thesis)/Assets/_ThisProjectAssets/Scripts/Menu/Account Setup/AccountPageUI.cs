using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using MoreMountains.Tools;
using System;
using UnityEngine.SceneManagement;
using System.Linq;

public class AccountPageUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI playerName;
    [SerializeField] private TextMeshProUGUI playerId;

    [SerializeField] private TextMeshProUGUI characterStatsInfo;
    [SerializeField] private TextMeshProUGUI artifactsCollected;
    [SerializeField] private TextMeshProUGUI abilitiesCollected;
    [SerializeField] private TextMeshProUGUI totalPoints;


    [SerializeField] private MMTouchButton logoutBtn;
    [SerializeField] private MMTouchButton backupDataBtn;
    [SerializeField] private MMTouchButton retriveDataBtn;
    [SerializeField] private MMTouchButton closeAccountPage;



    private void OnEnable()
    {
        UpdateAccountPage();

        logoutBtn.ButtonReleased.AddListener(LogoutBtn);
        backupDataBtn.ButtonReleased.AddListener(CreateBackUpData);
        retriveDataBtn.ButtonReleased.AddListener(RetriveData);
        closeAccountPage.ButtonReleased.AddListener(CloseAccountPage);
    }


    private void UpdateAccountPage()
    {
        PlayerUserData userData = PlayfabManager.Instance.GetUserDataAccount();
        PlayerData gameSavedFile = SaveGameDataManager.Instance.LoadPlayerData();

        Debug.Log($"NAME: {userData.displayerName} || ID: {userData.userId}");

        playerName.text = userData.displayerName;
        playerId.text = userData.userId;

        characterStatsInfo.text = SetPlayerStats(gameSavedFile.playerStats);
        artifactsCollected.text = SetPlayerTotalArtifactsCollected(gameSavedFile.artifactsCollected.Count);
        abilitiesCollected.text = SetPlayerTotalAbilitiesCollected(gameSavedFile.abilitiesCollected.Count);
        totalPoints.text = SetPlayerTotalScore(gameSavedFile.chapterScores.Values.Sum());
    }

    #region SETTING A TEXT
    private string SetPlayerStats(EntityStatistics entityStats)
    {
        var setText = $"Health: {entityStats.maxHealth}\n" +
              $"Damage: {entityStats.maxDamage}\n" +
              $"Defense: {entityStats.maxDefense}\n" +
              $"Move Speed: {entityStats.maxMoveSpeed}\n" +
              $"Attack Speed: {entityStats.maxAttackSpeed}\n" +
              $"Critical Damage: {entityStats.maxCriticalDamage}\n" +
              $"Dodge Chance: {entityStats.maxDodgeChance}\n" +
              $"Critical Chance: {entityStats.maxCriticalChance}\n" +
              $"Life Steal: {entityStats.lifeSteal}";

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
        SaveGameDataManager.Instance.SavePlayerDataCloud();

        //SceneTransitionManager.Instance.SceneTransitionInstant(SceneManager.GetActiveScene().name);
    }

    private void RetriveData()
    {
        SaveGameDataManager.Instance.RequestRetrievePlayerData();

        SceneTransitionManager.Instance.SceneTransitionInstant(SceneManager.GetActiveScene().name);

    }
    #endregion





























}
