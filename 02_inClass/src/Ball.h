//
//  Ball.h
//  02_inClass
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#ifndef ___2_inClass__Ball__
#define ___2_inClass__Ball__

#include <iostream>

#endif /* defined(___2_inClass__Ball__) */


#pragma once

#include "ofMain.h"

class Ball{
    public:
    Ball();
    
    void update();
    void draw();
    
    ofVec2f pos; // Vector 2 variable x and y float
    
    float xVelocity;
    float yVelocity;
    

};