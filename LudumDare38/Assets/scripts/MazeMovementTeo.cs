using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MazeMovementTeo : MonoBehaviour {

    public float sensitivity = 1f;
    public Vector2 rotationLimits;
	public bool invert;

    protected Vector2 rotation;
    protected Vector3 cameraRotation;
	protected Rigidbody rigidbody;
	protected int inversion;

	void Awake () {
		//Test
		Physics.gravity = new Vector3(0, -100, 0);

		rigidbody = this.GetComponent<Rigidbody> ();
		rotation = Vector2.zero;

		if (invert) {
			inversion = -1;
		} 
		else {
			inversion = 1;
		}
	}

	void FixedUpdate ()
	{
		//Store mouse
		float XMouse = Input.GetAxis("Mouse X");
		float YMouse = Input.GetAxis("Mouse Y");

		//Calc rotation delta
		float XDelta = XMouse * sensitivity * inversion;
		float YDelta = YMouse * sensitivity * inversion;

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

		rigidbody.MoveRotation (Quaternion.Euler (rotation.y, 0, -rotation.x));
	}
}
