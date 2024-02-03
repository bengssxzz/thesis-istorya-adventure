using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class ChapterSceneSaveData
{
    /*What to save in the scene?
     * Save the pickup objects data
     * Save the battle trigger
     * Save the Cutscenes
     * Save the players: Position, data for specific scene, where player last saved in the scene
     * Maybe other data
     */

    //Save the data of the pick up objects
    public List<PickupObjectSaveData> pickupObjectSaveDatas;

    //Save the data of the room battle triggers
    public List<RoomBattleSaveData> roomBattleSaveDatas;


}
