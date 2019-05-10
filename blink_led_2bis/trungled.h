#ifndef _TRUNG_H_LED__
#define _TRUNG_H_LED__

#include "arduino.h"

class trung_led {
  public:
    int ledPin;// the number of the LED pin

    int ledState;             // ledState used to set the LED

    // Generally, you should use "unsigned long" for variables that hold time
    // The value will quickly become too large for an int to store
    unsigned long previousMillis = 0;        // will store last time LED was updated

    long interval = 100;           // interval at which to blink (milliseconds)

    trung_led(int led_pin);
    trung_led(int led_pin, unsigned long time_pelay);
    
    void begin();

    void loop();
};

#endif
