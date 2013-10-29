//
//  Boid.cpp
//  09_inClassFlocking
//
//  Created by Francesca Castelli on 10/22/13.
//
//

#include "Boid.h"

Boid::Boid(){
    damping = ofRandom(0.95, 0.99);
}

void Boid::applyForce(ofVec3f force){
    acc += force;
}

void Boid::pullToCenter(ofVec3f center){
    
}

void Boid::update(){
    
    float minSpeed = 1.0;
    vel += acc;
    
    vel.limit(3.0);
    
    if (vel.lengthSquared() < minSpeed * minSpeed ){ // lengthSquared optimization
        vel.normalized() * minSpeed;
    }
    
    pos += vel;
    vel *= damping;
    acc.set(0);
}

void Boid::draw(){
    ofSetColor(255);
    ofCircle(pos, 2);
    
    ofSetColor(255, 0, 0);
    ofLine(pos, pos - vel * 5.0); //longer the tail the fastest is going
}