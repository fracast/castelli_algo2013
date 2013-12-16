#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableAlphaBlending();
    
    ofBackground(0);
    
    bg.loadImage("bg3.png"); //artwork tim reynolds
    bg.resize(ofGetWindowWidth(), ofGetWindowHeight());
    
    ofSetVerticalSync(true);
    timer = ofGetElapsedTimef();

    
    for (int i=0; i<30; i++) {
        Food bitesOfFood;
        bitesOfFood.setup();
        bites.push_back(bitesOfFood);
    }
    
    for(int i = 0; i< 10; i++) {
        Prey prey;
        prey.setup();
        preys.push_back(prey);
    }
    
    for(int i = 0; i< 3; i++) {
        Predator predator;
        predator.setup();
        predators.push_back(predator);
    }
    
    myVectorField.setup(ofGetWindowWidth(), ofGetWindowHeight(), 20);
    
    for(int i = 0; i < 50000; i++){
        Particle tmp;
        particleList.push_back( tmp );
        particleList[i].setParams(ofRandomWidth(), ofRandomHeight(), ofRandom(-1,1), ofRandom(-1,1));
    }
}

//--------------------------------------------------------------
void testApp::update(){
    
    mod();
    
    addFoodAt = 5;
    addElements = 60;
    numFood = 6;
    numPreys = 8;
    numPredators = 2;
    
    
    if(timer > addElements){
        for (int i=0; i<numFood; i++) {
            Food bitesOfFood;
            bitesOfFood.setup();
            //bitesOfFood.draw();
            bites.push_back(bitesOfFood);
        }
        
    if(timer > 40){
        
        for (int i=0; i<numPreys; i++) {
            Prey morepreys;
            morepreys.setup();
            //bitesOfFood.draw();
            preys.push_back(morepreys);
        }
    }
     
    if(timer > 60){
        for (int i=0; i<numPredators; i++) {
            Predator morepreds;
            morepreds.setup();
            //bitesOfFood.draw();
            predators.push_back(morepreds);
        }
    }
        
        timer = 0;
    }
    
    for (int i=0; i<preys.size(); i++) {
        preys[i].update(bites);
    }
    
    for (int i=0; i<predators.size(); i++) {
        predators[i].update(preys);
    }
    
    timer++;
//    
    if (bHide) {
        ofBackground(255);
    } else {
        ofBackground(0);
    }
    
    
    for (int i = 0; i < particleList.size(); i++) {
        particleList[i].resetForce();
        particleList[i].addForce(myVectorField.getForceAtScreenPos(particleList[i].pos)*0.005);
        particleList[i].addDampingForce();
        particleList[i].update();
    }

    
}

void testApp::mod(){
    int remainder = fmod(ofGetElapsedTimef(), addFoodAt);
}

//--------------------------------------------------------------
void testApp::addEnvironment(){

    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    bg.draw(0, 0);
    
    ofSetColor(0);
    myVectorField.draw();
    for (int i = 0; i < particleList.size(); i++) {
        ofSetColor(color);
        particleList[i].draw();
    }

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
//    if(key =='a'){
//        m yVectorField.draw();
//    }
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
