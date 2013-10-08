//
//  Particle.cpp
//  06_a_Solitaire
//
//  Created by Francesca Castelli on 10/4/13.
//
//



#include "Particle.h"

Particle::Particle() {
    mass = 20.0;
    pos.x = ofGetWindowWidth()/2;
    pos.y = 20;
    image.loadImage("card.png");
}

void Particle::applyForce(ofVec2f force){
    //accel += force;
    accel += (force / mass);
}

void Particle::update(){
    vel += accel;
    pos += vel;
    
    if( pos.x < 0 || pos.x > ofGetWindowWidth() ){
        vel.x = -vel.x;
    }
    if( pos.y < 0 || pos.y > ofGetWindowHeight() ){
        vel.y = -vel.y;
    }
    
    
    accel.set(0);
    // we could also do accel *= 0;
}

void Particle::draw() {
    ofSetColor(200);
    ofFill();
    image.draw(pos.x, pos.y, 98, 133);//( pos, mass*10 );
}