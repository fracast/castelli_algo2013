
#pragma once
#include "ofMain.h"

class square {
    
public:
    
    square();
    void draw();
    void update();
    
    ofPoint pos;
    ofPoint posa;
    ofPoint posb;
    
    float pct;
    float radius;
    
    void xenoToPoint (float catchX, float catchY);

};