/** Intended for Arduino Uno R3
 * Boundless Squad
 */

float seconds = 10;
int pinNumber = 11;
int pinNumber2 = 5;
int pinNumber3 = 9;
int pinNumber4 = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("VIBRRRRRRRRRRRATING PILLOW");
}

void runMotors(int freq){
    analogWrite(pinNumber, freq);
    analogWrite(pinNumber2, freq);
    analogWrite(pinNumber3, freq);
    analogWrite(pinNumber4, freq); 
}

// the loop function runs over and over again forever
void loop() {
  Serial.println(Serial.read());
  // If second is 0, then the motors will stop
  if (Serial.available() > 0) {
      Serial.println("Start");
      Serial.flush(); //you might need to see if this is working,  
                      //otherwise you can do a Serial.read() too
      runMotors(200);
      delay(1000 * seconds);
      Serial.println("Stop");
      runMotors(0);
  } else {
      Serial.println("Waiting for the green!");
      runMotors(0);
  }
}
