//
//  Particle2.h
//  06_b_attractorsRepulsors
//
//  Created by Francesca Castelli on 10/7/13.
//
//

#include "ofMain.h"

class particle2{
public:
    ofVec2f pos;
    ofVec2f vel;
    ofVec2f frc;   // frc is also know as acceleration (newton says "f=ma")
    
    particle2();
    virtual ~particle2(){};
    
    void resetForce2();
    void addForce2(float x, float y);
    void addDampingForce2();
    void setInitialCondition2(float px, float py, float vx, float vy);
    void update2();
    void draw2();
	
    void addRepulsionForce2( float px, float py, float radius, float strength);
    void addAttractionForce2( float px, float py, float radius, float strength);
    void addClockwiseForce2( float px, float py, float radius, float strength);
    void addCounterClockwiseForce2( float px, float py, float radius, float strength);
    void xenoToPoint2( float catchX, float catchY );
	
    float catchUpSpeed;
	
    float damping;
    
protected:
private:
};
