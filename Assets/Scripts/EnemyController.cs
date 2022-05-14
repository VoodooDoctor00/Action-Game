using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour
{
	public float maxHealth;
	float health;
	public float exp;
	public int money;
	PlayerController player;
	public float iframeTime = 0.3f;
	float iframe;
	
	public enum enemystates {chase, attack};
	public enemystates currentState;
	
	Animator anim;
	GameController cont;
	Rigidbody2D enemyRigidbody;
	
	public float timeBetweenAttacks;
	float cools;
	public float speed;
	int dir;
	public float attackRange;
	float distance;
	
	SpriteRenderer rend;
	public GameObject meleeCollider;
	
	
	private void Awake()
    {
        player = FindObjectOfType<PlayerController>();
		cont = FindObjectOfType<GameController>();
		anim = GetComponent<Animator>();
		enemyRigidbody = GetComponent<Rigidbody2D>();
		rend = GetComponent<SpriteRenderer>();
		
		health = maxHealth;
		iframe = iframeTime;
		cools = timeBetweenAttacks;
    }
	
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (iframe > 0) iframe -= Time.deltaTime;
		if (cools > 0) cools -= Time.deltaTime;
		
		switch (currentState)
		{
			case (enemystates.chase):
				Chase();
				break;
			case (enemystates.attack):
				Attack();
				break;
		}
		anim.SetInteger("dir", dir);
    }
	
	void Chase()
	{
		distance = Vector2.Distance(transform.position, player.transform.position);
		
		if (player.transform.position.y < transform.position.y)
		{
			dir = 0;
			meleeCollider.transform.localPosition = new Vector3(0, 0, 0);
		}
		else if (player.transform.position.x > transform.position.x)
		{
			rend.flipX = false;
			dir = 1;
			meleeCollider.transform.localPosition = new Vector3(0.3f, 0.2f, 0);
		}
		else if (player.transform.position.x < transform.position.x)
		{
			rend.flipX = true;
			dir = 1;
			meleeCollider.transform.localPosition = new Vector3(-0.3f, 0.2f, 0);			
		}
		else if (player.transform.position.y > transform.position.y)
		{
			dir = 2;
			meleeCollider.transform.localPosition = new Vector3(0, 0.5f, 0);			
		}
		
		
		if (distance > attackRange)
		{
			Vector3 direction = player.transform.position - transform.position;
			enemyRigidbody.AddForce(direction * speed * Time.deltaTime);
		}
		
		else
		{
			if (cools <= 0) currentState = enemystates.attack;
		}
	}
	
	void Attack()
	{
		anim.SetTrigger("attacking");
		cools = timeBetweenAttacks;
		currentState = enemystates.chase;
	}
	
	public void Damage(float amt)
	{
		if (iframe <= 0)
		{
			health -= amt;
			iframe = iframeTime;
			if (health <= 0)
				Die();
		}
	}
	
	void Die()
	{
		gameObject.SetActive(false);
		
		player.AddExp(exp);
		player.AddMoney(money);
	}
}
