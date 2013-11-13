#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    int tmp = 5;
    int *myPtr = &tmp; //&tmp can't be on the left side of equation
    int val = *myPtr;
    
    //cout << myPtr << "/" << *myPtr << endl; // *myPtr dereference the pointer

    cout << "the address of tmp is " << &tmp << endl;
    cout << "the address of my Ptr is " << myPtr << "/" << (*myPtr) << endl;
    cout << "the address of my val is " << &val << "/" << val << endl;
    cout << "---------" << endl;
    
    myPtr = &val;
    
    cout << "the address of tmp is " << &tmp << endl;
    cout << "the address of my Ptr is " << myPtr << "/" << (*myPtr) << endl;
    cout << "the address of my val is " << &val << "/" << val << endl;
    cout << "---------" << endl;
    
    testFunction( tmp );
    
    
}

void testApp::testFunction( int &input ){
    
    input = 9;
    int internalPtr = input;
    cout << "Internal ptr :: " << internalPtr << endl;
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
