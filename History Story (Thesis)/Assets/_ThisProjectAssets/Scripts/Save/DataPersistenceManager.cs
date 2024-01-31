using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using System;


public struct MyStruct
{

}

public class DataPersistenceManager : Singleton<DataPersistenceManager>
{
    private PlayerData playerData;


    private List<IDataPersistenceObject> listOfPersistanceObject;




    private void Start()
    {
        listOfPersistanceObject = GetListAllPersistanceData(); //Get the list of interface in the scene

        LoadPlayerData();
    }

    public void NewPlayerData()
    {
        Debug.Log("NEW DATA IS BEEN CREATED");
        playerData = new PlayerData();
    }

    public void LoadPlayerData()
    {
        if(playerData == null)
        {
            Debug.LogWarning("THERE WAS NO DATA FOUND");
            NewPlayerData();
        }


        foreach (IDataPersistenceObject data in listOfPersistanceObject)
        {
            data.LoadData(playerData);
        }

        Debug.Log("LOADED DATA IS COMPLETED");
    }

    public void SavePlayerData() //Save data
    {
        foreach (IDataPersistenceObject data in listOfPersistanceObject)
        {
            data.SaveData(ref playerData);
        }


        ES3.Save("playerData", playerData, "data.thesis");

        Debug.Log("PLAYER DATA SAVED");
    }




    private List<IDataPersistenceObject> GetListAllPersistanceData()
    {
        IEnumerable<IDataPersistenceObject> dataPersistenceObjects = FindObjectsOfType<MonoBehaviour>().OfType<IDataPersistenceObject>();
        return new List<IDataPersistenceObject>(dataPersistenceObjects);
    }








    private void OnApplicationQuit()
    {
        SavePlayerData();
    }

}
