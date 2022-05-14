using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeleeWeapon : Item 
{
	Animator anim;
	public LayerMask enemyLayer;
	public float rayLength;
	
	public override void Use()
	{
		base.Use();
		Debug.Log("Use MeleeWeapon");
		FindObjectOfType<Animator>().SetTrigger("strike");
		
		/*
		RaycastHit2D hit = Physics2D.Raycast(transform.position, Vector2.right, rayLength, enemyLayer);
		if(hit.collider != null && hit.collider.gameObject.CompareTag("Enemy"))
		{
			Debug.Log("Sword Ray hit" + hit.collider.name);
		}
		*/
	}
	
	public override void Remove()
	{
		base.Remove();
		Debug.Log("Remove MeleeWeapon");
	}	
	
	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.gameObject.CompareTag("Enemy"))
		{
			Debug.Log("Sword hit an enemy");
			collision.gameObject.GetComponent<EnemyController>().Damage(amount);
		}
	}
}
