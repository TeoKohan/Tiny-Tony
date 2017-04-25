using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class audioPlayer : MonoBehaviour {

	public AudioSource source;
	public AudioClip[] clips;

	public void playAudio(int index) {
		source.clip = clips [index];
		source.Play ();
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
