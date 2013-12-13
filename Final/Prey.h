//
//  Prey.h
//  FinalGenetics
//
//  Created by Francesca Castelli 
//
//

#include "ofMain.h"
#include "Food.h"

class Prey{
public:
    
    void setup();
    void update(vector<Food>& bites);
    void draw();
    
    float size;
    float speed;
    ofPoint pos;
    ofPoint posOfClosestFood;
    
};