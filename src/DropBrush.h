#pragma once

#include "ofMain.h"

class DropBrush {
    
public:
    DropBrush();
    DropBrush(int histSteps, int sFrames, float mSize);
    ~DropBrush();
    
    void setup();
    void update(ofVec3f newPos);
    void draw();
    
    void kill();
    
    float interpol(float progress, float startVal, float endVal);
    
private:
    
    ofMesh brushMesh;
    ofShader brushShader;
    
    float birthTime;
    float deathTime;
    
    int historySteps = 15;
    int subFrames = 80;

    float maxSize = 15.0;

    ofVec3f position;
    vector<ofVec3f> history;
    
    ofColor startColor = ofColor(255,255,255);
    ofColor endColor   = ofColor(100,30,90);
    ofColor curColor   = ofColor(0,0,0);

};
