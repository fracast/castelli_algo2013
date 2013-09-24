#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    //ofBackgroundGradient(0, 100, OF_GRADIENT_CIRCULAR);
    ofBackground(0);
    ofEnableAlphaBlending();
    ofSetVerticalSync(true);
    ofSetFrameRate(60);
    drawFireworks = false;

}

//--------------------------------------------------------------
void testApp::update(){
    
    for (vector<Firework>::iterator it = fireworks.begin(); it!=fireworks.end(); ){
        it->update(); //deletes
    
        if( it->bIsDead ){	
            it = fireworks.erase(it); //works as the i++
        }else{
            it++;
        }
    }
    
//    if (fireworks.size() ==0) {
//        Firework newFirework;
//        newFirework.setup(ofVec2f( ofRandom(1.0), ofRandom(1.0) ) * 10.0 - 5.0);
//        fireworks.push_back(newFirework);
//    }
}

//--------------------------------------------------------------
void testApp::draw(){
    
    for( vector<Firework>::iterator it = fireworks.begin(); it!=fireworks.end(); it++){
        it->draw();
    }

}

//--------------------------------------------------------------
void testApp::addFireworks(){
    Firework f;
    ofVec2f rVel = ofVec2f(ofRandom(1.0), ofRandom(1.0) ) * 10.0 - 5.0;
    f.setup(rVel);
    fireworks.push_back( f );
    
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
    
    for(vector<Firework>::iterator it = fireworks.begin(); it!=fireworks.end(); it++){
        !drawFireworks;
        ofDrawBitmapString(ofToString(fireworks.size()), 100, 100);
    }
    
    for(int i=0; i<1; i++){
        addFireworks();
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
