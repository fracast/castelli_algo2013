//
//  square.cpp
//  01_d_shaperControls
//
//  Created by Francesca Castelli on 9/14/13.
//
//

#include "square.h"


square::square(){
    
    ofRectMode (OF_RECTMODE_CENTER);
    
}

void square::update(){
    
}

void square::draw(){
    
    ofCircle(pos.x, pos.y, radius);
    
}

void square::xenoToPoint(float catchX, float catchY){
    
    float catchUpSpeed = 0.03f;
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
    radius = ofDist(pos.x, pos.y, catchX, catchY);
    
    ofColor color;
    color.setHsb(140, 255 ,radius);
    ofSetColor(color);
    
}