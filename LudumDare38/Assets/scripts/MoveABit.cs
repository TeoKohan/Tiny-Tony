using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveABit : MonoBehaviour {

	public float multiplier = 1;

	private Vector3 desiredPosition;

	void Update() {
		transform.position = Vector3.Slerp (transform.position, desiredPosition, 0.05f);
	}

	public void updateTilt(Vector3 average) {
		desiredPosition = average * multiplier;
		desiredPosition = new Vector3 (desiredPosition.x, 0f, desiredPosition.z);
	}

}
