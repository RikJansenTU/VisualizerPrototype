#include "ofApp.h"
#include "../particle.cpp"

vector<Particle> particles;
int velocity;
int hue;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    velocity = 1;
    hue = 170;
    /*for (int i = 0; i < 1000; i++) {
        particles.push_back(Particle());
    }*/
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].update(hue);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < particles.size(); i++) {
        particles[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    particles.push_back(Particle());
    if (hue < 253) {
        hue += 2;
    }

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
