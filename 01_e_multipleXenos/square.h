#ifndef RECTANGLE_H
#define RECTANGLE_H

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

#endif // RECTANGLE_H
