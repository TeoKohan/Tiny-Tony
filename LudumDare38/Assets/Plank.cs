using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Plank : MonoBehaviour {
	Rigidbody rigidbody;

	void Awake() {
	}

	// Update is called once per frame
	void FixedUpdate () {
		transform.Rotate (Vector3.up, 1f, Space.World);
	}
}
