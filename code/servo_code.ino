#include <Servo.h>

Servo myServo;  // create servo object to control a servo

void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object, this is where the first index finger servo will be connected
}

void loop() {
  // Sweep from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myServo.write(angle);  // reset servo position
    delay(10);  // waits for the servo to reach the position
  }

  // Sweep from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myServo.write(angle);  // set the servo position
    delay(10);  // waits for the servo to reach the position
  }
}
