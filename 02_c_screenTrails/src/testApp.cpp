#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
	ofSetFrameRate(120);
    
    //ofBackground(0, 0, 0);
    
    ofSetBackgroundAuto(false);
    
    for( int i=0; i<50; i++){
        shape myShape;
        shapelist.push_back(myShape);
    }

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i=0; i<shapelist.size(); i++){
        
        if ( i==0 ){
            shapelist[i].xenoToPoint(mouseX, mouseY);
        }else{
            shapelist[i].xenoToPoint(shapelist[i-1].pos.x, shapelist[i-1].pos.y);
        }
    }

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //ofFill();
    
    ofSetColor(0,0,0, 255*0.03);
    ofRect( ofGetWindowRect() );
    
    for (int i=0; i<shapelist.size(); i++){
        shapelist[i].draw();
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
