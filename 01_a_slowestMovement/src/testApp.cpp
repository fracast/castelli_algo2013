#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(50, 50, 50);
    
    //The square position
    
    myRectangle.posa.x = 15;
    myRectangle.posa.y = ofGetHeight()/2;
    
    myRectangle.posb.x = ofGetWidth();
    myRectangle.posb.y = ofGetHeight()/2;
    
    myRectangle.interpolateByPct(0);
    pct = 0;
    
    //variables for inches per minute
    
    velocity = 0.00003;
    myRectangle.pos.x = 0;
    myRectangle.pos.y = 0;
    startTime = 0;
    finishTime = 0;
    
    
    // screen resolution is 128 PPI. window is 1024px. 1024 / 128 = distance
    
    distance = 8;
    squareSpeed = 0;

}

//--------------------------------------------------------------
void testApp::update(){
    
    
    //this is the slowest perceivable speed in pixel per minute
    
    pct += 0.000003f;
    
    if(pct > 1) {
        pct = 0;
    }
    
    myRectangle.interpolateByPct(pct);
    
    if(ofGetElapsedTimef() >=1){
        myRectangle.pos.x + velocity;
    }
    
    if(myRectangle.pos.x >= (ofGetWidth()-10)){
        myRectangle.pos.x = ofGetWidth()-10;
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    myRectangle.draw();
    
    ofSetColor(255, 255, 255);
    ofDrawBitmapString(ofToString(pct), 20, 20);
    
    ofSetColor(0, 255, 0);
    ofLine(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
    

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

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
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
