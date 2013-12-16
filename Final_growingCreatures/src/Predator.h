//
//  Predator.h
//  FinalGenetics
//
//  Created by Francesca Castelli
//
//

#pragma once
#include "ofMain.h"
#include "Prey.h"


class Predator{
public:
    
    void setup();
    void update(vector<Prey>& preys);
    void draw();
    
    float size;
    float speed;
    ofPoint pos;
    ofPoint posOfClosestPrey;
    ofImage predator;
};