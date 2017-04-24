using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public int ballNumber = 1;
	public Tilt tilt;
	public ScoreManager scoremanager;
	public CameraController camera;
	public MoveABit moveabit;
	public CameraController light;
	public GameObject ballPrefab;
	public Transform startSpawn;

	public static GameController instance;

	private Ball[] ball;
	private int spawnIndex;
	private Transform spawnTransform;

	// Use this for initialization
	void Awake () {
		instance = this;
		Cursor.visible = false;
		Physics.gravity = new Vector3 (0.0f, -9.8f * 10f, 0.0f);
		spawnIndex = 0;
		spawnTransform = startSpawn;
		ball = new Ball[ballNumber];
		spawnBalls (ballNumber);
	}
		
	// Update is called once per frame
	void FixedUpdate () {
		Vector2 currentTilt = tilt.getTilt ();
		Vector3 average = Vector3.zero;
		foreach (Ball b in ball) {
			b.ballUpdate (currentTilt);
			average += b.transform.position;
		}
		average /= ballNumber;
		camera.setTilt (currentTilt);
		moveabit.updateTilt (average);
		light.setTilt (currentTilt);
	}

	public void setSpawn(int index, Transform spawnPoint) {
		if (index > spawnIndex) {
			spawnTransform = spawnPoint;
			spawnIndex = index;
		}
	}

	public void spawnBalls (int q)
	{
		for (int i = 0; i < q; i++) {
			Vector3 randomPos = new Vector3 (Random.Range (-2f, 2f), 0f, Random.Range (-2f, 2f));
			GameObject cBall = Instantiate (ballPrefab, spawnTransform.position + randomPos, Quaternion.identity);
			Ball bBall =  cBall.GetComponent<Ball> ();
			bBall.setIndex (i);
			ball [i] = bBall;
		}
	}

	public void deadBall (int index)
	{
		ball [index].respawn (spawnTransform.position);
	}

}
