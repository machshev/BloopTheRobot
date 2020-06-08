#include <Arduino.h>
#include <Tone.h>
#include <LED3.h>
#include <Remote.h>
#include <IRremote.h>

const uint8_t RECV_PIN = 2;
const uint8_t PIR_PIN = 3;
const uint8_t buzzer = 5;

struct LED3 chest_1 = {13, A0, 11};
struct LED3 chest_2 = {A1, A3, A2};
struct LED3 chest_3 = {4, A4, A5};
struct LED3 chest_4 = {8, 7, 6};
struct LED3 eyes = {9, 10, 12};

IRrecv irrecv(RECV_PIN);
decode_results results;

bool motion = false;

void motion_change(){
  motion = !motion;

  if(motion) {
    write_led(chest_1, true, true, true);
  }
  else{
    write_led(chest_1, false, false, false);
  }
}

void setup() {
  setup_led(chest_1);
  setup_led(chest_2);
  setup_led(chest_3);
  setup_led(chest_4);
  setup_led(eyes);

  irrecv.enableIRIn();
  irrecv.blink13(false);

  pinMode(PIR_PIN, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(PIR_PIN), motion_change, CHANGE);
}

void loop() {
/*  if (irrecv.decode(&results)){
    if (results.value != 0xFFFFFFFF){
       Serial.println(results.value, HEX);
    }

    if (results.value == IRC_DIY1){
      play_tune_aha_take_on_me(buzzer);
    }

    irrecv.resume();
  }
*/
  //cycle_led(chest_1);
  //cycle_led(chest_2);
  //cycle_led(chest_3);
  //cycle_led(chest_4);
  //cycle_led_pwm(eyes);

  /*
  if(digitalRead(PIR_PIN) == true){
    motion_detected();
  }
  else {
    motion_stopped();
  }
  */
}
