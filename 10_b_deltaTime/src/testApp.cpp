
#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    
    ofSetVerticalSync(true);
	ofSetFrameRate(60);
    
    //    ofBackground(0, 110, 255);
    
    ofSetBackgroundAuto(false);
    ofEnableAlphaBlending();
    
	
	
	for (int i = 0; i < 2000; i++){
		particle myParticle;
		myParticle.setInitialCondition(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}
    
    for (int j = 0; j < 5000; j++){
		particle2 myParticle2;
		myParticle2.setInitialCondition2(ofRandom(0,1000),ofRandom(0,1000),0,0);
		// more interesting with diversity :)
		// uncomment this:
		myParticle2.damping = ofRandom(0.01, 0.05);
		particles2.push_back(myParticle2);
	}
    
    lastTime = ofGetElapsedTimef();
    timeScale = 1.0;
    
}

//--------------------------------------------------------------
void testApp::update(){
    
    float dt = ofGetElapsedTimef() - lastTime;
    lastTime = ofGetElapsedTimef();
    
    
    // on every frame
	// we reset the forces
	// add in any forces on the particle
	// perfom damping and
	// then update
	
	
	for (int i = 0; i < particles.size(); i++){
		particles[i].resetForce();
        particles[i].addAttractionForce(mouseX, mouseY, 1000, 0.05);
		particles[i].addRepulsionForce(mouseX, mouseY, 30, 35);
		
		particles[i].addCounterClockwiseForce(mouseX, mouseY, 1000, 0.05);
        
        //		particles[i].addClockwiseForce(mouseX, mouseY, 200, 1);
        //		particles[i].addForce(0,0.04);  // gravity
        
		particles[i].addDampingForce();
		particles[i].update();
        
        particleList[i].update( dt * 40 * timeScale );
        
        if (i == 0){
            particles[i].xenoToPoint(mouseX, mouseY);
        }else{
            particles[i].xenoToPoint(particles[i-1].pos.x, particles[i-1].pos.y);
        }
	}
    
    for (int i = 0; i < particles2.size(); i++){
		particles2[i].resetForce2();
        particles2[i].addAttractionForce2(mouseX, mouseY, 1000, 0.05);
		particles2[i].addRepulsionForce2(mouseX, mouseY, 100, 50);
		
		particles2[i].addCounterClockwiseForce2(mouseX, mouseY, 1000, 0.1);
        
        //        particles[i].addClockwiseForce(mouseX, mouseY, 1000, 0.05);
        //		particles[i].addForce(0,0.04);  // gravity
        
		particles2[i].addDampingForce2();
		particles2[i].update2();
        
        particleList[i].update( dt * 40 * timeScale );
        
        if (i == 0){
            particles2[i].xenoToPoint2(mouseX, mouseY);
        }else{
            particles2[i].xenoToPoint2(particles2[i-1].pos.x, particles2[i-1].pos.y);
        }
	}
    
}

//--------------------------------------------------------------
void testApp::draw(){
    //
    //    ofColor colorOne;
    //    ofColor colorTwo;
    //
    //    colorTwo.set (0, 20, 255);
    //    colorOne.set (0, 100, 255);
    //
    //    ofBackgroundGradient(colorOne, colorTwo);
    
    ofFill();
    
    ofSetColor(0,100,255, 255*0.05);
    ofGradientMode();
    ofRect( ofGetWindowRect() );
    
    //ofNoFill();
    ofFill();
    ofSetColor(245, 255, 0, 100);
    
	for (int i = 0; i < particles.size(); i++){
		particles[i].draw();
        particles[i].xenoToPoint(mouseX, mouseY);
        
	}
    
    for (int j = 0; j < particles2.size(); j++){
		particles2[j].draw2();
        particles2[j].xenoToPoint2(mouseX, mouseY);
        
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
