#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0);
    bIsRecording = false;
    playbackStartTime = 0;

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    
    //draw the line
    ofSetColor(255);
    ofNoFill();
    
    ofBeginShape();
    
    for( vector<timePoint>::iterator it = points.begin(); it != points.end(); it++){
        
//        (*it).x; //pointer D referencing
        ofVertex(it->x, it->y); //using two pointers
        
    }
    
    ofEndShape();
    
    //draw point at current time
    
    ofPoint pos = getPositionForTime( ofGetElapsedTimef() - playbackStartTime );
    ofFill();
    ofSetColor(255, 0, 0);
    ofCircle(pos.x, pos.y, 10);
    
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
    
    timePoint tmp;
    tmp.x = x;
    tmp.y = y;
    tmp.t = ofGetElapsedTimef() - startTime;
    
    points.push_back(tmp);

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
    points.clear(); //if you want to clear what you have drawn before
    
    bIsRecording = true;
    
    timePoint tmp;
    tmp.x = x;
    tmp.y = y;
    tmp.t = 0; // z is our time
    
    points.push_back(tmp);
    startTime = ofGetElapsedTimef();
    

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
    bIsRecording = false;
    playbackStartTime = ofGetElapsedTimef();

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

//--------------------------------------------------------------

ofPoint testApp::getPositionForTime(float time){
    if(bIsRecording){
        return ofPoint(0,0,0);
    }else if( ( points.size() )< 2 ){
        return ofPoint(0,0,0);
    }
    while (time > points[points.size()-1].t){
        
        time -= points [points.size()-1].t;
        
    }
    
    ofPoint pos;
    
    for(int i=0; i < (points.size()-1); i++){
        
        if (time >= points[i].t && time < points[i+1].t ){
            
            //calc the percent
            float part = time - points [i].t;
            float whole = points [1+i].t - points [i].t;
            float pct = part / whole;
            
            pos.x = (1-pct) * points [i].x + pct * points [1+i].x;
            pos.y = (1-pct) * points [i].y + pct * points [1+i].y;
        }
        
    }
    
    return pos;
}

