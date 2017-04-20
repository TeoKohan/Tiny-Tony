using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ObjectRotate : MonoBehaviour 
{
	public string	objectName;
	public float idleStartTime = 5f;
	public float idleRotationSpeed = 5f;
	public float toleratedMouseNoise = 3f;
	public float _mouseUpRotationDelay = 1f;
	public float worldRotationSpeedMultiplier = 1f;
	public float grabRotationSpeedMultiplier = 10f;

	private Transform 	previousZone;
	private Vector3		previousMousePosition;
	private Vector3		mouseDownMousePosition;
	private Vector3		rotationDirection;
	private Vector3		lastRotationDirection;
	private float		mouseUpRotationDelay;
	private float 	previousBrightness;
	private float 	timeSinceLastMovement;
	private float 	rotationSpeed;
	private float 	desiredRotationSpeed;
	private bool	idleRotation;
	private bool	cameraPosition;
	private bool	cameraState;

	void Update () 
	{
		checkMouseInput();
		worldRotation();
	}

	void Start()
	{
		mouseUpRotationDelay = _mouseUpRotationDelay / 100;
		lastRotationDirection = new Vector3(Random.Range(0f, 1f), Random.Range(0f, 1f), Random.Range(0f, 1f));

		cameraState = false;
		cameraPosition = true;
	}

	 void checkMouseInput()
	{
		if (Input.GetMouseButtonUp(0))
		{
			mouseDownMousePosition = previousMousePosition;
			Invoke("mouseUpDelay", mouseUpRotationDelay);
		}
		else if (Input.GetMouseButtonDown(0))
		{
			Invoke("selectDelay", 0.1f);
		}
		else if (Input.GetMouseButton(0))
		{
			rotationSpeed = 1;
			desiredRotationSpeed = rotationSpeed;
			mouseDownRotate();
		}
		else
		{
			checkIdleRotationState();
		}

		previousMousePosition = Input.mousePosition;
	}

	void selectDelay()
	{
	}

	public  void inititateCameraMovement()
	{
		if (cameraState == false)
		{
			cameraState = true;
		}
	}

	 void mouseDownRotate()
	{	
		float xMouse = previousMousePosition.y - Input.mousePosition.y;
		float yMouse = Input.mousePosition.x - previousMousePosition.x;

		rotationDirection = new Vector3(-xMouse, -yMouse, 0) * grabRotationSpeedMultiplier;
	}

	 void mouseUpDelay()
	{
		float distance = Vector3.Distance(mouseDownMousePosition, Input.mousePosition);
		rotationSpeed = distance * worldRotationSpeedMultiplier;

		float xMouse = mouseDownMousePosition.y - Input.mousePosition.y;
		float yMouse = Input.mousePosition.x - mouseDownMousePosition.x;

		rotationDirection = new Vector3(-xMouse, -yMouse, 0).normalized;
	}

	 void checkIdleRotationState()
	{
		if (Vector3.Distance(previousMousePosition, Input.mousePosition) > toleratedMouseNoise)
		{
			timeSinceLastMovement = 0;
		}
		else
		{
			timeSinceLastMovement += Time.deltaTime;
		}

		if (timeSinceLastMovement > idleStartTime)
		{
			if (idleRotation == false)
			{
				idleRotation = true;
				desiredRotationSpeed = idleRotationSpeed;

				if (rotationDirection.magnitude < 1)
				{
					rotationDirection = adjustRotationDirection(lastRotationDirection);
				}

				rotationDirection.Normalize();
			}
		}
		else
		{
			if (idleRotation == true)
			{
				idleRotation = false;
				desiredRotationSpeed = 0;
			}
		}
	}

	 Vector3 adjustRotationDirection(Vector3 RD)
	{
		if (RD.magnitude < 0.1f)
		{
			return lastRotationDirection;
		}

		RD *= 100;

		if (RD.magnitude < 1)
		{
			return adjustRotationDirection(RD);
		}
		else
		{
			return RD.normalized;
		}
	}

	public bool getCameraPosition()
	{
		return cameraPosition;
	}

	void worldRotation()
	{
		if (rotationDirection.magnitude > 0.1f)
		{
			lastRotationDirection = rotationDirection;
		}

		rotationSpeed = Mathf.Lerp(rotationSpeed, desiredRotationSpeed, Time.deltaTime);
		transform.Rotate(rotationDirection * rotationSpeed * Time.deltaTime, Space.World);
	}

}
