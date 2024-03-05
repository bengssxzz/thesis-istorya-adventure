using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThesisLibrary;

[DisallowMultipleComponent]
public class DropLoot : MonoBehaviour
{
    [System.Serializable]
    private class Loot
    {
        [Tooltip("Loot prefab to be dropped when entity died")]
        public ObjectPoolerInfo lootPrefab;
        [Tooltip("Check if you want to randomize the amount to drop, else fix amount loot drop and the minAmount will no longer use")]
        public bool randomAmountDrop = false;

        [Range(1, 100)] public int minAmount = 1, maxAmount = 1;

        [Tooltip("Drop loot chance")]
        [Range(0.0f, 100.0f)] public float dropChance;
    }


    [Header("Loot")]
    [SerializeField] private float dropForce = 150f;
    [SerializeField] private List<Loot> listOfDropLoot;

    private GameObject[] AmountItemDropLoot(Loot itemLoot)
    {
        int amount = itemLoot.randomAmountDrop ? ThesisUtility.RandomGetAmount(itemLoot.minAmount, itemLoot.maxAmount) : itemLoot.maxAmount;
        List<GameObject> dropList = new List<GameObject>();

        for (int i = 0; i < amount; i++)
        {
            //GameObject _loot = ObjectPooling.Instance.GetObjectInPool("loot", itemLoot.lootPrefab, transform.position, true);
            GameObject _loot = ObjectPoolingManager.Instance.GetItemFromPool(itemLoot.lootPrefab);
            _loot.SetActive(true);
            dropList.Add(_loot);
        }

        return dropList.ToArray();
    }
    public void LootDrop() //Loot to drop
    {
        if(listOfDropLoot == null && listOfDropLoot.Count == 0)
        {
            return;
        }

        foreach (var itemLoot in listOfDropLoot)
        {
            if (ThesisUtility.RandomGetChanceBool(itemLoot.dropChance / 100))
            {
                //Drop
                var loots = AmountItemDropLoot(itemLoot);

                if (loots.Length > 0)
                {
                    foreach (var lootItem in loots)
                    {
                        Vector2 randomDirection = ThesisUtility.RandomGetVector2Direction();

                        lootItem.transform.position = transform.position;
                        Rigidbody2D rb = lootItem.GetComponent<Rigidbody2D>();
                        if(rb != null)
                        {
                            rb.drag = 10;
                            rb.AddForce(randomDirection * dropForce * Time.deltaTime, ForceMode2D.Impulse);
                        }
                        
                    }
                }
            }
        }
    }



}
