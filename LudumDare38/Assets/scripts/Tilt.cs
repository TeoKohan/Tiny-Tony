using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tilt : MonoBehaviour {

	public float sensitivity = 1f;
	public Vector2 rotationLimits;

	protected Vector2 rotation;

	void Awake () {
		rotation = Vector2.zero;
	}

	void FixedUpdate()
	{
		//Store mouse
		float XMouse = Input.GetAxis("Mouse X");
		float YMouse = Input.GetAxis("Mouse Y");

		//Calc rotation delta
		float XDelta = XMouse * sensitivity;
		float YDelta = YMouse * sensitivity;

		if (rotation.x + XDelta > rotationLimits.x) {
			XDelta -= rotation.x + XDelta - rotationLimits.x;
		}
		else if (rotation.x + XDelta < -rotationLimits.x) {
			XDelta -= rotation.x + XDelta + rotationLimits.x;
		}
		if (rotation.y + YDelta > rotationLimits.y) {
			YDelta -= rotation.y + YDelta - rotationLimits.y;
		}
		else if (rotation.y + YDelta < -rotationLimits.y) {
			YDelta -= rotation.y + YDelta + rotationLimits.y;
		}

		rotation = rotation + new Vector2 (XDelta, YDelta);
	}

	public Vector2 getTilt() {
		return rotation;
	}
}
