#include "LED_TESTER.h"
#include "Arduino.h"

// Led blink section.
Led::Led(int ledPin_[], int size) {
  this->ledPin = ledPin_;
  this->size = size;
  pin_setup();
}

void Led::pin_setup(){
  for(int i=0; i<=size; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void Led::on() {
  for(int i=0; i<=size; i++) {
    digitalWrite(ledPin[i], HIGH);
  }
}

void Led::off() {
  for(int i=0; i<=size; i++) {
    digitalWrite(ledPin[i], LOW);
  }
}

void Led::blink(int time_delay) {
  on();
  delay(time_delay);
  off();
  delay(time_delay);
}

// Led chaser section.
LedChaser::LedChaser(int ledPin_[], int size) {
  this->ledPin = ledPin_;
  this->size = size;
  pin_setup();
}

void LedChaser::pin_setup() {
  for(int i=0; i<=size; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void LedChaser::chaser(int time_delay) {
  for(int i=0; i<=size; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(time_delay);
  }
  for(int i=size; i>=0; i--) {
    digitalWrite(ledPin[i], LOW);
    delay(time_delay);
  }
}

// Led fade section.
LedFade::LedFade(int ledPin_[], int size, int brightness, int fadeAmount) {
  this->ledPin = ledPin_;
  this->size = size;
  this->brightness = brightness;
  this->fadeAmount = fadeAmount;
  pin_setup();
}
void LedFade::pin_setup() {
  for(int i=0; i<=size; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void LedFade::fade(int time_delay) {
  for(int i=0; i<=size; i++) {
    analogWrite(ledPin[i], brightness);
  }
  brightness = brightness + fadeAmount;
  if(brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(time_delay);
}