using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public Tilt tilt;
	public CameraController camera;
	public Ball ball;

	// Use this for initialization
	void Awake () {
		Physics.gravity = new Vector3 (0.0f, -9.8f * 10f, 0.0f);
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		Vector2 currentTilt = tilt.getTilt ();
		camera.setTilt (currentTilt);
		ball.ballUpdate (currentTilt);
	}
}
