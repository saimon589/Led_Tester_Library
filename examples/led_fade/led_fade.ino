#include "LED_TESTER.h"

int leds[] = {9, 10};
int size = 2;

LedFade ledFade(leds, size, 0, 5);
void setup() {
  // put your setup code here, to run once:
  ledFade.pin_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  ledFade.fade(30);
}
