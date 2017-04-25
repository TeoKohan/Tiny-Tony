using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour {

	public int index;
	public int value;
    public float rotationSpeed;

	// Update is called once per frame
	void FixedUpdate ()
    {
        rotate();
	}

    void rotate()
    {
        transform.eulerAngles += new Vector3(0, Time.deltaTime * rotationSpeed * 10, 0);
    }

	void OnTriggerEnter(Collider collider) {
		int player = 8;
		if (collider.gameObject.layer == player) {
			GameController.instance.scoremanager.ScoreUp (value, index);
			GameController.instance.audio.playAudio (index);
			Destroy (gameObject);
		}
	}
}
