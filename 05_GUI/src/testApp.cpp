#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetVerticalSync( true );
    ofBackground(0);
    
    
    
    //button
    gui = new ofxUICanvas(10, 10, 200, 500);
    gui->addLabel("glorious perlin blob");
    gui->addSpacer();
    gui->addButton("Color", false, 44, 44);
    
    //other button
    gui->addSpacer();
    gui->addButton("Noise", false, 44, 44);
    
    //first slider
    gui->addSpacer();
    gui->setColorBack(ofColor(255,100));
    gui->setWidgetColor(OFX_UI_WIDGET_COLOR_BACK, ofColor(255,100, 255));
    gui->addSlider("InnerRadius", 0, 100, 50);
    
    //second slider
    gui->addSpacer();
    gui->setColorBack(ofColor(255,100));
    gui->setWidgetColor(OFX_UI_WIDGET_COLOR_BACK, ofColor(255,100));
    gui->addSlider("OuterRadius", 0, 100, 50);
    
    ofAddListener(gui->newGUIEvent,this,&testApp::onGuiEvent);
    
    //starting parameters
    circleRadius = 100.0;
    outerRadius = 200.0;
    blobColor.set(255, 0, 255);
    
    gui->loadSettings("guiSettings.xml");
}

void testApp::exit() {
    gui->saveSettings("guiSettings.xml");
    delete gui;
}

void testApp::onGuiEvent(ofxUIEventArgs &e) {
    
    
    string name = e.widget->getName();
	int kind = e.widget->getKind();
    
    if( name == "InnerRadius" ){
        ofxUISlider *mySlider = (ofxUISlider *)e.widget;
        circleRadius = mySlider->getScaledValue();
        
        cout << "Got a message! " << name << " - " << mySlider->getValue() << endl;
        
    }else if( name == "OuterRadius"){
        
        ofxUISlider *mySlider = (ofxUISlider *)e.widget;
        outerRadius = mySlider->getScaledValue();
        
    }else if( name == "Color"){
        
        ofxUIButton *Color = (ofxUIButton *)e.widget;
        
        if( Color->getValue() == 0){
            blobColor.set( ofRandom(255), ofRandom(255), ofRandom(255) );
        }
    }else if( name == "Noise"){
        
        ofxUIButton *Noise = (ofxUIButton *)e.widget;
        
        if( Noise->getValue() == 0){
            noisePar = 50.0;
        }
    }
    
    
    //    cout << "Got a message! " << name  << " - " << kind << endl;
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
//    ofSetColor( circleColor );
//    ofCircle( ofGetWindowSize()/2, circleRadius );

    ofSetColor(blobColor);
	
    ofPushMatrix();{
        ofTranslate( ofGetWindowSize() / 2);
        
        ofBeginShape();
        
        noisePar =  20.0f;
        
        for (int i = 0; i < 100; i++){
            float add = ofNoise(i/noisePar, ofGetElapsedTimef() * 3 * (float)ofGetHeight() / (float)ofGetWidth());
            
            // this will draw a circle with a min radius of 200, and a max of 300
            ofVertex( (circleRadius + outerRadius * add) * cos((i/100.0)*TWO_PI),
                     (circleRadius + outerRadius * add) * sin((i/100.0)*TWO_PI));
        }
        ofEndShape();
        
    }ofPopMatrix();
    
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
