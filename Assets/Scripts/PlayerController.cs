using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
	Rigidbody2D playerRigidbody;
	Vector2 input;
	public float speed;
	
	Animator anim;
	SpriteRenderer rend;
	int lookDir = 0; // 0-down, 1-left/right, 2-up
	bool moving = false;
	
	public float maxHealth;
	[SerializeField]
	float health;
	
	public int maxMoney;
	[SerializeField]
	public int money;
	
	public float attack;
	public int level = 1;
	public float experience;
	public float expToNext;
	public AnimationCurve expCurve = new AnimationCurve();
	
	public Image healthUI;
	public Text moneyText;
	public Text expText;
	
	public float iframeTime = 0.8f;
	float iframe;
	public GameObject meleeCollider;
	
	bool gameOver;
	public GameObject gameOverUI;

	
	private void Awake()
	{
		gameOver = false;
		Time.timeScale = 1f;
		
		playerRigidbody = GetComponent<Rigidbody2D>();
		anim = GetComponent<Animator>();
		rend = GetComponent<SpriteRenderer>();
		health = maxHealth;
		money = maxMoney;
		
		expToNext = CalculateExp(level);
		for(int i = 1; i <= 30; i++)
			expCurve.AddKey(i, CalculateExp(i));
	}

	void Update()
	{	
		if (iframe > 0) iframe -= Time.deltaTime;
		
		input = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
	
		playerRigidbody.AddForce(input * speed * Time.deltaTime);

		moving = (input.x != 0 || input.y != 0);
		
		
		if (input.y < 0)
		{
			lookDir = 0;
			meleeCollider.transform.localPosition = new Vector3(0, -0.3f, 0);
		}
		else if (input.x > 0)
		{
			rend.flipX = false;
			lookDir = 1;
			meleeCollider.transform.localPosition = new Vector3(0.3f, 0, 0);
		}
		else if (input.x < 0)
		{
			rend.flipX = true;
			lookDir = 1;
			meleeCollider.transform.localPosition = new Vector3(-0.3f, 0, 0);			
		}
		else if (input.y > 0)
		{
			lookDir = 2;
			meleeCollider.transform.localPosition = new Vector3(0, 0.3f, 0);			
		}
	
	
		anim.SetInteger("dir", lookDir);
		anim.SetBool("moving", moving);
	
		if (Input.GetKeyDown(KeyCode.Space))
		{
			SwingAttack();
		}
		
		if (Application.isEditor)
		{
			if(Input.GetKeyDown(KeyCode.L))
				Damage(5f);
			if(Input.GetKeyDown(KeyCode.J))
				AddExp(20f);
		}
		healthUI.fillAmount = health / maxHealth;
		moneyText.text = "Coins: " + money.ToString();
		expText.text = "Level: " + level.ToString() + " Exp: " + experience.ToString() + "/" + expToNext.ToString();
			
		
		if (gameOver && Input.anyKeyDown)
		{
			Debug.Log("GameOver");
			SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		}
	}

	public void SwingAttack()
	{
		anim.SetBool("attacking", true);
		Invoke("ResetAttack", 0.1f);
	}

	void ResetAttack()
	{
		anim.SetBool("attacking", false);
	}

	public void Heal(float amt)
	{
		health += amt;
		if (health > maxHealth) health = maxHealth;
	}
	
	public void Damage(float amt)
	{
		if (iframe <= 0)
		{
			health -= amt;
			iframe = iframeTime;
			if (health <= 0) Die();
		}
	}
	
	void Die()
	{
		//gameObject.SetActive(false);
		GameOver();
	}
	
	void GameOver()
	{
		gameOver = true;
		gameOverUI.SetActive(true);
		Time.timeScale = 0f;
	}
	
	public void AddMoney(int amt)
	{
		money += amt;
	}
	
	public float CalculateExp(int level)
	{
		float expNeeded;
		expNeeded = level * 100f;
		return expNeeded; 
	}
	
	public void AddExp(float amt)
	{
		experience += amt;
		if (experience >= expToNext)
			LevelUp();
	}
	
	public void LevelUp()
	{
		level++;
		experience -= expToNext;
		attack += 5f;
		speed += 50f;
		Heal(maxHealth);
		expToNext = CalculateExp(level);
	}
}