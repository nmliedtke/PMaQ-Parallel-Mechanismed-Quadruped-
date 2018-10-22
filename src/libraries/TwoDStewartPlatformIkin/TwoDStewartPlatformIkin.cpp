/*
  2DStewartPlatformIkin.h - Library for calculating inverse kinematics of 2D
  Stweart Platform Leg.
  Created by Nicoli Liedtke, October 21, 2018.
*/


#include "Arduino.h"
#include "2DStewartPlatformIkin.h"


TwoDStewartPlatformIkin::TwoDStewartPlatformIkin(double servoFront, double servoBack, double linkFront, double linkBack, double distBetweenServos, double distBetweenLinks){
  _servoFront = servoFront;
  _servoBack = servoBack;
  _linkFront = linkFront;
  _linkBack = linkBack;
  _distBetweenServos = distBetweenServos;
  _distBetweenLinks = distBetweenLinks;
}

JointAngles TwoDStewartPlatformIkin::calculateIkin(double x, double y, double phi){
  JointAngles returnAngles;
  returnAngles.joint1Angle = -999;
  returnAngles.joint2Angle = -999;


  return returnAngles;
}
