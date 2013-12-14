#pragma once

#include "ofMain.h"
#include "Predator.h"
#include "ofMain.h"
#include "VectorField.h"
#include "Particle.h"


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void mod();
    void addEnvironment();
    void changePrey();
    void changePredator();
    
    VectorField myVectorField;
    vector <Particle> particleList;
    vector <Predator> predators;
    vector <Prey> preys;
    vector <Food> bites;
    
    float addFoodAt;
	float addElements;
    float numFood;
    float numPreys;
    float numPredators;
    int timer;
    bool bHide;

    ofColor color;
    ofColor colorOne;
    ofColor colorTwo;
    
    ofImage bg;
};
