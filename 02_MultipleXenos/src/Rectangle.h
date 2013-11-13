//
//  Rectangle.h
//  02_MultipleXenos
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#ifndef ___2_MultipleXenos__Rectangle__
#define ___2_MultipleXenos__Rectangle__

#include <iostream>

#endif /* defined(___2_MultipleXenos__Rectangle__) */


#pragma once
#include "ofMain.h"

class Rectangle{
    public:
    Rectangle();
    
    void xenoToPoint(float catchX, float catchY);
    void draw();
    
    ofPoint pos;
    ofPoint targetPos;
    
    float catchUpSpeed;
    
};