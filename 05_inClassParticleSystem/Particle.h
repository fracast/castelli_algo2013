//
//  Particle.h
//  05_inClassParticleSystem
//
//  Created by Francesca Castelli on 9/24/13.
//
//

#pragma once
#include "ofMain.h"

class Particle{
public:
    Particle();//if you declare this here you are actually doing something with this
    //~Particle();//destructor
    
    void update();
    void draw();
    
    void setParams(float px, float py, float vx, float vy);
    void addForce( ofVec2f force );
    void addDampingForce();
    void resetForces();
    
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;

    ofVec2f damping;

};

