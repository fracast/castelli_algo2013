//
//  Firework.cpp
//  04_fireworks
//
//  Created by Francesca Castelli on 9/20/13.
//
//

#include "Firework.h"

void Firework::setup(ofVec2f rVel){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(0, 150);
//    pos.x = ofRandom(0, ofGetWindowWidth());
//    pos.y = ofRandom(0, ofGetWindowWidth());
    pos = ofPoint(ofGetMouseX(), ofGetMouseY());
    bIsDead = false;
};

void Firework::update(){
    
    float noise = ofNoise(pos.x, pos.y, ofGetElapsedTimef());
    float agePct = 1 - ((float)age / (float)lifespan);
    
    pos += ofVec2f (cos(noise), sin(noise));
    pos += vel;
    vel *= 0.97;
    
    age++;
    if( age>lifespan ){
        bIsDead = true;
    }
    
};

void Firework::draw(){
    
//    if(bIsDead){
//        return;
//    }
    
    float agePct = 1.0 - ((float)age / (float)lifespan);
    ofCircle(pos, 50.0 * agePct);
    
};