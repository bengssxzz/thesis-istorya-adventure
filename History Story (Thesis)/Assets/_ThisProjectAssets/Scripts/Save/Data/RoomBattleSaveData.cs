using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class RoomBattleSaveData 
{
    //Battle Room need to be save:
    //Is already trigger?
    //What is the desired battle when player enter the room?

    public int roomId;
    public bool desiredBattleNextEnter;
    public bool isAlreadyTrigger;


    //public RoomBattleSaveData(RoomSpawnerEnemy roomSpawner)
    //{
    //    roomId = roomSpawner.GetInstanceID();
    //    desiredBattleNextEnter = roomSpawner.GetNextDesiredBattleTrigger;
    //    isAlreadyTrigger = roomSpawner.IsAlreadyTriggerArea;
    //}
}
