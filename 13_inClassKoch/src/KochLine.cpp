//
//  KochLine.cpp
//  13_inClassKoch
//
//  Created by Francesca Castelli on 11/19/13.
//
//

#include "KochLine.h"

KochLine::KochLine( ofVec2f _start, ofVec2f _end ){
    start = _start;
    end = _end;
}

float KochLine::getLength(){
    return start.distance(end);
}

void KochLine::draw(){
    ofLine( start, end );
}

ofVec2f KochLine::a(){
    return start;
}

ofVec2f KochLine::b(){
    ofVec2f line = (end-start) * 0.333333;
    return start + line;
}

ofVec2f KochLine::c(){
    ofVec2f line = (end-start) * 0.333333;
    line.rotate(-60);
    return b() + line;
}

ofVec2f KochLine::d(){
    ofVec2f line = (end-start) * 0.6666667;
    return start + line;
}

ofVec2f KochLine::e(){
    return end;
}