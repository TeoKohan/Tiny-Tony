using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	public float maxSpeed;
	public float speed;
	public float inertia;

	private int index;

	protected Rigidbody rigidbody;

	void Awake() {
		rigidbody = this.GetComponent<Rigidbody> ();
		rigidbody.maxAngularVelocity = maxSpeed;
	}

	// Up	date is called once per frame
	public void ballUpdate (Vector2 v) {
		rigidbody.AddForce (new Vector3(v.x, 0, v.y) * speed);
	}

	public void setIndex(int i) {
		index = i;
	}

	public int getIndex() {
		return index;
	}

	void OnCollisionEnter(Collision collision) {
		if (collision.gameObject.layer == 9) {
			GameController.instance.deadBall (index);
		}
	}

	public void respawn(Vector3 spawnPosition) {
		transform.position = new Vector3(spawnPosition.x, spawnPosition.y, spawnPosition.z);
		GameController.instance.audio.playAudio (3);
	}

	public void kill() {
		Destroy (gameObject);
	}
}
