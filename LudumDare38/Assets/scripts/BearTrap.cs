using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BearTrap : MonoBehaviour {

	private Animator anima;

	// Use this for initialization
	void Start () {
		anima = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void OnTriggerEnter (Collider collider) {
		if (collider.gameObject.layer == 8) {
			anima.SetTrigger ("triggered");
			GameController.instance.deadBall(collider.gameObject.GetComponent<Ball> ().getIndex ());
		}
	}
}
