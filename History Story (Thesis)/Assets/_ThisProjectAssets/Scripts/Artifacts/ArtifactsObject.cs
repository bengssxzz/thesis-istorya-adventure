using Cysharp.Threading.Tasks;
using System.Collections;
using System.Collections.Generic;
using ThesisLibrary;
using UnityEngine;

public class ArtifactsObject : BasePoints
{
    [SerializeField] private ArtifactsSO artifactsSo;
    [SerializeField] private SpriteRenderer spriteRenderer;

    [Tooltip("If the ability is already collected, instantiate this")]
    [SerializeField] private BasePoints[] alternativePoints;

    //private void OnEnable()
    //{
    //    spriteRenderer.sprite = artifactsSo.artifactsSprite;
    //}


    //private void OnTriggerEnter2D(Collider2D collision)
    //{
    //    //Collect the artifacts
    //    if (collision.CompareTag("Player"))
    //    {
    //        GameManager.Instance.CollectArtifacts(artifactsSo);
    //        gameObject.SetActive(false);

    //        Debug.Log("YOU COLLECTED: " + artifactsSo.artifactName);
    //    }
    //}


    protected override async void OnAwakeBehaviour()
    {
        base.OnAwakeBehaviour();

        spriteRenderer.sprite = artifactsSo.artifactsSprite;
        await UniTask.Delay(20);

        
        var alreadyCollected = GameManager.Instance.GetListOfCollectedArtifacts.Contains(artifactsSo);

        if (alreadyCollected)
        {
            if (alternativePoints.Length > 0)
            {
                var objectRandom = alternativePoints.RandomGetObject().gameObject;
                var newObject = ObjectPooling.Instance.GetObjectInPool("loot", objectRandom, transform.position, true);
                newObject.transform.position = transform.position;
                newObject.GetComponent<BasePoints>().GetAmountPoints = GetAmountPoints;
            }
            gameObject.SetActive(false);
            return;
        }
    }
    protected override void CollectedBehaviour(PlayerScript player, int points)
    {
        //Add points
        GameManager.Instance.AddCurrentChapterScore(points);
        GameManager.Instance.CollectArtifacts(artifactsSo);
        player.CollectFeedbackModified("Artifacts Collected: " + artifactsSo.artifactName);
    }

}



//public class ArtifactsObject : MonoBehaviour
//{
//    [SerializeField] private ArtifactsSO artifactsSo;
//    [SerializeField] private SpriteRenderer spriteRenderer;

//    private void OnEnable()
//    {
//        spriteRenderer.sprite = artifactsSo.artifactsSprite;
//    }


//    private void OnTriggerEnter2D(Collider2D collision)
//    {
//        //Collect the artifacts
//        if (collision.CompareTag("Player"))
//        {
//            GameManager.Instance.CollectArtifacts(artifactsSo);
//            gameObject.SetActive(false);

//            Debug.Log("YOU COLLECTED: " + artifactsSo.artifactName);
//        }
//    }
//}
