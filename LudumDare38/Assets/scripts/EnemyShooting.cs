using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyShooting : MonoBehaviour {

	public Transform shootingPosition;
	public Animator animController;
    public GameObject bullet;
    public float shootingSpeed;
	public float bulletSpeed;
	public float bulletLife;
	public bool disableCannon;


    private void Awake() {
		disableCannon = false;
		animController.speed = shootingSpeed;
		Invoke("ShootAnimation", 1f / shootingSpeed);
    }

	void ShootAnimation() {
		animController.SetTrigger ("Shoot");
		Invoke("Shoot", 1f / shootingSpeed);
	}

    void Shoot() {
		GameObject currentBullet;
		currentBullet = Instantiate(bullet, shootingPosition.position, Quaternion.identity);
		currentBullet.transform.LookAt (currentBullet.transform.position+transform.right);
		currentBullet.GetComponent<BulletBehaviour> ().direction = transform.right;
		currentBullet.GetComponent<BulletBehaviour> ().speed = bulletSpeed;
		currentBullet.GetComponent<BulletBehaviour> ().life = bulletLife;
		if (!disableCannon) {
			Invoke ("ShootAnimation", 1f / shootingSpeed);
		}
    }

}
