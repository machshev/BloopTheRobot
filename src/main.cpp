#include <Arduino.h>
#include <Tone.h>

const uint8_t buzzer = 5;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  play_tune_aha_take_on_me(buzzer);
}
