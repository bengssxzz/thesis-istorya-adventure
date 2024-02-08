using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArtifactsObject : MonoBehaviour
{
    [SerializeField] private ArtifactsSO artifactsSo;
    [SerializeField] private SpriteRenderer spriteRenderer;

    private void OnEnable()
    {
        spriteRenderer.sprite = artifactsSo.artifactsSprite;
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        //Collect the artifacts
        if (collision.CompareTag("Player"))
        {
            GameManager.Instance.CollectArtifacts(artifactsSo);
            gameObject.SetActive(false);

            Debug.Log("YOU COLLECTED: " + artifactsSo.artifactName);
        }
    }









}
