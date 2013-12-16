//
//  Food.cpp
//  FinalGenetics
//
//  Created by Francesca Castelli 
//
//

#include "Food.h"

void Food::setup() {
    food.loadImage("food.png");
    food.resize(20, 20);
    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
}

void Food::update(){
    
    
}

void Food::draw() {
    
//    ofSetColor(0, 255, 0);
    food.draw(pos);
}