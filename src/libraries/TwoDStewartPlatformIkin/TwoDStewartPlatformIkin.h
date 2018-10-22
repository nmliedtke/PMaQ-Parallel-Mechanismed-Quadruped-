/*
  TwoDStewartPlatformIkin.h - Library for calculating inverse kinematics of 2D
  Stweart Platform Leg.
  Created by Nicoli Liedtke, October 21, 2018.
*/
#ifndef TwoDStewartPlatformIkin_h
#define TwoDStewartPlatformIkin_h

#include "Arduino.h"




class TwoDStewartPlatformIkin
{
  public:
    TwoDStewartPlatformIkin(double servoFront, double servoBack, double linkFront, double linkBack, double distBetweenServos, double distBetweenLinks);
    JointAngles calculateIkin(double x, double y, double phi);//phi is the angle of the foot. phi = 0 when parallel to ground
  private:
    double _servoFront;
    double _servoBack;
    double _linkFront;
    double _linkBack;
    double _distBetweenServos;
    double _distBetweenLinks;
    double _prevAngle1;
    double _prevAngle2;
);
};

struct JointAngles {
    double joint1Angle;
    double joint2Angle;
};
#endif
