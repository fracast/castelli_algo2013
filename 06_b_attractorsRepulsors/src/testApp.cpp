#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofSetVerticalSync(true);
	ofSetFrameRate(120);
    
    ofBackground(0, 110, 255);
    ofSetBackgroundAuto(false);

	
	
	for (int i = 0; i < 1000; i++){
		particle myParticle;
		myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    // on every frame
	// we reset the forces
	// add in any forces on the particle
	// perfom damping and
	// then update
	
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
		
		
		particles[i].addAttractionForce(mouseX, mouseY, 1000, 0.1);
		particles[i].addRepulsionForce(mouseX, mouseY, 60, 1);
		
		
        //		particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 0.1);
        //		particles[i].addClockwiseForce(mouseX, mouseY, 200, 1);
		
		//particles[i].addForce(0,0.04);  // gravity
		particles[i].addDampingForce();
		particles[i].update();
	}

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofFill();
    
    ofSetColor(0,100,255, 255*0.05);
    ofRect( ofGetWindowRect() );
    
    //ofNoFill();
    ofFill();
    ofSetColor(245, 255, 0, 100);

	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
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
