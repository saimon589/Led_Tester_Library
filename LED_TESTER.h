#ifndef LED_TESTER_H
#define LED_TESTER_H
#include "Arduino.h"

// Led blink class section.
class Led {
  private:
    int *ledPin;
    int size;
  
  public:
    Led(int ledPin_[], int size);
    void pin_setup();
    void on();
    void off();
    void blink(int time_delay);
};

// Led chaser class section.
class LedChaser {
  private:
    int *ledPin;
    int size;

  public:
    LedChaser(int ledPin_[], int size);
    void pin_setup();
    void chaser(int time_delay);
};

class LedFade {
  private:
    int *ledPin;
    int size;
    int brightness;
    int fadeAmount;
  
  public:
    LedFade(int ledPin_[], int size, int brightness, int fadeAmount);
    void pin_setup();
    void fade(int time_delay);
};


#endif