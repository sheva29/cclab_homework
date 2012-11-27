//
//  ball.cpp
//  bouncing_ball_classes
//
//  Created by Mauricio Sanchez Duque on 11/27/12.
//
//

#include "ball.h"

ball::ball(){
    
}

void ball:: setup(){
    
    x = int (ofRandom(0, ofGetWidth()));
    y = int (ofRandom(0, ofGetHeight()));
    
    xSpeed = int(ofRandom(10,50));
    ySpeed = int(ofRandom(10,50));
    
    ballDiam = int(ofRandom(50,200));
    
    
    
    
    
    
}


void ball:: draw(){
    
    ofEllipse(x, y, ballDiam, ballDiam);
    
}


void ball:: update(){
    
    x += xSpeed;
    y += ySpeed;
    
    if( x > (ofGetWidth()-ballDiam) || x <= ballDiam){
        
        xSpeed = -xSpeed;
    }
    
    if( y > (ofGetHeight()-ballDiam) || y <= ballDiam){
        
        ySpeed = -ySpeed;
        
    }
    
    
}

