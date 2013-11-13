//
//  Particle.h
//  09_c_squashStretch
//
//  Created by Francesca Castelli on 10/29/13.
//  Based on Single Particle code by CHarlie Whitney
//

#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle();
    
    void update();
    void draw();
    
    void setParams( float px, float py, float vx, float vy );
    void addForce( ofVec2f force );
    void addDampingForce();
    void resetForces();
    void squash();
    void stretch();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;
    ofVec2f damping;
    
};