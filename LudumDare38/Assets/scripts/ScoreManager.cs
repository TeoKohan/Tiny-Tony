using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour {


    public int score;
	public GameObject[] coins;
	public Transform spawnLocation;

	// Use this for initialization
	void Awake () {
		score = 0;
	}
	
	public void ScoreUp(int v, int g)
    {
		score += v;
		Vector3 random = new Vector3 (Random.Range (-10f, 10f), Random.Range (0, 10f), Random.Range (-10f, 10f));
		GameObject coin = Instantiate (coins [g], spawnLocation.position + random, Quaternion.identity);
		coin.transform.parent = GameController.instance.table.transform;
    }
}
