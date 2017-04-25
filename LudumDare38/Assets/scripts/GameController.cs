using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

	public int ballNumber = 1;
	public Transform table;
	public Tilt tilt;
	public ScoreManager scoremanager;
	public audioPlayer audio;
	public CameraController camera;
	public MoveABit moveabit;
	public GameObject ballPrefab;
	public Transform startSpawn;
	public Light dir;
	public Light spot;

	public static GameController instance;

	private Ball[] ball;
	private int spawnIndex;
	private Transform spawnTransform;
	private bool win;
	private bool lightTrans;

	// Use this for initialization
	void Awake () {
		win = false;
		lightTrans = false;
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
		if (!win) {
			Vector2 currentTilt = tilt.getTilt ();
			Vector3 average = Vector3.zero;
			foreach (Ball b in ball) {
				b.ballUpdate (currentTilt);
				average += b.transform.position;
			}
			average /= ballNumber;
			camera.setTilt (currentTilt);	
			moveabit.updateTilt (average);
		}

		if (lightTrans) {
			camera.setTilt (Vector2.Lerp(camera.tilt, Vector2.zero, 0.01f));
			spot.intensity = Mathf.Lerp (spot.intensity, 0f, 0.01f);
			dir.intensity = Mathf.Lerp (dir.intensity, 1f, 0.01f);
			dir.color = Color.Lerp (dir.color, new Color(0f, 97f/255f, 1f), 0.01f);
		}
	}

	void lightTransTransition() {
		lightTrans = true;
	}

	public void setSpawn(int index, Transform spawnPoint) {
		Debug.Log ("Try   " + spawnIndex + "   " + index);

		if (index > spawnIndex) {
			spawnTransform = spawnPoint;
			spawnIndex = index;
			audio.playAudio (2);
		}
	}

	public void spawnBalls (int q)
	{
		for (int i = 0; i < q; i++) {
			Vector3 randomPos = new Vector3 (Random.Range (-2f, 2f), 0f, Random.Range (-2f, 2f));
			GameObject cBall = Instantiate (ballPrefab, spawnTransform.position + randomPos * q / 20f, Quaternion.identity);
			Ball bBall =  cBall.GetComponent<Ball> ();
			bBall.setIndex (i);
			ball [i] = bBall;
		}
	}

	public void deadBall (int index)
	{
		ball [index].respawn (spawnTransform.position);
	}

	public void winGame() {
		Debug.Log ("Win");
		Invoke ("lightTransTransition", 1.5f);
		foreach (Ball b in ball) {
			b.kill ();
		}
		Invoke ("cameraDelay", 5f);
		win = true;
	}

	void cameraDelay() {
		Transform c = Camera.main.transform;
		c.parent = null;
		c.GetComponent<Animation> ().Play ();
	}
}
