//
//  Predator.cpp
//  FinalGenetics
//
//  Created by Francesca Castelli
//
//

#include "Predator.h"

void Predator::setup(){
    
    predator.loadImage("predator.png");
    predator.resize(60, 60);
    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    size = 7;
    speed = 4;
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
    ofLine(pos+30, posOfClosestPrey+10);
    predator.draw(pos);
}
