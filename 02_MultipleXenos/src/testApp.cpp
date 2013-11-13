#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetBackgroundAuto(false);
    
    for( int i = 0; i < 5; i++ ){
        
       // ++i; //increments before
        Rectangle tmpRect; //other rectnagle, we wnat to store this in the vector, otherwise is garbage
        rectList.push_back( tmpRect ); //stores it in the vector
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < rectList.size(); i++){
        
        if(i == 0) {
        
        rectList[i].xenoToPoint(mousePos.x, mousePos.y);
            
        }else{
            rectList [i].xenoToPoint(rectList[i-1].pos.x, rectList[i-1].pos.y);
        }
    }
    
    //myRect.xenoToPoint(mousePos.x, mousePos.y);

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    //ofEnableAlphaBlending();
    //ofSetBackgroundColor(100, 100, 100, 255.0 * 0.1);
    
    ofColor semiTransparent(100, 100, 100, 255.0 * 0.01);
    ofSetColor(semiTransparent);
    
    ofRect(0,0, ofGetWindowWidth(), ofGetWindowHeight() );
    
    //myRect.draw();
    
    for(int i = 0; i < rectList.size(); i++){
        rectList[i].draw();
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
    
    mousePos.x = x;
    mousePos.y = y;

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
