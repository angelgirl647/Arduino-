#include <Servo.h>

int piezoPin=9; 
Servo servoLeft; 
Servo servoRight;  
int length = 2;

void setup() {
  // put your setup code here, to run once:
servoLeft.attach(13); 
servoRight.attach(12); 
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
pinMode(piezoPin, OUTPUT); 
}

void loop() {
  tone(piezoPin, 659); 
  delay(500); 
  tone(piezoPin, 587); 
  delay(500); 
  tone(piezoPin, 587); 
  delay(500); 
  tone(piezoPin, 523); 
  delay(500); 
  tone(piezoPin, 659); 
  delay(800); 
  tone(piezoPin, 440); 
  delay(800); 
//for(int i=0; i<2; i++){
//danceNow();
//delay(100);
//inBetween();
//delay(1000);
//fullCircle();
//delay(2500);
//inBetween();
//delay(100);
//}
}


void goForward() {
  servoLeft.writeMicroseconds(1700); 
  servoRight.writeMicroseconds(1300); 
}

void goBackwards(){
  servoLeft.writeMicroseconds(1300); 
  servoRight.writeMicroseconds(1700);
}

void turnLeft(){
  servoRight.writeMicroseconds(1000);
}

void turnRight(){
  servoLeft.writeMicroseconds(2000);
}

void danceNow(){
  goForward();
  delay(600);
  goBackwards();
  delay(600);
  goForward();
  delay(600);
  goBackwards();
  delay(600); 
}

void inBetween(){
  for(int i = 0; i < length; i++){
    turnLeft();
    delay(500);
    goBackwards();
    delay(500);
    turnRight();
    delay(500);
    goBackwards();
    delay(500);
  }
}

void fullCircle(){
  for (int i=0; i < 100; i++){
    turnLeft();
  }
}

