using UnityEngine;
using UnityEngine.Playables;

public class UnlockChapterReciever : MonoBehaviour, INotificationReceiver
{
    public void OnNotify(Playable origin, INotification notification, object context)
    {
        Debug.Log(notification);
        if (notification is UnlockChapterMarker marker)
        {
            var sceneName = marker.sceneName;

            GameManager.Instance.UnlockSceneChapter(sceneName);
        }
    }
}
