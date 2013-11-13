#ifndef RECTANGLE_H
#define RECTANGLE_H


#pragma once
#include "ofMain.h"

class rectangle {
    
    public:
	
    rectangle();
    
    void    update();
    void	draw();
    void	xenoToPoint(float catchX, float catchY);
	
    ofPoint		pos;
    float		catchUpSpeed;

};

rectangle rectagles[10];

#endif // RECTANGLE_H
