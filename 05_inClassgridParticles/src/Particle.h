//
//  Particle.h
//  05_inClassgridParticles
//
//  Created by Francesca Castelli on 9/24/13.
//
//

#pragma once
#include "ofMain.h"

class Particle {
public:
    
    Particle(ofVec2f position);
    
    void update(const ofImage &img);
    void draw();
    
    ofVec2f pos;
    float radius;
    float grayValue;
    
};