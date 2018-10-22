/*
  LegController.cpp - Library for controlling indvidual leg.
  Created by Nicoli Liedtke, October 15, 2018.
*/


#include "Arduino.h"
#include "LegController.h"


LegController::LegController(){
  _frontPos0 = 0;
  _frontPos90 = 0.5;
  _backPos0 = 0;
  _backPos90 = 0.5;
}

void LegController::attach(int pinFront, int pinBack){
  _servoFront.attach(pinFront);
  _servoBack.attach(pinBack);
  _pinFront = pinFront;
  _pinBack = pinBack;
}

//frontPos and backPos expected to be numbers between 0 and 1
void LegController::move(double frontPos, double backPos){
  if(frontPos>1){
    frontPos = 1;
  }
  if(frontPos<0){
    frontPos=0;
  }
  if(backPos>1){
    backPos = 1;
  }
  if(backPos<0){
    backPos=0;
  }

  _servoFront.writeMicroseconds((int) (frontPos*1856+544));
  _servoBack.writeMicroseconds((int) (backPos*1856+544));
}

void LegController::calibrate(double frontPos0, double frontPos90, double backPos0, double backPos90){
  _frontPos0 = frontPos0;
  _frontPos90 = frontPos90;
  _backPos0 = backPos0;
  _backPos90 = backPos90;
}

void LegController::moveTo0(){
  move(0.0,0.0);
}

void LegController::moveTo90(){
  move(_frontPos90, _backPos90);
}

void LegController::setLastXY(double lastX, double lastY){
  _lastX = lastX;
  _lastY = lastY;
}
