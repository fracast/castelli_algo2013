//
//  Particle.cpp
//  05_inClassgridParticles
//
//  Created by Francesca Castelli on 9/24/13.
//
//

#include "Particle.h"

Particle::Particle( ofVec2f position){
    pos = position;
    
    radius = 4;
    grayValue = 255;
    
    //radius = ofRandom(1, 5);
    radius = cos( pos.y * 0.1 ) + sin(pos.x * 0.1) + 2.0f;
    radius = sin(( pos.y * pos.x ) * 1.0f) * 2.0f;
 

}

void Particle::update(const ofImage &img){
    
    grayValue = img.getColor(pos.x, pos.y).r;
    radius = ((float)grayValue / 255.0) * 7.0;
}

void Particle::draw(){
    ofSetColor(grayValue);
    ofSetColor(255);
    ofCircle(pos, radius);
}