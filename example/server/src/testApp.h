#pragma once


#include "ofMain.h"
#include "ofxRemoteOfImage.h"

class testApp : public ofBaseApp{

	public:

		void setup();
		void update();
		void draw();

		void exit();
		
		void keyPressed(int key);

		ofxRemoteOfImage server;
		ofImage servedImage;

		ofVideoGrabber cam;
};
