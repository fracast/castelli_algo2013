//
//  Rectangle.cpp
//  02_MultipleXenos
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#include "Rectangle.h"

Rectangle::Rectangle(){
    ofRectMode( OF_RECTMODE_CENTER );
    catchUpSpeed = 0.03;
}

void Rectangle::xenoToPoint(float catchX, float catchY){
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
    pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}

void Rectangle::draw(){
    ofSetColor(255.0 * ( pos.y / ofGetWindowHeight()), 255.0 * ( pos.y / ofGetWindowHeight()), 0);
    ofRect (pos.x, pos.y, 20, 20);
}