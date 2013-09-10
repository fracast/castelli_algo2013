//
//  square.h
//  02_b_xenosVectors
//
//  Created by Francesca Castelli on 9/9/13.
//
//

#ifndef ___2_b_xenosVectors__square__
#define ___2_b_xenosVectors__square__

#include <iostream>

#endif /* defined(___2_b_xenosVectors__square__) */


#pragma once
#include "ofMain.h"

class rectangle{
public:
    rectangle();
    
    void xenoToPoint(float catchX, float catchY);
    void draw();
    void update();
    
    ofVec2f pos;
    
    float catchUpSpeed;


};