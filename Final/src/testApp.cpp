#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    timer = ofGetElapsedTimef();

    
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
    
    for(int i = 0; i< 3; i++) {
        Predator predator;
        predator.setup();
        predators.push_back(predator);
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    mod();
    
    addFoodAt = 5;
    addElements = 60;
    numFood = 2;
    numPreys = 2;
    numPredators = 2;
    
    
    if(timer > addElements){
        for (int i=0; i<numFood; i++) {
            Food bitesOfFood;
            bitesOfFood.setup();
            //bitesOfFood.draw();
            bites.push_back(bitesOfFood);
        }
        
        for (int i=0; i<numPreys; i++) {
            Prey morepreys;
            morepreys.setup();
            //bitesOfFood.draw();
            preys.push_back(morepreys);
        }
        
        for (int i=0; i<numPredators; i++) {
            Predator morepreds;
            morepreds.setup();
            //bitesOfFood.draw();
            predators.push_back(morepreds);
        }
        
        timer = 0;
    }
    
    for (int i=0; i<preys.size(); i++) {
        preys[i].update(bites);
    }
    
    timer++;
    
}

void testApp::mod(){
    int remainder = fmod(ofGetElapsedTimef(), addFoodAt);
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
    
    for (int i=0; i<predators.size(); i++) {
        predators[i].draw();
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
