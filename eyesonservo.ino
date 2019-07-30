#include <VarSpeedServo.h> 
long ranDelay;
long ranSpeed;
VarSpeedServo myservo;
VarSpeedServo myservo2;// create servo object to control a servo 
 
void setup() {
  myservo.attach(9);
  myservo2.attach(8);// attaches the servo on pin 9 to the servo object 
} 
 
void loop() {
  ranDelay = random(1000,7000);
  ranSpeed = random(10,50);
  delay(ranDelay);
  myservo.write(20, ranSpeed);
  myservo2.write(20, ranSpeed);
  myservo.wait();
  myservo2.wait();
  ranDelay = random(1000,7000);
  ranSpeed = random(10,50);// move to 180 degrees, use a speed of 30, wait until move is complete
  delay(ranDelay);
  myservo.write(80, ranSpeed);
  myservo2.write(80, ranSpeed);
  myservo.wait();
  myservo2.wait();// move to 0 degrees, use a speed of 30, wait until move is complet
}
