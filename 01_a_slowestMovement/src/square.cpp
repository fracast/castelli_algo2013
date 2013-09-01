//
//  square.cpp
//  01_1_slowestMovement
//
//  Created by Francesca Castelli on 8/30/13.
//
//

#include "square.h"

rectangle::rectangle(){
    
}

void rectangle::draw() {
    
    ofFill();
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofSetColor(255, 0, 255);
    ofRect(pos.x, pos.y, 20, 20);
}

void rectangle::interpolateByPct(float myPct){
    
    pct = myPct;
    
    pos.x = (1-pct) * posa.x + (pct) * posb.x;
    pos.y = (1-pct) * posb.y + (pct) * posb.y;
    
}