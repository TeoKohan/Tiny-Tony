using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public float sensitivity = 1;

	public void setTilt(Vector2 v) {
		transform.rotation = Quaternion.Euler (-v.y * sensitivity, 0, v.x * sensitivity);
	}

}
