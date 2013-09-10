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

void rectangle::draw(){
    
    ofSetColor(255 * (pos.y / ofGetHeight() ), 0, 0 );
    
    ofRect( pos.x, pos.y, 20, 20 );
}

void rectangle::xenoToPoint(float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}