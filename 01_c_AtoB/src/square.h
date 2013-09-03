//
//  square.h
//  01_c_AtoB
//
//  Created by Francesca Castelli on 8/30/13.
//
//


#pragma once

#include "ofMain.h"

class rectangle {
public:
    
    rectangle();
    
    void update();
    void draw();
    
    void	xenoToPoint(float catchX, float catchY);
    
    ofPoint pos;
    ofPoint posa;
    ofPoint posb;
    
    float catchUpSpeed;
    
    bool newPos;
    
};