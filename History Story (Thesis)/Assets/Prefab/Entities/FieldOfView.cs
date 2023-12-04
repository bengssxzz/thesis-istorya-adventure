using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FieldOfView : MonoBehaviour
{
    private void Start()
    {
        Mesh mesh = new Mesh();
        GetComponent<MeshFilter>().mesh = mesh;

        float fov = 90f;
        Vector3 origin = Vector3.zero;
        int rayCount = 50;
        float angle = 0f;
        float angleIncrease = fov / rayCount;
        float viewDistance = 50f;

        Vector3[] vertices = new Vector3[rayCount + 1 + 1];
        Vector2[] uv = new Vector2[vertices.Length];
        int[] triangles = new int[rayCount * 3];

        vertices[0] = origin;

        int vertexIndex = 1;
        int triangleIndex = 0;

        for (int i = 0; i < rayCount; i++)
        {
            Vector3 vertex;

            float angleRad = angle * (Mathf.PI / 180f);
            Vector3 vector = new Vector3(Mathf.Cos(angleRad), Mathf.Sin(angleRad));
            
            RaycastHit2D raycastHit2D = Physics2D.Raycast(origin, vector, viewDistance);
            if(raycastHit2D.collider == null)
            {
                //No hit
                angleRad = angle * (Mathf.PI / 180f);
                vector = new Vector3(Mathf.Cos(angleRad), Mathf.Sin(angleRad));
                vertex = origin + vector * viewDistance;
            }
            else
            {
                //Hit something
                vertex = raycastHit2D.point;
            }
            
            vertices [vertexIndex] = vertex;

            if(i > 0)
            {
                triangles[triangleIndex + 0] = 0;
                triangles[triangleIndex + 1] = vertexIndex - 1;
                triangles[triangleIndex + 2] = vertexIndex;
                triangleIndex += 3;
            }

            vertexIndex++;
            angle -= angleIncrease;

        }

        mesh.vertices = vertices;
        mesh.uv = uv;
        mesh.triangles = triangles;

    }
}
