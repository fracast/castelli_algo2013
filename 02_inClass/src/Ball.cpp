//
//  Ball.cpp
//  02_inClass
//
//  Created by Francesca Castelli on 9/3/13.
//
//

#include "Ball.h"


Ball::Ball(){
    
    ofSeedRandom();
    
    xVelocity = ofRandom(0.0, 1.0);
    yVelocity = ofRandom(0.0, 1.0);
    
    pos.x = ofGetWindowWidth() /2;
    pos.x = ofGetWindowHeight() /2;
    
    ofSetRectMode(OF_RECTMODE_CENTER);

}

void Ball::update(){
    pos.x += xVelocity * 10.0;
    pos.y += yVelocity * 10.0;
    
    if (pos.x < 0 || pos.x > ofGetWindowWidth() ){
        xVelocity *= -1;
        //xVelocity = xVelocity* -1 other way
    
    }

    if (pos.y < 0 || pos.x > ofGetWindowHeight() ){
        yVelocity *= -1;        
    }

}

void Ball::draw() {
    ofSetColor (255, 0, 255);
    ofCircle(pos.x, pos.y, ball.size);
}