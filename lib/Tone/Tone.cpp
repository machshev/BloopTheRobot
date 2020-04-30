#include <Tone.h>

// The melody array 
const uint16_t pitches_ah_ha[] = {
  NOTE_FS5, NOTE_FS5, NOTE_D5, NOTE_B4, NOTE_B4, NOTE_E5, 
  NOTE_E5, NOTE_E5, NOTE_GS5, NOTE_GS5, NOTE_A5, NOTE_B5, 
  NOTE_A5, NOTE_A5, NOTE_A5, NOTE_E5, NOTE_D5, NOTE_FS5, 
  NOTE_FS5, NOTE_FS5, NOTE_E5, NOTE_E5, NOTE_FS5, NOTE_E5
};

const uint16_t durations_ah_ah[] = {
  EIGHTH, EIGHTH, EIGHTH, QUARTER, QUARTER, QUARTER, 
  QUARTER, FIFTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH, 
  EIGHTH, EIGHTH, EIGHTH, QUARTER, QUARTER, QUARTER, 
  QUARTER, FIFTH, EIGHTH, EIGHTH, EIGHTH, EIGHTH
};

const uint8_t note_count_ah_ah = sizeof(pitches_ah_ha)/sizeof(pitches_ah_ha[0]);

/**
 * play_tune() - play a tune using a buzzer
 * @buzzer: pin number the buzzer is connected to
 * @note_count: number of notes in the tune arrays
 * @pitchs: array of notes to play
 * @durations: the durations of the notes
 * 
 * Wrapper around the arduino :c:func:`tone` function
 */
void play_tune(uint8_t buzzer, const uint8_t note_count, const uint16_t pitches[], const uint16_t durations[]) {
    for (uint16_t thisNote = 0; thisNote < note_count; thisNote++){
        tone(buzzer, pitches[thisNote], durations[thisNote]);
        // pause between notes
        int pause = durations[thisNote] * 1.3;
        delay(pause);
        // stop the tone
        noTone(buzzer);
    }
}

/**
 * play_tune_ah_ha() - play the ah ha tune
 * @buzzer: pin the buzzer is connected to
 */
void play_tune_aha_take_on_me(uint8_t buzzer) {
    play_tune(buzzer, note_count_ah_ah, pitches_ah_ha, durations_ah_ah);
}