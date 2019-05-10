#include "trungled.h"

trung_led::trung_led(int led_pin) {
  ledPin = led_pin;
}

trung_led::trung_led(int led_pin, unsigned long time_pelay) {
  ledPin = led_pin;
  interval = time_pelay;
}

// constants won't change. Used here to set a pin number:
void trung_led::begin() {
  pinMode(ledPin, OUTPUT);
  this->ledState = HIGH;
}

void trung_led::loop() {
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}
