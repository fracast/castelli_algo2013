//
//  Particle.cpp
//  06_a_Solitaire
//
//  Created by Francesca Castelli on 10/4/13.
//
//



#include "Particle.h"

Particle::Particle() {
    mass = 10.0;
    pos.x = 10;
    pos.y = 10;
    image.loadImage("card.png");
}

void Particle::applyForce(ofVec2f force){
    //accel += force;
    accel += (force / mass) * TWO_PI;
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
    image.draw(pos.x, pos.y, mass*20, mass*30);//( pos, mass*10 );
}