#include <LED3.h>


void setup_led(struct LED3 led){
  pinMode(led.red, OUTPUT);
  pinMode(led.green, OUTPUT);
  pinMode(led.blue, OUTPUT);
}

void write_led(struct LED3 led, bool red, bool green, bool blue){
  digitalWrite(led.red, red);
  digitalWrite(led.green, green);
  digitalWrite(led.blue, blue);
}

void write_led_pwm(struct LED3 led, int red, int green, int blue){
  analogWrite(led.red, red);
  analogWrite(led.green, green);
  analogWrite(led.blue, blue);
}


void cycle_led(struct LED3 led) {
  write_led(led, HIGH, LOW, LOW);
  delay(500);
  write_led(led, LOW, HIGH, LOW);
  delay(500);
  write_led(led, LOW, LOW, HIGH);
  delay(1000);
}

void cycle_led_pwm(struct LED3 led) {
  write_led(led, 255, 0, 0);
  delay(500);
  write_led(led, 0, 255, 0);
  delay(500);
  write_led(led, 0, 0, 255);
  delay(1000);
}