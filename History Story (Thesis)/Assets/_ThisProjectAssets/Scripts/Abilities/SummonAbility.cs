using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;
using Cysharp.Threading.Tasks;

[CreateAssetMenu(fileName = "New Summon Ability", menuName = "Abilities/Summon")]
public class SummonAbility : AbilityScript
{
    [Header("Summon Ability")]
    public VisualSpawner visualSummon;
    public AIEntity summonPrefab;
    [Range(1, 99)] public int spawnCount = 1;
    public float summoningArea;




    protected override async UniTask PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.PreCastingBehaviour(mono, entity);
        Debug.Log("Precasting");
        entity.IsCanMove = false;
    }
    protected override async UniTask CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.CastingBehaviour(mono, entity);
        Debug.Log("casting");

        for (int i = 0; i < spawnCount; i++)
        {
            await UniTask.Delay(400);
            Debug.Log("Working");
            Vector2 spawnPosition = (Vector2)entity.transform.position + (ThesisUtility.RandomGetVector2Direction() * summoningArea);

            //To summon object
            var _visualSpawner = ObjectPooling.Instance.GetObjectInPool("ability", visualSummon.gameObject, Vector3.zero, false);
            _visualSpawner.transform.position = spawnPosition;
            _visualSpawner.SetActive(true);

            //Set summon entity logic

            _visualSpawner.GetComponent<VisualSpawner>().SetSpawn(summonPrefab.gameObject);
        }

    }
    protected override async UniTask FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        await base.FinishedCastingBehaviour(mono, entity);
        Debug.Log("Finish casting");

        entity.IsCanMove = true;
    }


}
//public class SummonAbility : AbilityScript
//{
//    [Header("Summon Ability")]
//    public VisualSpawner visualSummon;
//    public AIEntity summonPrefab;
//    [Range(1,99)] public int spawnCount = 1;
//    public float summoningArea;




//    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.PreCastingBehaviour(mono, entity);
//        Debug.Log("Precasting");
//        entity.IsCanMove = false;
//    }
//    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.CastingBehaviour(mono, entity);
//        Debug.Log("casting");

//        for (int i = 0; i < spawnCount; i++)
//        {
//            yield return new WaitForSeconds(0.4f);
//            Debug.Log("Working");
//            Vector2 spawnPosition = (Vector2) entity.transform.position + (ThesisUtility.RandomGetVector2Direction() * summoningArea);

//            //To summon object
//            var _visualSpawner = ObjectPooling.Instance.GetObjectInPool("ability", visualSummon.gameObject, Vector3.zero);
//            _visualSpawner.transform.position = spawnPosition;

//            //Set summon entity logic

//            _visualSpawner.GetComponent<VisualSpawner>().SetSpawn(summonPrefab.gameObject);
//        }

//    }
//    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
//    {
//        yield return base.FinishedCastingBehaviour(mono, entity);
//        Debug.Log("Finish casting");

//        entity.IsCanMove = true;
//    }


//}
