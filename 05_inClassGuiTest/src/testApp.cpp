#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    gui = new ofxUICanvas(); //allocated some memory
    
    //let's use components
    
    gui->addLabel("My controls");
    gui->addSpacer();
    gui->addButton("myButton", false, 40, 40);
    gui->addSlider("radius", 0, 100, 50); //50 start point
    
    gui->loadSettings("myGuiSetting.xml");
    
    //(*gui) //dereferencing
    
    ofAddListener(gui->newGUIEvent, this, &testApp::onGuiEvent); //points to function - connecting what is talking and what is listening.. when are you listening to that let that person know kinda deal
        // the & is telling which gui we are talking about, there could be more gui

}

void testApp::exit(){
    
    gui->saveSettings("myGuiSetting.xml"); //saves before quitting

    delete gui;
}


void testApp::onGuiEvent(ofxUIEventArgs &e){
    
    cout << "I got a message" << e.getName() << endl;
    
    //change based on the slider
    
    if ( e.getName() == "radius") {
        ofxUISlider *radiusSlider = (ofxUISlider*) e.widget; //hey trust me this is a ofx ui slider even if is a pointer, and now we can use its value
        
        radius = radiusSlider->getScaledValue();//we want the real number
    }else if (e.getName() == "myButton"){
        ofxUIButton *b = (ofxUIButton*) e.widget;
        b->getValue();
    }
    
    

}
//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetColor(255, 0, 255);
    ofCircle(ofGetWindowSize()/2, radius);

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
