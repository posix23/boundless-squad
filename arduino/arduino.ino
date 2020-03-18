// Intended for Arduino Uno R3
// Boundless Squad

int pinNumber = 11;
int pinNumber2 = 5;
int pinNumber3 = 9;
int pinNumber4 = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pinNumber, OUTPUT);
  pinMode(pinNumber2, OUTPUT);
  pinMode(pinNumber3, OUTPUT);
  pinMode(pinNumber4, OUTPUT);
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
  runMotors(0);
  // If there is data coming from the bluetooth module, then the motors will vibrate
  while (Serial.available() > 0) {
      Serial.println("Start");
      Serial.flush();
      runMotors(200);
      delay(200);
      Serial.println("Stop");
      runMotors(0);
  }
}
