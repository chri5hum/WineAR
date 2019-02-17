using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

using ZXing;
using ZXing.QrCode;

public class CameraScript : MonoBehaviour {

	private bool camAvailable;
	private WebCamTexture backCam;
	private Texture defaultBackground;
	public Button button;
	public Text textbox;

	public GameObject panel;
	public InputField inHere;
	public Button backButton;
	public Button commentButton;
	public Text commentBox;

	public RawImage background;
	public AspectRatioFitter fit;
	// Use this for initialization


	// //zxing methods
	private WebCamTexture camTexture;
	private Rect screenRect;
	
	void Start () {
		textbox.text = "";
		button.gameObject.SetActive(false);
		panel.SetActive(false);
		defaultBackground = background.texture; //fallback background
		WebCamDevice[] devices = WebCamTexture.devices; //looks for whatever is on the phone right now
		if (devices.Length == 0) {
			Debug.Log("No Camera Detected");
			camAvailable = false;
			return;
		}

		for(int i = 0; i < devices.Length; i++) {
			if(!devices[i].isFrontFacing) {
			// if(devices[i].isFrontFacing) {
				backCam = new WebCamTexture(devices[i].name, Screen.width, Screen.height);
			}


		}

		if(backCam == null) {
			Debug.Log("Unable to find back cam");
			return;
		}

		backCam.Play();
		//set texture of raw object to back object
		//back cam is actually basically a texture
		background.texture = backCam;

		camAvailable = true;  //bc need to update smth every frame

		//zxing methods
		screenRect = new Rect(0, 0, Screen.width, Screen.height);
    	// camTexture = ;
		// camTexture.requestedHeight = Screen.height; 
		// camTexture.requestedWidth = Screen.width;
		// if (camTexture != null) {
		// 	camTexture.Play();
		// }

	}
	
	// // void Update () {
	// 	//cant actually set everything
	// 	if(!camAvailable) {
	// 		//not updating
	// 		return;
	// 	}
	// 	float ratio = (float)backCam.width / (float)backCam.height; //actually need to cast, otherwise will lose precision
	// 	fit.aspectRatio = ratio;

	// 	float scaleY = backCam.videoVerticallyMirrored ? -1f: 1f;
	// 	background.rectTransform.localScale = new Vector3(1f, scaleY, 1f);


	// 	//proper angle
	// 	int orient = -backCam.videoRotationAngle;
	// 	background.rectTransform.localEulerAngles = new Vector3(0,0,orient);

	// }
	void OnGUI () {
		// drawing the camera on screen
		// GUI.DrawTexture (screenRect, backCam, ScaleMode.ScaleToFit);
		// do the reading — you might want to attempt to read less often than you draw on the screen for performance sake
		//cant actually set everything
		if(!camAvailable) {
			//not updating
			return;
		}
		float ratio = (float)backCam.width / (float)backCam.height; //actually need to cast, otherwise will lose precision
		fit.aspectRatio = ratio;

		float scaleY = backCam.videoVerticallyMirrored ? -1f: 1f;
		background.rectTransform.localScale = new Vector3(1f, scaleY, 1f);


		//proper angle
		int orient = -backCam.videoRotationAngle;
		background.rectTransform.localEulerAngles = new Vector3(0,0,orient);

		try {
			IBarcodeReader barcodeReader = new BarcodeReader ();
			// decode the current frame
			var result = barcodeReader.Decode(backCam.GetPixels32(),
			backCam.width, backCam.height);
			if (result != null) {

				// Debug.Log("DECODED TEXT FROM QR: " + result.Text);
				// String name = result.Text.substring(0,result.Text.indexof(";"));
				// String price = result.Text.substring(result.Text.indexOf(";") + 1);
				textbox.text = result.Text;


				// button.interactable = true;
				button.gameObject.SetActive(true);
				button.onClick.AddListener(selected);
				backButton.onClick.AddListener(back);
				commentButton.onClick.AddListener(comment);
			} else {
				textbox.text = "";
				button.gameObject.SetActive(false);

			}
		} catch(Exception ex) { Debug.LogWarning (ex.Message); }
		
	}

	void selected() {
		panel.SetActive(true);
	}

	void back() {
		panel.SetActive(false);
	}

	void comment() {
		commentBox.text = commentBox.text + inHere.text + "\n";
		inHere.text = "";
	}
	
}
