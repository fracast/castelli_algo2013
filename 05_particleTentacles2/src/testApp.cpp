
//Based on code created by Charlie Whitney

#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0);
    ofSetVerticalSync(true);
    ofSetFrameRate(120);

    for( int i=0; i<100; i++ ){
        addParticle();
        ofSetColor(0, 100, 255,ofRandom(50, 100));
    }
}

//--------------------------------------------------------------
void testApp::update(){

    // This is how you loop through and delete a particle using iterators and vectors
    // Note how we don't put it++ up in the top of the loop.
    for( vector<Particle>::iterator it=pList.begin(); it!=pList.end(); ){
        it->update();

        if( it->bIsDead ){
            it = pList.erase(it);   // When we erase one, it returns the next particle automatically.  It's done the "it++" for us!
            ofLog( OF_LOG_NOTICE, "size is " + ofToString(pList.size()) );
        }else {
            it++;
        }
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for( vector<Particle>::iterator it = pList.begin(); it!=pList.end(); it++){
        it->draw();
    }
}

void testApp::addParticle(){
    Particle p;

    // we'll pick a random direction for our particle to move initially
    ofVec2f rVel = ofVec2f( ofRandom(1.0), ofRandom(1.0) );
    p.setup( rVel );
    pList.push_back( p );
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
    
    for( int i=0; i<100; i++ ){
        addParticle();
    }

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
