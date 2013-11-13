#include "testApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void testApp::setup(){
    
	ofSetVerticalSync(true);
    
	ofEnableAlphaBlending();
	
	// set the position of the rectangle:
//	myRectangle.pos.x = 100;
//	myRectangle.pos.y = 50;
    
	
}

//--------------------------------------------------------------
void testApp::update(){
	//rectangles[i].xenoToPoint(mouseX, mouseY);
    
    for (int i = 0; i < 10; i++) {
        if (i ==0) {
            rectangles[i].xenoToPoint(mouseX, mouseY);
        }else{
            rectagles[i].xenoToPoint(rectagles[i-1].pos.x, rectagles[i-1].pos.y);
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for ( int i = 0; i < 10; i++) {
        rectangles[i].draw();
    }


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