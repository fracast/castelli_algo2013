#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync(true);
    ofBackground(0);
    
    box2d.init();
    box2d.setGravity(0, 10);
    box2d.setFPS(30.0);
//    box2d.createGround();
    box2d.registerGrabbing();
    
    boxCircle.setup( box2d.getWorld(), 200, 200, 20);
    boxCircle.setPhysics(1.0, 0.5, 1.0);
    
    anchor.setup( box2d.getWorld(), ofGetWindowWidth() / 2, 20, 10);
    anchor.setPhysics(3.0, 0.53, 0.1);
    
    for( int i=0; i<3; i++){
        ofxBox2dCircle circle;
        circle.setPhysics(3.0, 0.53, 0.1);
        circle.setup( box2d.getWorld(), ofGetWindowWidth() / 2, 100 + (i+20), 10);
        circleList.push_back(circle);
    }
    
    for(int i=0; i<circleList.size(); i++){
        ofxBox2dJoint joint;
        
        if( i==0 ){
            joint.setup( box2d.getWorld(), anchor.body, circleList[i].body );
        }else{
            joint.setup(box2d.getWorld(), circleList[i-1].body, circleList[i].body);
        }
        joint.setLength(25);
        jointList.push_back (joint);
        
        }
    }


//--------------------------------------------------------------
void testApp::update(){
    box2d.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    anchor.draw();
    
    for( int i=0; i <  jointList.size(); i++) {
        jointList[i].draw();
    }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if ( key == 'n'){
        ofxBox2dCircle circle;
        circle.setPhysics(3.0, 0.53, 0.1);
        circle.setup(box2d.getWorld(), circleList.back().getPosition().x, circleList.back().getPosition().y + ofRandom(-30, 30), 10);
        
        circleList.push_back ( circle );
        
        int a = circleList.size()-2;
        int b = circleList.size()-1;
        
        //connect them with a joint
        
        ofxBox2dJoint joint;
        joint.setup(box2d.getWorld(), circleList[i-1].body, circleList[i].body);
        joint.setLength(jointList);
        jointList.push_back( joint );

    }

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
