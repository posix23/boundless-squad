float minutes = 0.5;
float seconds = 10 + 1; //minutes * 60;
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

// the loop function runs over and over again forever
void loop() {
  if (minutesToSeconds()) {
    analogWrite(pinNumber, 200);
    analogWrite(pinNumber2, 200);
    analogWrite(pinNumber3, 200);
    analogWrite(pinNumber4, 200);
    delay(1000);
  } else {
    Serial.println("Stop");
    while (true) {
      analogWrite(pinNumber, 0);
      analogWrite(pinNumber2, 0);
      analogWrite(pinNumber3, 0);
      analogWrite(pinNumber4, 0);
    }
  }
}

/**
 * Convert from minutes to seconds and check if the time is still on
 * @return {boolean} - True if the time is still on
 */
bool minutesToSeconds() {
  if (seconds == 0) {
    return false;
  }
  seconds--;
  Serial.println(seconds);
  if (seconds < 0) {
    seconds = 0;
  }
  return true;
}
