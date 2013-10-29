//
//  Particle.h
//  08_b_cars
//
//  Created by Francesca Castelli on 10/22/13.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    void applyForce( ofVec2f force );
    void update();
    void draw();
    void seek( ofVec2f dest );
    void noCrash (Particle car);
//    void addRepulsionForce(const ofVec2f &dest);
    
    // if this, e.g., is a car, there are limits
    float maxSpeed;
    float maxForce; // limited accel; don't hit a rocket booster when step on gas
    float slowDownRadius;
    float mass;

    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f accel;
    ofColor carColor;
    ofVec2f dest;

};