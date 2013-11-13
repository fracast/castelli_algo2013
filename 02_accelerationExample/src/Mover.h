//
//  Mover.h
//  02_accelerationExample
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#ifndef ___2_accelerationExample__Mover__
#define ___2_accelerationExample__Mover__

#include <iostream>

#endif /* defined(___2_accelerationExample__Mover__) */

#pragma once
#include "ofMain.h"

class Mover {
    
    public:
    Mover();
    
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f mousePos;
    ofVec2f accel;
    ofVec2f velocity;
    
};