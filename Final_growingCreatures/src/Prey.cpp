//
//  bites.cpp
//  FinalGenetics
//
//  Created by Francesca Castelli//
//

#include "Prey.h"

void Prey::setup(){
    

    
    pos.x = ofRandomWidth();
    pos.y = ofRandomHeight();
    size = 5;
    speed = 1;
}

void Prey::update(vector<Food>& bites){
    
    if(bites.size()==0) return;
    
    //step 1 identify position of closest food
    float shortestDistance = FLT_MAX;
    for(int i=0; i<bites.size(); i++){
        float d = ofDist(pos.x, pos.y, bites[i].pos.x, bites[i].pos.y);
        if( d < shortestDistance) {
            shortestDistance = d;
            posOfClosestFood = bites[i].pos;
        }
    }
    
    //step 2: move towards closest food
    ofPoint direction; //difference
    direction = posOfClosestFood - pos;
    direction.normalize();
    
    pos += direction * speed;
    
    
    //step 3: Eat
    
    for(int i=0; i<bites.size(); i++){
        float d = ofDist(pos.x, pos.y, bites[i].pos.x, bites[i].pos.y);
        if(d<size){
            size += 3;
            speed *= 0.8;
            bites.erase(bites.begin() + i);
        }
    }
}

void Prey::draw(){
    ofPushStyle();
    ofLine(pos, posOfClosestFood);
    ofSetColor(255, 255, 0);
    ofCircle(pos.x, pos.y, size);
    ofPopStyle();

}