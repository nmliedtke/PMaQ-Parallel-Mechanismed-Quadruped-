
#include <LegController.h>
#include "Arduino.h"
#include <Servo.h>


LegController legController;
Servo servo;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  legController.attach(9,10);
  //servo.attach(9);
  legController.calibrate(0,0.5,0,0.5);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  legController.move(0.0,0.0);
  delay(1000);
  legController.move(1.0,1.0);
  delay(1000);
  */
  legController.moveTo0();
  delay(1000);
  legController.moveTo90();
  delay(1000);
/*
  servo.write(0);
  delay(1000);
  servo.write(180);
  delay(1000);
  */
}
