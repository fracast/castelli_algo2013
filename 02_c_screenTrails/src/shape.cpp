//
//  shape.cpp
//  02_c_screenTrails
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#include "shape.h"

shape::shape(){
    
    ofRectMode(OF_RECTMODE_CENTER);
    catchUpSpeed = 0.05f;
    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    
    velocity.x = ofRandom(-2, 5);
    velocity.y = ofRandom(-2, 5);
    
    counter = 0;
}

void shape::xenoToPoint (float catchX, float catchY){
    
    pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
    
}

void shape::update(){
    
    if (pos != prevPos){
        prevPos = pos;
        
        if (counter < 255) {
            counter += 1;
        }
    }
}

void shape::draw() {
    

    ofSetColor(255, 255 * (pos.y / ofGetHeight() ),255 * (pos.x / ofGetWidth() ));
    ofLine(pos.x, pos.y, (pos.x - 50) * PI, (pos.y - 50) * PI/2);
    
}
    
    
    
