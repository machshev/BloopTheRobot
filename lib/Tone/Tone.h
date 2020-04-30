#ifndef __TONE_H__
#define __TONE_H__

#include <Arduino.h>
#include <pitches.h>

void play_tune(uint8_t buzzer, const int pitches[], const uint16_t durations[]);
void play_tune_aha_take_on_me(uint8_t buzzer);

#endif