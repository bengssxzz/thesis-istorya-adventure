using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MoreMountains.Feedbacks;
using MoreMountains.FeedbacksForThirdParty;
using ThesisLibrary;

[CreateAssetMenu(fileName = "Mactan Shield", menuName = "Abilities/Mactan Shield")]
public class MactanShieldAbility : AbilityScript
{

    [Space(15)]
    [Header("Mactan Shield Ability")]
    [SerializeField] private Projectile projectile;

    [Range(0, 100)]public float addDefensePercentage;
    public float time;
    private int circleRayCount = 30;
    float startAngle = 0;

    //private float normalDefense;

    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);


    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //Kung gusto mag add ng defense, For example you want to add 40% 
        var entityDefense = entity.GetEntityStats.maxDefense;
        var calculateDefense = ThesisUtility.ComputeAddedValueWithPercentage(entityDefense, addDefensePercentage);
        entity.GetEntityStats.TempModifiedDefense(calculateDefense, time).ConfigureAwait(false); //Modify defence

        yield return new WaitForSeconds(time);
    }

    protected override IEnumerator FinishedCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.FinishedCastingBehaviour(mono, entity);

        float currentAngle = startAngle;


        for (int j = 0; j < circleRayCount; j++)
        {
            // Convert angle to radians
            float radians = currentAngle * Mathf.Deg2Rad;

            float dirX = Mathf.Cos(radians);
            float dirY = Mathf.Sin(radians);

            Vector2 bulletDir = new Vector2(dirX, dirY);

            var dir = entity.GetAttack_Controller.GetAttackHolder.TransformDirection(bulletDir);
            GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectile.gameObject);
            newBul.GetComponent<Projectile>().InitializeProjectile(entity, dir, 5, entity.GetAttack_Controller.GetMyEnemyLayer);
            newBul.transform.position = entity.transform.position;

            currentAngle += 360f / circleRayCount;

            // Optionally, if you want to limit the angle to a full circle
            if (currentAngle >= 360f)
            {
                currentAngle -= 360f;
            }
        }
        startAngle = -360 / 2;
    }

}
