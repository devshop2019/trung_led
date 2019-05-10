class trung_led {
  public:
    int ledPin =  LED_BUILTIN;// the number of the LED pin

    // Variables will change:
    int ledState = LOW;             // ledState used to set the LED

    // Generally, you should use "unsigned long" for variables that hold time
    // The value will quickly become too large for an int to store
    unsigned long previousMillis = 0;        // will store last time LED was updated

    // constants won't change:
    long interval = 100;           // interval at which to blink (milliseconds)

    trung_led(int led_pin) {
      ledPin = led_pin;
    }

    trung_led(int led_pin, unsigned long time_pelay) {
      ledPin = led_pin;
      interval = time_pelay;
    }

    // constants won't change. Used here to set a pin number:


    void begin() {
      pinMode(ledPin, OUTPUT);
    }

    void loop() {
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

};

trung_led myLed(13);
trung_led myLed_12(12,500);

//// constants won't change. Used here to set a pin number:
//const int ledPin =  LED_BUILTIN;// the number of the LED pin
//
//// Variables will change:
//int ledState = LOW;             // ledState used to set the LED
//
//// Generally, you should use "unsigned long" for variables that hold time
//// The value will quickly become too large for an int to store
//unsigned long previousMillis = 0;        // will store last time LED was updated
//
//// constants won't change:
//const long interval = 100;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
//  pinMode(ledPin, OUTPUT);
myLed.begin();
myLed_12.begin();
}

void loop() {
  // here is where you'd put code that needs to be running all the time.
  myLed.loop();
  myLed_12.loop();

  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
//  unsigned long currentMillis = millis();

  //  if (currentMillis - previousMillis >= interval) {
  //    // save the last time you blinked the LED
  //    previousMillis = currentMillis;
  //
  //    // if the LED is off turn it on and vice-versa:
  //    if (ledState == LOW) {
  //      ledState = HIGH;
  //    } else {
  //      ledState = LOW;
  //    }
  //
  //    // set the LED with the ledState of the variable:
  //    digitalWrite(ledPin, ledState);
  //  }
}
