using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
	
	public float speed;
	Rigidbody2D bulletRigidbody;
	
	RangedWeapon colt;
	
	
    // Start is called before the first frame update
    void Awake()
    {
        bulletRigidbody = GetComponent<Rigidbody2D>();
		colt = FindObjectOfType<RangedWeapon>();
    }


	private void OnEnable()
	{
		bulletRigidbody.AddForce(transform.up * speed);
		Invoke("Disable", 4f);
	}
	
	private void Disable()
	{
		gameObject.SetActive(false);
		//Destroy(gameObject);
	}
	
	
    // Update is called once per frame
    void Update()
    {
        
    }
	
	private void OnTriggerEnter2D(Collider2D collision)
	{
		if (collision.gameObject.CompareTag("Enemy"))
		{
			//Debug.Log("hit an enemy");
			collision.gameObject.GetComponent<EnemyController>().Damage(colt.amount);
			Invoke("Disable", 0.001f);
		}
	}
	
	private void OnDisable()
	{
		CancelInvoke();
	}
}