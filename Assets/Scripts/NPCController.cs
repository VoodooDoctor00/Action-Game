using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NPCController : MonoBehaviour 
{
	
	DialogueController dialogueController;
	public Dialogue[] dialogues;
	int currentDial = 0;
	
	private void Awake()
	{
		dialogueController = FindObjectOfType<DialogueController>();
	
	}

	private void OnMouseDown()
	{
		dialogueController.StartDialogue(dialogues[currentDial]);
		currentDial = (currentDial + 1) % dialogues.Length;
	}
}