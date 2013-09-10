//
//  square.cpp
//  02_b_xenosVectors
//
//  Created by Francesca Castelli on 9/9/13.
//
//

#include "square.h"

rectangle::rectangle(){
    
    ofSetRectMode( OF_RECTMODE_CENTER);
    catchUpSpeed = 0.2;
    
}

void rectangle::update(){
    
}

void rectangle::draw(){
    
    ofSetColor(color);
    ofRect(pos.x, pos.y, 20, 20);
    
}

void rectangle::xenoToPoint( ofVec2f catchUp ){ //credits to bernardo schorr
    
    pos.x = catchUpSpeed * catchUp.x + (1-catchUpSpeed) * pos.x;
    
    pos.y = catchUpSpeed * catchUp.y + (1-catchUpSpeed) * pos.y;
    
}