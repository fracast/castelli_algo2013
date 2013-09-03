//
//  square.cpp
//  01_c_AtoB
//
//  Created by Francesca Castelli on 8/30/13.
//
//

#include "square.h"

rectangle::rectangle(){
    
    catchUpSpeed = 0.03f;
    
}

void rectangle::update(){
    
    if (newPos == true) {
        
        pos.x = ofGetMouseX();
        pos.y = ofGetMouseY();
        
    }
        
}

void rectangle::draw(){
    
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255, 0, 255);
    ofRect(pos.x, pos.y, 20, 20);
    
}

void rectangle::xenoToPoint(float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}