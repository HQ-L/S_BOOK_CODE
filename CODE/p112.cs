using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shoot : MonoBehaviour
{
	// Use this for initialization
	void Start ()
	{
		
	}
	int speed = 5;
	
	// Update is called once per frame
	void Update ()
	{
		float x = Input.GetAxis("horizontal")*Time.deltaTime*speed;
		float z = Input.GetAxis("Vertical")*Time.deltaTime*speed;
		transform.Translate(x, 0, z);
		print(x);
	}
}
