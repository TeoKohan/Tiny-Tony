using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager : MonoBehaviour {

    public static ScoreManager instance;

    public int score;

	// Use this for initialization
	void Awake () {
        if (instance == null)
            instance = this;
        else
            Debug.LogError("Manager Duplicado", gameObject);
        instance.score = 0;
	}
	
    public void ScoreUp(int value)
    {
        instance.score += value;
    }
}
