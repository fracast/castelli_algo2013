//
//  Planet.cpp
//  06_inClassAttraction
//
//  Created by Francesca Castelli on 10/1/13.
//
//

#include "Planet.h"

Planet::Planet() {
    mass = 1.0;
    G = 0.4;
    
}

void Planet::applyForce(ofVec2f force){
    acc += (force / mass);
    

}

void Planet::update(){
    vel += acc;
    pos += vel;
    
    acc.set(0);
    
}

void Planet::draw(){
    ofCircle(pos, mass *10.0);
}

ofVec2f Planet::attract(Planet p){
    ofVec2f forceDir = pos - p.pos;
    float dist = forceDir.length();
    
    forceDir.normalize();
    
    float pullStrength = (G * mass * p.mass)/(dist*dist);
    
    return forceDir * pullStrength;
    
}