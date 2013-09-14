#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofSetVerticalSync(true);

	ofEnableAlphaBlending();
	
	myBall.posa.x = 50;
	myBall.posa.y = 50;
    
    myBall.posb.x = 1000;
    myBall.posb.y = 1000;
	
}

//--------------------------------------------------------------
void testApp::update(){
	myBall.xenoToPoint(mouseX, mouseY);
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(0, 0, 0);
	myBall.draw();
    
}

//--------------------------------------------------------------
void testApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mouseReleased(){
}
