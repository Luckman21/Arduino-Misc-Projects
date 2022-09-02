#include <Stepper.h>
Stepper myStepper(32, 2,4,3,5);

int xPin = A0; //pin for LDR
int xValue; //value to save to LDR
int yPin = A1;
int yValue;
int keyPin = 8; //Z-axis attach to digital 8
int direction = 32; //direction is (positive-clockwise) and has a value of 32

void setup() {
  Serial.begin(9600); //initialize the serial port
  pinMode(keyPin, INPUT_PULLUP); //set keyPin as INPUT
}

void loop() {
  xValue = analogRead(xPin);//taking the reading for the x axis from joystick and save them in xValue
  int motorSpeed = 0;

  if(xValue >= 520){
    motorSpeed = map(xValue,520,1023,0,600);
    direction = 1;
  }

  if(xValue < 510){
    motorSpeed = map(xValue,0,510,600,0);
    direction = -1;
  }

  if (motorSpeed>0){
    myStepper.setSpeed(motorSpeed);
    myStepper.step(direction);
  }
}
