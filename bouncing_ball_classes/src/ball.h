//
//  ball.h
//  bouncing_ball_classes
//
//  Created by Mauricio Sanchez Duque on 11/27/12.
//
//

#pragma once

#include "ofMain.h"

class ball: public ofBaseApp{
    
    
public:
    
    ball(); //constructor
    void setup();
    void draw();
    void update();
    
    int x;
    int y;
    
    int xSpeed;
    int ySpeed;
    
    int ballDiam;
    
};


