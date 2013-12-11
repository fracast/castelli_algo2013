#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    
    for (int i=0; i<30; i++) {
        
        Food bitesOfFood;
        bitesOfFood.setup();
        
        bites.push_back(bitesOfFood);
        
    }
    
    
    for(int i = 0; i< 5; i++) {
        
        Prey prey;
        prey.setup();
        
        preys.push_back(prey);
        
    }
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i=0; i<preys.size(); i++) {
        
        preys[i].update(bites);
    }
    
    //    if(ofGetElapsedTimef() > addFoodAt)
    //    {
    //        Food bitesOfFood;
    //        bitesOfFood.init();
    //        bites.push_back(bitesOfFood);
    //
    //        addFoodAt = ofGetElapsedTimef()+0.2;
    //    }
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofBackground(0);
    
    for (int i=0; i<bites.size(); i++) { 
        
        bites[i].draw();
        
    }
    
    for (int i=0; i<preys.size(); i++) {
        
        preys[i].draw();
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
