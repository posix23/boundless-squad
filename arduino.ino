void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  int min;

  // a1.attach(9);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);                     // wait for a second

  if (minutesToSeconds) {
    analogWrite(11, 65);
    delay(1000);
  } else {
    break;
  }
}

/**
 * Convert from minutes to seconds and check if the time is still on
 * @return {boolean} - True if the time is still on
 */
bool minutesToSeconds() {
  int sec = min / 60;
  if (sec > 0) {
    return true;
  }

  return false;
}
