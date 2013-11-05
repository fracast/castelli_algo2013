
//Based on code created by Charlie Whitney

#include "Particle.h"

void Particle::setup( ofVec2f rVel ){
    vel = rVel;
    age = 0;
    lifespan = ofRandom(1000, 1200);

    pos = ofGetWindowSize() / 2.0;
    bIsDead = false;
    
    color.set(0, 100, 255,ofRandom(50, 100));
    //color.setHue(ofRandom(20));
    
    };

void Particle::update(){

    // Generate some noise based on where we are with x and y.  The particle slows down due to our multiplying the
    // velocity by 0.97, but we still want a lot of noise motion.  for this reason we pass in something we know will keep moving.  Time!
    // This is 3D noise.
    float noise = ofNoise(pos.x * 0.005, pos.y * 0.005, ofGetElapsedTimef() * 0.1) * 15.0;

    // How close is our particle to dying.  0.0 = newborn, 1.0 = death
    float agePct = 1 - ((float)age / (float)lifespan);

    // use sin and cos to give us some sweepy circular motion.  The closer we are to death, the more noise we add.
    pos += ofVec2f( cos(noise) * PI, sin(noise)* PI) * (1.0-agePct);
    pos += vel;
    vel *= 0.97;


    age++;

    if( age > lifespan ) {
        bIsDead = true;         // we've had a good life.
    }
};

void Particle::draw(){
    if( bIsDead ){
        return;
    }

    float agePct = 1.0 - ((float)age / (float)lifespan);

    ofCircle( pos, 10.0 * agePct  );         // The older pour particle is, the smaller it gets.
    ofTriangle(pos.x, pos.y, pos.x + 10, pos.y + 10, pos.x - 10, pos.y - 10);
    


};
