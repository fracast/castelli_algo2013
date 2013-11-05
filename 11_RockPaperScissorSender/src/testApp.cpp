#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    
    mSender.setup("localhost", 12345);
    ofBackground(0);

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
int testApp::compare(string gesture1, string gesture2){
    if(gesture1 == "rock"){
        if(gesture2 == "paper"){
            return -1;
        } else if (gesture2 == "scissors"){
            return 1;
        } else if (gesture2 == "rock"){
            return 0;
        }
    } else if(gesture1 == "paper"){
        if(gesture2 == "paper"){
            return 0;
        } else if (gesture2 == "scissors"){
            return -1;
        } else if (gesture2 == "rock"){
            return 1;
        } else if(gesture1 == "scissors"){
            if(gesture2 == "paper"){
                return 1;
            } else if (gesture2 == "scissors"){
                return 0;
            } else if (gesture2 == "rock"){
                return -1;
            }
        }
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
    ofxOscMessage m;
    m.setAddress("/Wenting/gesture");
    if(key == 'a'){
        m.addStringArg("rock");
        
    }else if(key == 's'){
        m.addStringArg("paper");
        
    }else if(key == 'd'){
        m.addStringArg("scissors");
        
    }
    mSender.sendMessage( m );

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
