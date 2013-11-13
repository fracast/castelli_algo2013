//
//  Particle.cpp
//  06_inClassForces
//
//  Created by Francesca Castelli on 10/1/13.
//
//

#include "Particle.h"

Particle::Particle(){
    mass = 1.0;
    pos = ofGetWindowSize() / 2;
    
}

Particle::Particle( ofVec2f position ){
    mass = 1.0;
    pos = position;
    
}

void Particle::applyForce(ofVec2f force){
    acc += (force / mass);
}

void Particle::update(){
    vel += acc;
    pos += vel;
    
    if( pos.x < 0 || pos.x > ofGetWindowWidth()){
        vel.x = -vel.x;
    }
    
    if( pos.y < 0 || pos.y > ofGetWindowHeight()){
        vel.y = -vel.y;
    }
    
    acc.set(0);
    
}

void Particle::draw(){
    ofCircle( pos, mass*10.0);
}