#include "LED_TESTER.h"

int leds[] = {8, 9};
int size = 2;

LedChaser ledChaser(leds, size);

void setup() {
  // put your setup code here, to run once:
  ledChaser.pin_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  ledChaser.chaser(200);
}
