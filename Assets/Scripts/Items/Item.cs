using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour 
{
	public string itemName;
	public string itemDescription;
	public int itemCost;
	public bool rotate;
	public float amount; //consumable add health, weapon damage amount
	public enum rarity {legendary, rare, uncommon, common};
	public rarity itemRarity;
	
	public Sprite itemSprite;
	protected Inventory inventory;
	SpriteRenderer itemRend;
	
	
	public void Awake()
	{
		inventory = FindObjectOfType<Inventory>();
		itemRend = GetComponent<SpriteRenderer>();
		itemRend.sprite = itemSprite;
	}
	
	public virtual void Use()
	{
		Debug.Log("base use");
	}
	
	public virtual void Remove()
	{
		Debug.Log("base remove");
	}
	
}