using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Mactan Shield", menuName = "Abilities/Mactan Shield")]
public class MactanShieldAbility : AbilityScript
{
    [Space(15)]
    [Header("Mactan Shield Ability")]
    [SerializeField] private Projectile projectile;

    public float damageReductionPercentage;
    public float time;
    private int circleRayCount = 30;
    float angleStep = 0;
    float startAngle = 0;

    private float normalDefense;

    protected override IEnumerator PreCastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.PreCastingBehaviour(mono, entity);

        //Save the original defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            normalDefense = entity.GetEntityStats.defense;
        }
        else
        {
            Debug.LogError("ReducedDamageAbility : Unable to retrieve entity stats for defense reduction");
        }
    }
    protected override IEnumerator CastingBehaviour(MonoBehaviour mono, Entities entity)
    {
        yield return base.CastingBehaviour(mono, entity);

        //modify defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedDefense(normalDefense + damageReductionPercentage);
        }
        else
        {
            Debug.LogError("ReducedDamageAbility : Unable to modify entity stats for defense stat");
        }

        yield return new WaitForSecondsRealtime(time);
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

            Vector2 bulletDir = new Vector2 (dirX, dirY);

            var dir = entity.Attack_Controller.GetAttackHolder.TransformDirection(bulletDir);
            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectile.gameObject);
            newBul.GetComponent<Projectile>().InitializeProjectile(entity, dir, 5, entity.Attack_Controller.GetMyEnemyLayer);
            newBul.transform.position = entity.transform.position;

            currentAngle += 360f / circleRayCount;

            // Optionally, if you want to limit the angle to a full circle
            if (currentAngle >= 360f)
            {
                currentAngle -= 360f;
            }
        }
        startAngle = -360 / 2;


        //set to normal defense stat
        if (entity != null && entity.GetEntityStats != null)
        {
            entity.GetEntityStats.ModifiedDefense(normalDefense);
        }
        else
        {
            Debug.LogError("ReduceDamageAbility: Unable to reset defense stat to normal.");
        }


    }

}
