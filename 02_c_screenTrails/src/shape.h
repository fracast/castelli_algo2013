//
//  shape.h
//  02_c_screenTrails
//
//  Created by Francesca Castelli on 9/3/13.
//
//
#pragma once
#include "ofMain.h"

class shape {
public:
    shape();
    
    void update();
    void draw();
    void xenoToPoint( float catchX, float catchY );
    
    ofPoint pos;
    ofPoint targetPos;
    ofPoint mousePos;
    ofPoint prevPos;
    ofVec2f velocity;
    ofVec2f accel;
    
    float catchUpSpeed;
    
    int counter;
    
};