#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    
    
    for(int i = 0; i < 3; i++){
        Particle car;
        car.pos = ofVec2f(ofRandomHeight(), ofRandomWidth());
        car.dest = ofVec2f( ofRandomWidth(), ofRandomHeight() );
        car.vel = ofVec2f(20, 10);
        car.carColor = ofColor(ofRandom(100, 255), ofRandom(100, 255),ofRandom(100, 255));
        carList.push_back(car);
    }
    ofBackground(0);
}

//--------------------------------------------------------------
void testApp::update(){
    for(int i = 0; i < carList.size(); i++){
        carList[i].seek(carList[i].dest); // this does applyForce for us
        carList[i].update();
    
        if (carList[i].pos.distance(carList[i].dest) < 5.0 ) {
            carList[i].dest = ofVec2f(ofRandom(100, ofGetWindowWidth()-100), ofRandom(100, ofGetWindowHeight() - 100));
        }
    }
    
    for(int i=0; i<carList.size(); i++){
        for(int j=0; j<carList.size(); j++){
            if(i != j){
                carList[i].noCrash(carList[j]);
            }
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    for (int i= 0; i<carList.size(); i++) {

        ofSetColor(255);
        carList[i].draw();
    
        ofSetColor (carList[i].carColor);
        ofCircle(carList[i].dest, 4);
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
