//
//  Boid.h
//  09_inClassFlocking
//
//  Created by Francesca Castelli on 10/22/13.
//
//

#pragma once
#include "ofMain.h"

class Boid {
public:
    Boid();
    
    void applyForce(ofVec3f);
    void pullToCenter(ofVec3f center);
    
    void update();
    void draw();
    
    ofVec3f pos, vel, acc;
    float damping;
};