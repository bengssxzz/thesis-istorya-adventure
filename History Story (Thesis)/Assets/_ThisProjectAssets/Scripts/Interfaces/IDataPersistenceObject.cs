using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDataPersistenceObject
{

    void LoadData(PlayerData data);
    void SaveData(ref PlayerData data); //Using ref key word to use the original value




}
