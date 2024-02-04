using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class ChapterSceneSaveData
{
    /*What to save in the scene?
     * Save the pickup objects data //DONE
     * Save the battle trigger //DONE
     * Save the Cutscenes //DONE
     * Maybe other data
     */

    //Save the data of the pick up objects
    public List<PickupObjectSaveData> pickupObjectSaveDatas;

    //Save the data of the room battle triggers
    public List<RoomBattleSaveData> roomBattleSaveDatas;

    //Save the data of the timeline trigger
    public List<TimelineCutscenesSaveData> timelineCutscenesSaveDatas;

}
