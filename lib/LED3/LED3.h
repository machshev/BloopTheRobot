#ifndef __LED3_H__
#define __LED3_H__

#include <Arduino.h>

struct LED3 {
  uint8_t red;
  uint8_t green;
  uint8_t blue;
};

void setup_led(struct LED3 led);
void write_led(struct LED3 led, bool red, bool green, bool blue);
void write_led_pwm(struct LED3 led, int red, int green, int blue);
void cycle_led(struct LED3 led);
void cycle_led_pwm(struct LED3 led);

#endif
