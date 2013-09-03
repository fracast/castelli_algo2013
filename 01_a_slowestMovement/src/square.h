//
//  square.cpp
//  01_1_slowestMovement
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
    
    void interpolateByPct(float myPct);
    
    ofPoint pos;
    ofPoint posa;
    ofPoint posb;
    
    float   pct;
    float   velocity;
    
    //    float   radius;
    //    float   radiusa;
    //    float   radiusb;
    
};