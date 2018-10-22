/*
  LegController.h - Library for controlling indvidual leg.
  Created by Nicoli Liedtke, October 15, 2018.
*/
#ifndef LegController_h
#define LegController_h

#include "Arduino.h"
#include "Servo.h"
#include "../TwoDStewartPlatformIkin/TwoDStewartPlatformIkin.h"



class LegController
{
  public:
    LegController();
    void move(double frontPos, double backPos);
    void attach(int pinFront, int pinBack);
    void attachIkin(double servoFront, double servoBack, double linkFront, double linkBack, double distBetweenServos, double distBetweenLinks);
    void calibrate(double frontPos0, double frontPos90, double backPos0, double backPos90);
    void moveTo0();
    void moveTo90();
    void moveToAngle(double angleFront, double angleBack);
    void moveToXY(double x, double y, double phi);
  private:
    int _pinFront;
    int _pinBack;
    Servo _servoFront;
    Servo _servoBack;
    double _frontPos0;
    double _frontPos90;
    double _frontAngleScale;
    double _backPos0;
    double _backPos90;
    double _backAngleScale;
    double _lastX;
    double _lastY;
    TwoDStewartPlatformIkin _ikin;
    void setLastXY(double lastX, double lastY);
};

#endif
