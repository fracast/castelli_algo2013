//
//  rectangle.h
//  02_b_prova
//
//  Created by Francesca Castelli on 9/10/13.
//
//

#ifndef ___2_b_prova__rectangle__
#define ___2_b_prova__rectangle__

#include <iostream>

#endif /* defined(___2_b_prova__rectangle__) */


#pragma once

#include "ofMain.h"

class Rectangle {
    
public:
    
    Rectangle();
    void draw();
    void update();
    
    ofVec2f pos;
    ofColor color;
    
    
    void xenoToPoint (ofVec2f catchUp);
    float catchUpSpeed;
    float angleInDegrees;
    
    
    
};