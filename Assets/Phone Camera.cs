// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.UI;

// public class PhoneCamera : MonoBehaviour {

// 	private bool camAvailable;
// 	private WebCamTexture backCam;
// 	private Texture defaultBackground;

// 	public RawImage background;
// 	public AspectRatioFitter fit;
// 	// Use this for initialization
// 	void Start () {
// 		defaultBackground = background.texture;
// 		WebCamDevice[] devices = WebCamTexture.devices; //looks for whatever is on the phone right now
// 		if (devices.length == 0) {
// 			Debug.Log("No Camera Detected");
// 			camAvailable = false;
// 		}
// 		for(int i = 0; i < devices.length(); i++) {
// 			if(devices[i].isFrontFacing) {
// 				backCam = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
// 			}


// 		}

// 		if(backCam == null) {
// 			Debug.Log("Unable to find back cam");
// 			return;
// 		}

// 		backCam.Play();
// 		//set texture of raw object to back object
// 		//back cam is actually basically a texture
// 		background.texture = backCam;

// 		camAvailable = true;


// 	}
	
// 	// Update is called once per frame
// 	void Update () {
// 		//cant actually set everything
// 		if(!camAvailable) {
// 			//not updating
// 			return;
// 		}
// 		float ratio = (float) backCam.width / (float) backCam.heigth; //actually need to cast, otherwise will lose precision
// 		fit.aspectRatio = ratio;

// 		float scaleY = backCam.videoVerticallyMirrored ? -1f: 1f;
// 		background.rectTransform.localScale = new Vector3(1f, scaleY, 1f);


// 		//proper angle
// 		int orient = -backCam.videoRotationAngle;
// 		background.rectTransform.localEulerAngles = new Vector3(0,0,orient);

// 	}
// }
