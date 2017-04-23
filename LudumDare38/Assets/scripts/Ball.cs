using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour {

	public float maxSpeed;
	public float speed;
	public float inertia;

	protected Rigidbody rigidbody;

	void Awake() {
		rigidbody = this.GetComponent<Rigidbody> ();
		rigidbody.maxAngularVelocity = maxSpeed;
	}

	// Up	date is called once per frame
	public void ballUpdate (Vector2 v) {
		rigidbody.AddForce (new Vector3(v.x, 0, v.y) * speed);
	}
}
