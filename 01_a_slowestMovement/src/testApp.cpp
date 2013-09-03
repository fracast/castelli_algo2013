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
    
    velocity = 0.000003;
    myRectangle.pos.x = 15;
    myRectangle.pos.y = ofGetHeight() / 2;
    startTime = 0;
    finishTime = 0;
    totTime = 0;
    
    
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
    
    
    //move it
    
    
    if(ofGetElapsedTimef() >=1){
        myRectangle.pos.x += velocity;
    }
    
    if(myRectangle.pos.x >= (ofGetWindowWidth()-20)){
        myRectangle.pos.x = ofGetWindowWidth()-20;
    }
    
    myRectangle.update();

}

//--------------------------------------------------------------
void testApp::draw(){
    
    myRectangle.draw();
    
    //    ofSetColor(255, 255, 255);
    //    ofDrawBitmapString(ofToString(pct), 20, 20);
    
    ofSetColor(0, 255, 0);
    ofLine(ofGetWidth()/2, 0, ofGetWidth()/2, ofGetHeight());
    
    //when the square arrives at the end register the time at that position
    
    if( myRectangle.pos.x >= (ofGetWidth() -20) && finishTime == 0){
        
        finishTime = ofGetElapsedTimef()-1;
    }
    
    //start the time with the square
    
    if( ofGetElapsedTimef() >= 1 && startTime == 0){
        
        finishTime = ofGetElapsedTimef() -1;
        
    }
    
    //ok, now calculate the travelling time
    
    totTime = finishTime - startTime;
    
    squareSpeed = distance / finishTime;
    
    //println on screen
    
    ofDrawBitmapString("This square has moved for " + ofToString((finishTime)) + "secs", ofPoint(15, 730));
    ofDrawBitmapString("At a speed of " + ofToString(squareSpeed) + "in/sec ", ofPoint(15, 750));
    

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
