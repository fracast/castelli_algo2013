//
//  Mover.cpp
//  02_accelerationExample
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#include "Mover.h"

Mover::Mover() {
    
    pos = ofGetWindowSize() / 2;
    
    velocity.x = ofRandom( -5.0, 5.0 );
    velocity.y = ofRandom( -5.0, 5.0 );
    
}

void Mover::update(){
    
    accel = (mousePos - pos) * 0.01;
    velocity += accel;
    
    pos += velocity;
    velocity *= 0.97; //taking 3% off velocity
    
}

void Mover::draw(){
    
    ofCircle (pos, 20);
    
}