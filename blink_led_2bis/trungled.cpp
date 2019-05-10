#include "trungled.h"

trung_led::trung_led(int led_pin) {
  this->ledPin = led_pin;
  this->begin();
}

trung_led::trung_led(int led_pin, unsigned long time_pelay) {
  this->ledPin = led_pin;
  this->interval = time_pelay;
  this->begin();
}

// constants won't change. Used here to set a pin number:
void trung_led::begin() {
  pinMode(this->ledPin, OUTPUT);
  trung_led::ledState = HIGH;
}

void trung_led::loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - this->previousMillis >= this->interval) {
    // save the last time you blinked the LED
    this->previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (this->ledState == LOW) {
      this->ledState = HIGH;
    } else {
      this->ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(this->ledPin, this->ledState);
  }
}
