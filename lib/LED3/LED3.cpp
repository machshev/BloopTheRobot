#include <LED3.h>


void setup_led(struct LED3 led){
  pinMode(led.red, OUTPUT);
  pinMode(led.green, OUTPUT);
  pinMode(led.blue, OUTPUT);
}


void write_led(struct LED3 led, int red, int green, int blue){
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
