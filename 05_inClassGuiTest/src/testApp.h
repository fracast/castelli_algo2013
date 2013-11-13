#pragma once

#include "ofMain.h"
#include "ofxUI.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void exit(); // add function last thing of does

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void onGuiEvent( ofxUIEventArgs &e); //& passes the address of the pointer
		
    
    ofxUICanvas *gui; //creates pointer
    float radius;

};
