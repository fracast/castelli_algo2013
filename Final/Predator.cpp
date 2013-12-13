//
//  Predator.cpp
//  FinalGenetics
//
//  Created by Francesca Castelli
//
//

#include "Predator.h"

void Predator::setup(){
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    size = 7;
    speed = 3;
}

void Predator::update(vector<Prey>& preys){
    if(preys.size()==0) return;
    
    //identify position of closest prey
    float shortestDistPrey = FLT_MAX;
    for(int i=0; i<preys.size(); i++){
        float dPrey = ofDist(pos.x, pos.y, preys[i].pos.x, preys[i].pos.y);
        if(dPrey < shortestDistPrey){
            shortestDistPrey = dPrey;
            posOfClosestPrey = preys[i].pos;
        }
    }
    
    //move towards closest food
    ofPoint direction;
    direction = posOfClosestPrey - pos;
    direction.normalize();
    pos += direction * speed;
    
    //eat
    for(int i=0; i<preys.size(); i++){
        float dPrey = ofDist(pos.x, pos.y, preys[i].pos.x, preys[i].pos.y);
        if(dPrey < size){
            size += 3;
            speed *= 0.8;
            preys.erase(preys.begin()+i);
        }
    }
}

void Predator::draw(){
    ofSetColor(0, 255, 255);
    ofCircle(pos, size);
    ofLine(pos, posOfClosestPrey);
}
