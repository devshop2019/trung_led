#ifndef _TRUNG_H_LED__
#define _TRUNG_H_LED__

#include "arduino.h"
class trung_led {
  public:
    int ledPin;// the number of the LED pin

    // Variables will change:
    int ledState;             // ledState used to set the LED

    // Generally, you should use "unsigned long" for variables that hold time
    // The value will quickly become too large for an int to store
    unsigned long previousMillis = 0;        // will store last time LED was updated

    // constants won't change:
    long interval = 100;           // interval at which to blink (milliseconds)

    trung_led(int led_pin);
    
//    {
//      ledPin = led_pin;
//    }

    trung_led(int led_pin, unsigned long time_pelay);
//    {
//      ledPin = led_pin;
//      interval = time_pelay;
//    }
    
    // constants won't change. Used here to set a pin number:
    void begin();
//    {
//      pinMode(ledPin, OUTPUT);
//    }

    void loop();
//    {
//      unsigned long currentMillis = millis();
//      if (currentMillis - previousMillis >= interval) {
//        // save the last time you blinked the LED
//        previousMillis = currentMillis;
//
//        // if the LED is off turn it on and vice-versa:
//        if (ledState == LOW) {
//          ledState = HIGH;
//        } else {
//          ledState = LOW;
//        }
//
//        // set the LED with the ledState of the variable:
//        digitalWrite(ledPin, ledState);
//      }
//    }

};

#endif
