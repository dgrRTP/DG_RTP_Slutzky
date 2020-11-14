#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	//graphic modifiers
	ofBackground(134, 124, 132);




	// 1.1
	// Mouse Control

	float xorig = 400;
	float yorig = 400;
	float xControl = (mouseX - xorig);
	float yControl = (mouseY - yorig);
	float interactionAngle = -atan2(xControl, yControl);

	float Pi = (3.14159265359);

	float adjustedAngle = ofAngleDifferenceRadians(interactionAngle, Pi);
	float remapAngle = ofMap(interactionAngle, -(0.5*Pi), (0.5*Pi), 0, 200);
	int remap2 = abs(remapAngle - 100);
	float remapAngleFinal = ofMap(remap2, -100, 100, 0, 255);
	float transparency = (remapAngleFinal - 100);

	float width = (5);
	float height = (150);

	glEnable(GL_DEPTH_TEST);

	// 1.2
	// Registration Mark 


	ofFill();

	ofPushMatrix();
	ofSetColor(255, 255, 255, 255);
	ofTranslate(xorig, yorig, 200);
	ofRotateRad(interactionAngle);
	ofDrawRectangle(-.5*width, 0, width, (0.5*height));
	ofSetColor(0, 0, 0, 255);
	ofDrawRectangle(-.5*width, -.5*height, width,(0.5*height));
	ofPopMatrix();




	ofNoFill();

	// 2.1
	// 9-Grids
			// set reference variables for angle modifiers
	float VarA = 2;
	float VarB = 3.7;
	float VarC = .5;
	float VarD = 3.8;




	for (int i = 0; i < 9; i++) {
		//2.1
		//9-Grid [RED]
		ofSetColor(190, 27, 0,transparency);
		ofSetLineWidth(12);

		//Set up base path


		float radius = ofMap(sin(ofGetElapsedTimef()*.300), -1, 1, 250, 400);
		float angle = (ofGetElapsedTimef()) + (.01*i);

		float x = xorig + radius * cos(angle * VarA);
		float y = yorig + radius * sin(angle* VarB);
		float w = xorig + radius * cos(angle * VarC);
		float v = yorig + radius * sin(angle*VarD);
		float midX = ((x + w) / 2);
		float midY = ((y + v) / 2);


		//9-Grid #1
		//Parameters
		float size = 400;
		float length = (size / 3);
		float length2 = (2 * length);


		ofPushMatrix();
		ofTranslate(midX, midY, 0);
		ofRotateDeg(angle*6, midX, midY, 0);
		ofDrawLine(-length, 0 , length2, 0);
		ofDrawLine(0, -length, 0, length2);
		ofDrawLine(length2,length, -length, length);
		ofDrawLine(length, -length, length, length2);
		ofPopMatrix();

		//2.2
		//9-Grid [YELLOW]
		ofSetColor(195,163,16, transparency);
		ofSetLineWidth(18);

		float radiusB = ofMap(sin(ofGetElapsedTimef()*.700), -1, 1, 250, 400);
		float angleB= (ofGetElapsedTimef()) + (.01*i);
		// float radius = (ofGetElapsedTimef()) + 300;


		float xb= xorig - radiusB* cos(angleB* VarA);
		float yb= yorig - radiusB* sin(angleB* .6*VarB);
		float wb = xorig - radiusB * cos(angleB * 6 * VarC);
		float vb= yorig + radiusB* sin(angleB*VarD);
		float midXb= ((xb+ wb)/ 2);
		float midYb= ((yb+ vb)/ 2);


		float sizeb = 650;
		float lengthb= (sizeb/ 3);
		float length2b = (2 * lengthb);

		ofPushMatrix();
		ofTranslate(midXb,midYb,0);
		ofRotateDeg(angle * 6, midXb,midYb,0);
		ofDrawLine(-lengthb,0, length2b,0);
		ofDrawLine(0, -lengthb, 0, length2b);
		ofDrawLine(length2b,lengthb,-lengthb,lengthb);
		ofDrawLine(lengthb,-lengthb,lengthb,length2b);
		ofPopMatrix();


		//2.3
		//9-Grid [BLUE]
		ofSetColor(62,126,203, transparency);
		ofSetLineWidth(24);

		float radiusC = ofMap(sin(ofGetElapsedTimef()*.700), -1, 1, 250, 400);
		float angleC = (ofGetElapsedTimef()) + (.01*i + 300);


		float xc = xorig - radiusC * cos(angleC * VarA);
		float yc = yorig - radiusC * sin(angleC* .6*VarB);
		float wc = xorig - radiusC * cos(angleC * 6 * VarC);
		float vc = yorig + radiusC * sin(angleC *VarD);
		float midXc = ((xc + wc) / 2);
		float midYc = ((yc + vc) / 2);

		float sizec =800;
		float lengthc = (sizec / 3);
		float length2c = (2 * lengthc);

		ofPushMatrix();
		ofTranslate(midXc, midYc, 0);
		ofRotateDeg(angle * 6, midXc, midYc, 0);
		ofDrawLine(-lengthc, 0, length2c, 0);
		ofDrawLine(0, -lengthc, 0, length2c);
		ofDrawLine(length2c, lengthc, -lengthc, lengthc);
		ofDrawLine(lengthc, -lengthc, lengthc, length2c);
		ofPopMatrix();

		//2.4
		//9-Grid [CORAL]
		ofSetColor(199,128, 121, transparency);
		ofSetLineWidth(2);

		float radiusD = ofMap(sin(ofGetElapsedTimef()*.200), -1, 1, 150, 400);
		float angleD = (ofGetElapsedTimef()) + (.01*i - 500);

		float xd = xorig - radiusD * cos(angleD * VarA);
		float yd = yorig - radiusD * sin(angleD* .6*VarB);
		float wd = xorig - radiusD * cos(angleD * 6 * VarC);
		float vd = yorig + radiusD * sin(angleD *VarD);
		float midXd = ((xd + wd) / 2);
		float midYd = ((yd + vd) / 2);

		float sized = 12000;
		float lengthd = (sized / 3);
		float length2d = (2 * lengthd);

		ofPushMatrix();
		ofTranslate(midXd, midYd, 0);
		ofRotateDeg(angle * 6, midXd, midYd, 0);
		ofDrawLine(-lengthd, 0, length2d, 0);
		ofDrawLine(0, -lengthd, 0, length2d);
		ofDrawLine(length2d, lengthd, -lengthd, lengthd);
		ofDrawLine(lengthd, -lengthd, lengthd, length2d);
		ofPopMatrix();

		//2.5
		//9-Grid [LIGHTBLUE]
		ofSetColor(124, 154, 182, transparency);
		ofSetLineWidth(2);

		float radiusE = ofMap(sin(ofGetElapsedTimef()*.100), -1, 1, 150, 400);
		float angleE = (ofGetElapsedTimef()) + (.01*i - 900);


		float xe = xorig - radiusE * cos(angleE * VarA);
		float ye = yorig - radiusE * sin(angleE* .6*VarB);
		float we = xorig - radiusE * cos(angleE * 6 * VarC);
		float ve = yorig + radiusE * sin(angleE *VarD);
		float midXe = ((xe + we) / 2);
		float midYe = ((ye + ve) / 2);


		float sizee = 10000;
		float lengthe = (sizee / 3);
		float length2e = (2 * lengthe);

		ofPushMatrix();
		ofTranslate(midXe, midYe, 0);
		ofRotateDeg(angle * 6, midXe, midYe, 0);
		ofDrawLine(-lengthe, 0, length2e, 0);
		ofDrawLine(0, -lengthe, 0, length2e);
		ofDrawLine(length2e, lengthe, -lengthe, lengthe);
		ofDrawLine(lengthe, -lengthe, lengthe, length2e);
		ofPopMatrix();

		//2.7
		//9-Grid [LIGHTYELLOW]
		ofSetColor(174,164, 98, transparency);
		ofSetLineWidth(2);

		float radiusG = ofMap(sin(ofGetElapsedTimef()*.200), -1, 1, 50,400);
		float angleG = (ofGetElapsedTimef()) + (.01*i - 50);


		float xg = xorig - radiusG * cos(angleG *.1*VarA);
		float yg = yorig - radiusG * sin(angleG* .6*VarB);
		float wg = xorig - radiusG * cos(angleG * .2* VarC);
		float vg = yorig + radiusG * sin(angleG *VarD);
		float midXg = ((xg + wg) / 2);
		float midYg = ((yg + vg) / 2);


		float sizeg = 900;
		float lengthg = (sizeg / 3);
		float length2g = (2 * lengthg);

		ofPushMatrix();
		ofTranslate(midXg, midYg, 0);
		ofRotateDeg(angle * 6, midXg, midYg, 0);
		ofDrawLine(-lengthg, 0, length2g, 0);
		ofDrawLine(0, -lengthg, 0, length2g);
		ofDrawLine(length2g, lengthg, -lengthg, lengthg);
		ofDrawLine(lengthg, -lengthg, lengthg, length2g);
		ofPopMatrix();

		//2.8
		//9-Grid [GREEN]
		ofSetColor(101, 149, 160, transparency);
		ofSetLineWidth(19);

		float radiusH = ofMap(sin(ofGetElapsedTimef()*.800), -1, 1, 480, 600);
		float angleH = (ofGetElapsedTimef()) + (.01*i - 50);


		float xh = xorig - radiusH * cos(angleH *.1*VarA);
		float yh = yorig - radiusH * sin(angleH* .6*VarB);
		float wh = xorig - radiusH * cos(angleH * .2* VarC);
		float vh = yorig + radiusH * sin(angleH *VarD);
		float midXh = ((xh + wh) / 2);
		float midYh = ((yh + vh) / 2);


		float sizeh = 900;
		float lengthh = (sizeh / 3);
		float length2h = (2 * lengthh);

		ofPushMatrix();
		ofTranslate(midXh, midYh, 0);
		ofRotateDeg(angle * 6, midXh, midYh, 0);
		ofDrawLine(-lengthh, 0, length2h, 0);
		ofDrawLine(0, -lengthh, 0, length2h);
		ofDrawLine(length2h, lengthh, -lengthh, lengthh);
		ofDrawLine(lengthh, -lengthh, lengthh, length2h);
		ofPopMatrix();


		//2.9
		//9-Grid [WHITE]
		ofSetColor(203, 203, 212, transparency);
		ofSetLineWidth(2);

		float radiusI = ofMap(sin(ofGetElapsedTimef()*.100), -1, 1, 160, 400);
		float angleI = (ofGetElapsedTimef()) + (.011*i );


		float xi = xorig - radiusI * cos(angleI *.1*VarA);
		float yi = yorig - radiusI * sin(angleI* .6*VarB);
		float wi = xorig - radiusI * cos(angleI * .2* VarC);
		float vi = yorig + radiusI * sin(angleI *VarD);
		float midXi = ((xi + wh) / 2);
		float midYi = ((yi + vh) / 2);

		float sizei = 9000;
		float lengthi = (sizei / 3);
		float length2i = (2 * lengthi);

		ofPushMatrix();
		ofTranslate(midXi, midYi, 0);
		ofRotateDeg(angle * 6, midXi, midYi, 0);
		ofDrawLine(-lengthi, 0, length2i, 0);
		ofDrawLine(0, -lengthi, 0, length2i);
		ofDrawLine(length2i, lengthi, -lengthi, lengthi);
		ofDrawLine(lengthi, -lengthi, lengthi, length2i);
		ofPopMatrix();

		//2.10
		//9-Grid [BLACK]
		ofSetColor(112, 112, 112, transparency);
		ofSetLineWidth(2);

		float radiusJ = ofMap(sin(ofGetElapsedTimef()*.100), -1, 1, 50, 200);
		float angleJ = (ofGetElapsedTimef()) + (.05*i);


		float xj = xorig - radiusJ * cos(angleJ *.1*VarA);
		float yj = yorig - radiusJ * sin(angleJ* .6*VarB);
		float wj = xorig - radiusJ * cos(angleJ * .2* VarC);
		float vj = yorig + radiusJ * sin(angleJ *VarD);
		float midXj = ((xj + wh) / 2);
		float midYj = ((yj + vh) / 2);

		float sizej = 4500;
		float lengthj = (sizej / 3);
		float length2j = (2 * lengthj);

		ofPushMatrix();
		ofTranslate(midXj, midYj, 0);
		ofRotateDeg(angle * 6, midXj, midYj, 0);
		ofDrawLine(-lengthj, 0, length2j, 0);
		ofDrawLine(0, -lengthj, 0, length2j);
		ofDrawLine(length2j, lengthj, -lengthj, lengthj);
		ofDrawLine(lengthj, -lengthj, lengthj, length2j);
		ofPopMatrix();

		//2.11
		//9-Grid [LIGHTGREY]
		ofSetColor(124, 126, 131, transparency);
		ofSetLineWidth(120000);

		float radiusK = ofMap(sin(ofGetElapsedTimef()*.100), -1, 1, 50, 400);
		float angleK = (ofGetElapsedTimef()) + (.01*i);


		float xk = xorig - radiusK * cos(angleK *.1*VarA);
		float yk = yorig - radiusK * sin(angleK* .6*VarB);
		float wk = xorig - radiusK * cos(angleK * .2* VarC);
		float vk = yorig + radiusK * sin(angleK *VarD);
		float midXk = ((xk + wk) / 2);
		float midYk = ((yk + vk) / 2);

		float sizek = 1200;
		float lengthk = (sizek / 3);
		float length2k = (2 * lengthk);

		ofPushMatrix();
		ofTranslate(midXk, midYk, -60);
		ofRotateDeg(angle * 6, midXk, midYk, 0);
		ofDrawLine(-lengthk, 0, length2k, 0);
		ofDrawLine(0, -lengthk, 0, length2j);
		ofDrawLine(length2k, lengthk, -lengthk, lengthk);
		ofDrawLine(lengthk, -lengthk, lengthk, length2k);
		ofPopMatrix();


	}





}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
