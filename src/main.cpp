#include <Arduino.h>
#include <Tone.h>
#include <LED3.h>

const uint8_t buzzer = 5;

struct LED3 chest_1 = {13, A0, 11};
struct LED3 chest_2 = {A1, A3, A2};
struct LED3 chest_3 = {4, A4, A5};
struct LED3 chest_4 = {8, 7, 6};
struct LED3 eyes = {12, 10, 9};

void setup_leds(){
  setup_led(chest_1);
  setup_led(chest_2);
  setup_led(chest_3);
  setup_led(chest_4);
  setup_led(eyes);
}

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  play_tune_aha_take_on_me(buzzer);
}
