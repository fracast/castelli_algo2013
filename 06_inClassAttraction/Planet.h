//
//  Planet.h
//  06_inClassAttraction
//
//  Created by Francesca Castelli on 10/1/13.
//
//

#pragma once
#include "ofMain.h"

class Planet {
public:
    Planet();
    
    void applyForce ( ofVec2f force);
    
    void update();
    void draw();
    
    ofVec2f attract(Planet p);
    ofVec2f pos, vel, acc;
    
    float mass;
    
    float G;
};

