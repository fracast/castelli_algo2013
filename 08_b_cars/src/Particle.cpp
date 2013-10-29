//
//  Particle.cpp
//  08_b_cars
//
//  Created by Francesca Castelli on 10/22/13.
//
//

#include "Particle.h"

Particle::Particle() {
    mass = 1.0;
    pos = ofGetWindowSize() / 2.0;
    carColor.set(50, 72, 171);
    
    maxSpeed = 10.0; // started with 10.0; try 40
    maxForce = 0.6; // smaller, b/c force doesn't accumulate; started at 0.4; try 0.8
    
    slowDownRadius = 200.0; // can randomize a bunch to give natural-looking motion
    // randomizing little variables can make things look real
    // have them react to each other and get traffic jams -- whee!
}

void Particle::applyForce(ofVec2f force){
    //accel += force;
    accel += (force / mass);
}

void Particle::update(){
    vel += accel;
    pos += vel;
    
    accel *= 0;
}

void Particle::seek(ofVec2f dest) {
    ofVec2f desired = dest - pos;
    
    if (desired.length() < slowDownRadius) {
        float newMag = ofMap (desired.length(), 0, slowDownRadius, 0, maxSpeed);
        desired.normalize();
        desired *= newMag; // instead of multiplying by maxSpeed
    } else {
        
        desired.normalize();
        desired *= maxSpeed; // gives maximum can be traveling to destination
        // desired *= 0.05; // not a great solution for easing to destination
    }
    
    ofVec2f steer = desired - vel; // will be acceleration
    steer.limit( maxForce ); // like ofClamp for a vector
    
    applyForce( steer );
}

void Particle::draw() {
    //    ofCircle( pos, mass*10 );
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofPushMatrix();{
        ofTranslate(pos);
        float rotAmt = atan2(vel.y, vel.x); // our velocity is already directional
        ofRotate( ofRadToDeg(rotAmt) + 90 );
        
        ofSetColor(carColor);
        ofRect(0, 0, 20, 40);
        ofSetColor(255, 255, 0);
        ofCircle(-5, -20, 2, 2);
        ofCircle(5, -20, 2, 2);
    }ofPopMatrix();
}

void Particle::noCrash(Particle car){
    if (pos.distance(car.pos) < 100){
        ofVec2f avoid;
        avoid.x = car.vel.x * -1;
        avoid.y = car.vel.y * -1;
        avoid.normalize();
//        ofVec2f diff = pos - dest;
//        float strength = 1 -(diff.length()/200.0);
//        applyForce( diff.normalized() * strength );
    }
}

//void Particle::addRepulsionForce(const ofVec2f &dest){
//    ofVec2f diff = pos - dest;
//    float strength = 1 -(diff.length()/200.0);
//    applyForce(diff.normalized() * strength );
//}



