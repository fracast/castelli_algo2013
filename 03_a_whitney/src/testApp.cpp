// based on Gustavo Faria's code

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    pos = ofGetWindowSize()/2;
    ofSetVerticalSync(true);
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    ofBackground(0);
    

    

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    float angle = ofGetElapsedTimef()   * 0.5;
    float radius = 700;
    
    float x = radius * cos(angle * 2) * TWO_PI;
    float y = radius * sin( angle * 2);
    
    ofPoint temp;
    temp.x = x;
    temp.y = y;
    pointList.push_back(temp);
    if( pointList.size() > 20 ){
        pointList.erase( pointList.begin());
    }
    
    for (int i=0; i<pointList.size(); i++) {
        ofPushMatrix();{
            ofSetRectMode(OF_RECTMODE_CENTER);
            ofTranslate(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
            ofRotateZ(ofGetElapsedTimef() * 2.0*i);
            ofNoFill();
            ofSetColor(0,255 * 0.06 * i, 255,30);
            ofTriangle(x,y,30*i,30*i, 30* i, 30*i);
            
        }ofPopMatrix();
    }
    


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
