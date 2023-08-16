#include "LED_TESTER.h"

int leds[] = {9, 10};
int size = 2;

Led led(leds, size);

void setup() {
  // put your setup code here, to run once:
  led.pin_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  led.blink(200);
}
