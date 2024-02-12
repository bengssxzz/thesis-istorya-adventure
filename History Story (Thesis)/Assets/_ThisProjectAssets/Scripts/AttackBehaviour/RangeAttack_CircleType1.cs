using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RangeAttack_CircleType1 : BaseAttackBehaviour
{
    [SerializeField] private int circleRayCount;
    [SerializeField] [Range(0, 360)] private float viewAngle;

    float angleStep = 0;
    float startAngle = 0; // Start at half the view angle to the left of the right direction

    protected override IEnumerator FireBehaviourForLoop()
    {
        angleStep = viewAngle / (circleRayCount);
        startAngle = -viewAngle / 2;

        for (int i = 0; i < GetAmountToInt; i++)
        {
            yield return new WaitForSeconds(intervalShoot);

            float currentAngle = startAngle;

            for (int j = 0; j < circleRayCount; j++)
            {
                // Calculate the x and y direction based on the current angle
                float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
                float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

                // Apply the direction from the object's right vector
                Vector2 bulletDir = new Vector2(dirX, dirY);

                //var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);
                var dir = GetAttackController.GetAttackHolder.TransformDirection(bulletDir);

                // Instantiate the bullet and set its position and direction
                //GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                //newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, dir, 5, GetAttackController.GetMyEnemyLayer);
                //newBul.transform.position = GetAttackController.GetAttackHolder.position;
                //newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;

                InitializeProjectile(transform.position, dir);

                // Increment the angle for the next bullet
                currentAngle += angleStep;
            }
            startAngle = -viewAngle / 2; // Reset the start angle for the next volley
        }
    }

    protected override IEnumerator FireBehaviourWhileLoop()
    {
        angleStep = viewAngle / (circleRayCount);
        startAngle = -viewAngle / 2;

        do
        {
            yield return new WaitForSeconds(intervalShoot);

            float currentAngle = startAngle;

            for (int j = 0; j < circleRayCount; j++)
            {
                // Calculate the x and y direction based on the current angle
                float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
                float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

                // Apply the direction from the object's right vector
                Vector2 bulletDir = new Vector2(dirX, dirY);

                //var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);
                var dir = GetAttackController.GetAttackHolder.TransformDirection(bulletDir);

                // Instantiate the bullet and set its position and direction
                //GameObject newBul = ObjectPooling.Instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
                //newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, dir, 5, GetAttackController.GetMyEnemyLayer);
                //newBul.transform.position = GetAttackController.GetAttackHolder.position;
                //newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;

                InitializeProjectile(transform.position, dir);

                // Increment the angle for the next bullet
                currentAngle += angleStep;
            }
            startAngle = -viewAngle / 2; // Reset the start angle for the next volley


        } while (!DoneTimer());
    }











    //[SerializeField] private Projectile projectilePrefab;
    //[SerializeField] private int countShoot;
    //[SerializeField] private float overrideTimer = 0;
    //[SerializeField] private float intervalShoot;

    //[SerializeField] private int circleRayCount;
    //[SerializeField] [Range(0, 360)] private float viewAngle;




    //protected override IEnumerator FireBehaviourForLoop()
    //{
    //    float angleStep = viewAngle / (circleRayCount);
    //    float startAngle = -viewAngle / 2; // Start at half the view angle to the left of the right direction

    //    attackIsPlaying = true;

    //    for (int i = 0; i < countShoot; i++)
    //    {
    //        yield return new WaitForSeconds(intervalShoot);

    //        float currentAngle = startAngle;

    //        for (int j = 0; j < circleRayCount; j++)
    //        {
    //            // Calculate the x and y direction based on the current angle
    //            float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
    //            float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

    //            // Apply the direction from the object's right vector
    //            Vector2 bulletDir = new Vector2(dirX, dirY);

    //            //var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);
    //            var dir = GetAttackController.GetAttackHolder.TransformDirection(bulletDir);

    //            // Instantiate the bullet and set its position and direction
    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(GetAttackController.GetThisEntity, dir, 5, GetAttackController.GetMyEnemyLayer);
    //            newBul.transform.position = GetAttackController.GetAttackHolder.position;
    //            newBul.transform.rotation = GetAttackController.GetAttackHolder.rotation;

    //            // Increment the angle for the next bullet
    //            currentAngle += angleStep;
    //        }
    //        startAngle = -viewAngle / 2; // Reset the start angle for the next volley
    //    }

    //    attackIsPlaying = false;
    //}











    //protected override IEnumerator FireBehaviour()
    //{
    //    float angleStep = viewAngle / (circleRayCount);
    //    float startAngle = -viewAngle / 2; // Start at half the view angle to the left of the right direction

    //    for (int i = 0; i < countShoot; i++)
    //    {
    //        yield return new WaitForSeconds(intervalShoot);

    //        float currentAngle = startAngle;

    //        for (int j = 0; j < circleRayCount; j++)
    //        {
    //            // Calculate the x and y direction based on the current angle
    //            float dirX = Mathf.Cos((currentAngle * Mathf.PI) / 180);
    //            float dirY = Mathf.Sin((currentAngle * Mathf.PI) / 180);

    //            // Apply the direction from the object's right vector
    //            Vector2 bulletDir = new Vector2(dirX, dirY);

    //            //var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);
    //            var dir = attackController.GetAttackHolder.TransformDirection(bulletDir);

    //            // Instantiate the bullet and set its position and direction
    //            GameObject newBul = ObjectPooling.instance.GetObjectInPool("bullet", projectilePrefab.gameObject);
    //            newBul.GetComponent<Projectile>().InitializeProjectile(null, dir, 5, attackController.GetMyEnemyLayer);
    //            newBul.transform.position = attackController.GetAttackHolder.position;
    //            newBul.transform.rotation = attackController.GetAttackHolder.rotation;

    //            // Increment the angle for the next bullet
    //            currentAngle += angleStep;
    //        }
    //        startAngle = -viewAngle / 2; // Reset the start angle for the next volley
    //    }
    //}
}
