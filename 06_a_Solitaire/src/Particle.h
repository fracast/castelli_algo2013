//
//  Particle.h
//  06_a_Solitaire
//
//  Created by Francesca Castelli on 10/4/13.
//
//

#pragma once

#include "ofMain.h"

class Particle {
public:
    Particle();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f accel;
    float mass;
    
    ofImage image;
    
    void applyForce( ofVec2f force );
    void update();
    void draw();
};