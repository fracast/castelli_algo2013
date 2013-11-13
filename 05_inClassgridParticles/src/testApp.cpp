#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    int xRes = sampler.getWidth() / 10;
    int yRes = sampler.getHeight() / 10;
    
    for( int y=0; y<yRes; y++){
        for (int x=0; x<xRes; x++) {
            addParticle(x, y);
        }
    }
}

    void testApp::addParticle (float x, float y){
        float xPos = (x+0.5f) * 10.0f;
        float yPos = (y+0.5f) * 10.0f;
        
        particleList.push_back( Particle (ofVec2f(xPos, yPos)));
    }



//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

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
