//
//  Firework.h
//  04_fireworks
//
//  Created by Francesca Castelli on 9/20/13.
//
//


#pragma once
#include "ofMain.h"

class Firework {
public:
    Firework(){}
    void setup(ofVec2f rVel);
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    
    ofColor color;
    
    int age, lifespan;
    bool bIsDead;
    
};