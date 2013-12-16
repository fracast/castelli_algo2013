//
//  Food.h
//  FinalGenetics
//
//  Created by Francesca Castelli 
//
//

#pragma once
#include "ofMain.h"

class Food{
public:
    
    void setup();
    void update();
    void draw();
    
    ofVec2f pos;
    ofVec2f vel;
    
    ofImage food;

    
};
