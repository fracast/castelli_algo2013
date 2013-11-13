//
//  Particle.cpp
//  Forces
//
//  Created by Charlie Whitney on 9/30/13.
//
//

#include "Particle.h"

Particle::Particle() {
    mass = 1.0;
}

void Particle::applyForce(ofVec2f force){
    accel += (force / mass);
}

void Particle::update( float dt ){
    vel += accel;
    pos += (vel * dt);
    
//    vel*= 0.97;

    if(pos.x<0 || pos.x > ofGetWindowWidth() ){
        vel.x *= -1;
    }
    
    if(pos.y<0 || pos.x > ofGetWindowHeight() ){
        vel.y *= -1;
    }
    
    accel.set(0);
}

void Particle::draw() {
    ofSetColor(0, ofRandom(200, 255), ofRandom(200, 255));
    ofCircle( pos, 2 );
}