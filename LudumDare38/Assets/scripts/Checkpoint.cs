using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Checkpoint : MonoBehaviour {

	public int index;
	public Transform spawnPoint;

	void OnTriggerEnter (Collider collider) {
		//Debug.Log ("Collision");
		int player = 8;
		if (collider.gameObject.layer == player) {
			GameController.instance.setSpawn (index, spawnPoint);
		}
	}
}
