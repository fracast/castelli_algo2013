
//
//  Particle2.cpp
//  06_b_attractorsRepulsors
//
//  Created by Francesca Castelli on 10/7/13.
//
//

#include "Particle2.h"
#include "ofMain.h"

//--------------------------------------------
particle2::particle2(){
    setInitialCondition2(ofGetWindowWidth(), ofGetWindowHeight(), ofGetWindowWidth(), ofGetWindowHeight());
    damping = 0.09f;
}

//--------------------------------------------
void particle2::resetForce2(){
    //reset forces every frame
    frc.set(0,0);
}

//--------------------------------------------
void particle2::addForce2(float x, float y){
    //add a force in X and Y for this frame.
    frc.x = frc.x + x;
    frc.y = frc.y + y;
}

//--------------------------------------------
void particle2::addDampingForce2(){
    //usual way is *0.99
    //damping is force acting in the opposite direction as velocity
    
    frc.x = frc.x - vel.x * damping;
    frc.y = frc.y - vel.y * damping;
}

//--------------------------------------------
void particle2::addRepulsionForce2(float px, float py, float radius, float strength){
    
    ofVec2f posOfForce;
    posOfForce.set(px, py);
    
    ofVec2f diff = pos - posOfForce;
    
    if (diff.length() < radius) {
        float pct = 1 - (diff.length() / radius);
        diff.normalize();
        frc.x -= diff.x * pct * strength;
        frc.y -= diff.y * pct * strength;
    }
}

//--------------------------------------------
void particle2::addAttractionForce2( float px, float py, float radius, float strength){
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.x * pct * strength;
		frc.y -= diff.y * pct * strength;
	}
	
}


//------------------------------------------------------------
void particle2::addClockwiseForce2( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.x * pct * strength;
		frc.y += diff.y * pct * strength;
	}
	
}

//------------------------------------------------------------
void particle2::addCounterClockwiseForce2( float px, float py, float radius, float strength){
	
	
	ofVec2f posOfForce;
	posOfForce.set(px, py);
	
	ofVec2f diff = pos - posOfForce;
	
	if (diff.length() < radius){
		float pct = 1 - (diff.length() / radius);
		diff.normalize();
		frc.x -= diff.y * pct * strength;
		frc.y += diff.x * pct * strength;
	}
	
}





//------------------------------------------------------------
void particle2::setInitialCondition2(float px, float py, float vx, float vy){
    pos.set(px,py);
	vel.set(vx,vy);
}


//------------------------------------------------------------
void particle2::xenoToPoint2 (float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}

//------------------------------------------------------------
void particle2::update2(){
	vel += frc *2;
	pos += vel;
}

//------------------------------------------------------------
void particle2::draw2(){
    ofSetColor(255, 0, 255, 100);
    ofCircle(pos.x, pos.y, 1.1);
}


