using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WinScript : MonoBehaviour {

	public Animation door;
	public GameObject ventanas;
	public GameObject MaBall;
	public GameObject WoBall;
	public GameObject stars;

	public Texture2D[] faces;

	public CrabMovement[] crabs;
	public EnemyShooting[] cannons;

	private Material maBallMat;

	// Use this for initialization
	void Start () {
		maBallMat = MaBall.GetComponent<MeshRenderer> ().material;
		maBallMat.SetTexture ("_MainTex", faces [0]);
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter (Collider collider) {
		//Debug.Log ("Collision");
		int player = 8;
		if (collider.gameObject.layer == player) {
			foreach (CrabMovement C in crabs) {
				C.enabled = false;
				C.GetComponent<Animator> ().SetTrigger ("Stop");
			}
			foreach (EnemyShooting E in cannons) {
				E.disableCannon = true;
			}
			GameController.instance.winGame ();
			Invoke("DoorClose", 14f);
			Invoke ("Stars", 13f);
			Invoke ("DoorCloseSound", 16.5f);
			Invoke ("StairSound", 18f);
			Invoke ("LightUp", 22f);
			Invoke ("Characters", 24f);
			Invoke ("Smile", 31f);
		}
	}

	void DoorClose() {
		door.Play ();
	}

	void LightUp() {
		ventanas.SetActive (true);
		GameController.instance.audio.playAudio (7);
	}

	void DoorCloseSound() {
		GameController.instance.audio.playAudio (5);
	}
	void StairSound() {
		GameController.instance.audio.playAudio (6);
	}
	void Characters() {
		MaBall.GetComponent<Animator> ().SetTrigger ("trigger");
		WoBall.GetComponent<Animator> ().SetTrigger ("trigger");
		Invoke ("Kiss", 14.35f);
	}

	void Kiss() {
		GameController.instance.audio.playAudio (8);
		Invoke ("Surprise", 1f);
		Invoke ("Smile", 4f);
	}

	void Surprise() {
		maBallMat.SetTexture ("_MainTex", faces [2]);
	}

	void Smile() {
		maBallMat.SetTexture ("_MainTex", faces [1]);
	}

	void Stars() {
		stars.GetComponent<Animator> ().SetTrigger ("trigger");
	}
}
