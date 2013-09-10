#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
        ofSetVerticalSync(true);
    
    for (int i = 0; i < NRECT ; i++) {
        
        myRects[i].color = ofColor (i*12);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    
    for (int i = 0; i < NRECT; i++){
        
        if (i == 0) {
            
            myRects[i].xenoToPoint(mouseX, mouseY);
            
        } else {
            
            myRects[i].xenoToPoint(myRects[i-1].pos.x, myRects[i-1].pos.y);
            
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(255);
    
    for (int i = 0; i < NRECT ; i++) {
        
        ofPushMatrix();
        ofTranslate(myRects[i].pos);
        myRects[i].draw();
        
        ofPopMatrix();
        
    }
    
    ofSetColor(255);

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
