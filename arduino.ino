#include <json/value.h>
#include <fstream>

std::ifstream config_file("config.json", std::ifstream::binary);
config_file >> config;

float minutes = cout<<config["minutes"];
float seconds = minutes * 60;
int pinNumber = cout<<config["pin"];

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  // a1.attach(9);
}

// the loop function runs over and over again forever
void loop() {
  if (minutesToSeconds()) {
    analogWrite(pinNumber, 200);
    delay(1000);
  } else {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
    break;
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
  if (seconds < 0) {
    seconds = 0;
  }

  return true;
}
