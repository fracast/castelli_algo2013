#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
    ofBackground(50, 50, 50);
    
    myRectangle.pos.x = ofGetWindowWidth()/2;
    myRectangle.pos.y = ofGetWindowHeight()/2;
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    //myRectangle.xenoToPoint(mouseX, mouseY);
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    //square
    
    myRectangle.draw();

    
    // line connecting squares
    
    ofSetColor(0, 255, 0);
    ofSetLineWidth(1);
    ofLine(myRectangle.posa.x, myRectangle.posa.y, myRectangle.posb.x, myRectangle.posb.y);
    

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
    
    //action the change of pos with mouse click
    
//    if (ofGetMousePressed() == true) {
//        newPos = true;
//    }

    myRectangle.newPos = !myRectangle.newPos;
    myRectangle.update();
    
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
