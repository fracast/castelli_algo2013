//
//  KochLine.h
//  13_inClassKoch
//
//  Created by Francesca Castelli on 11/19/13.
//
//

#pragma once
#include "ofMain.h"

class KochLine {
public:
    KochLine( ofVec2f _start, ofVec2f _end );
    void draw();
    
    float getLength();
    
    ofVec2f start, end;
    ofVec2f a();
    ofVec2f b();
    ofVec2f c();
    ofVec2f d();
    ofVec2f e();
    
};