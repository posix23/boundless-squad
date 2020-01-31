#include <Servo.h>

Servo s1;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(12, OUTPUT);

  a1.attach(9);
}

// the loop function runs over and over again forever
void loop() {
  // digitalWrite(12, HIGH); // turn the LED on (HIGH is the voltage level)
  // delay(1000);                     // wait for a second
  // digitalWrite(12, LOW);  // turn the LED off by making the voltage LOW
  // delay(1000);                     // wait for a second

  s1.write(90);
  delay(10);
  s1.write(0);
  delay(10);
}
