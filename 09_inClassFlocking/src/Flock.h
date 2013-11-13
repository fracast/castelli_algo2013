//
//  Flock.h
//  09_inClassFlocking
//
//  Created by Francesca Castelli on 10/22/13.
//
//

#pragma once
#include "ofMain.h"
#include "Boid.h"

class FlockController {
public:
    FlockController();
    
    void applyForces (float zoneRadius, float SeparateThresh=0.4, float alignThresh=0.7 );
    void addParticle( int numParticles );
    void update();
    void draw();
    
    vector <Boid> boidList;
    
};