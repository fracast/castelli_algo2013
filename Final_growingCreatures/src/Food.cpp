//
//  Food.cpp
//  FinalGenetics
//
//  Created by Francesca Castelli 
//
//

#include "Food.h"

void Food::setup() {

    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
}

void Food::update(){
    
    
}

void Food::draw() {
    ofPushStyle();
    ofSetColor(0, 255, 0);
    ofCircle(pos.x, pos.y, 10);
    ofPopStyle();
}