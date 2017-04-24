using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour {

	public Vector3 offset;
	public float sensitivity = 1;

	public void setTilt(Vector2 v) {
		transform.rotation = Quaternion.Euler (-v.y * sensitivity + offset.x, 0 + offset.y, v.x * sensitivity + offset.z);
	}

}
