//
//  Particle.h
//  06_b_attractorsRepulsors
//
//  Created by Francesca Castelli on 10/7/13.
//
//
#ifndef PARTICLE_H
#define PARTICLE_H

#include "ofMain.h"

class particle{
public:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
    
    particle();
    virtual ~particle(){};
    
    void resetForce();
    void addForce(float x, float y);
    void addDampingForce();
    void setInitialCondition(float px, float py, float vx, float vy);
    void update();
    void draw();
	
    void addRepulsionForce( float px, float py, float radius, float strength);
    void addAttractionForce( float px, float py, float radius, float strength);
    void addClockwiseForce( float px, float py, float radius, float strength);
    void addCounterClockwiseForce( float px, float py, float radius, float strength);
    void xenoToPoint( float catchX, float catchY );
	
    float catchUpSpeed;
	
    float damping;
    
protected:
private:
};

#endif // PARTICLE_H