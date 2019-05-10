#include "trungled.h"

trung_led myLed(13);
trung_led myLed_12(12, 500);

void setup() {
  // set the digital pin as output:
}

void loop() {
  // here is where you'd put code that needs to be running all the time.
  myLed.loop();
  myLed_12.loop();
}
