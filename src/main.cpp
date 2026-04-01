#include <Arduino.h> 

#include "pins.h" // From the include folder

// Example of including a header from our Avionics library
#include "state_estimation/States.h"  // From lib/Avionics/include/state_estimation/States.h

FlightState currentState = STATE_ARMED;
uint32_t currentTime_ms = millis();

// Blinky example

void setup()
{
  pinMode(DEBUG_LED_PIN, OUTPUT);
}

void loop()
{    
  // The LED alternates state each second
  digitalWrite(DEBUG_LED_PIN, !digitalRead(DEBUG_LED_PIN));
  delay(1000); 

  if (millis() - currentTime_ms > 5000) { // After 5 seconds, change the state to show how we can use the states in our code. 
    currentState = STATE_ASCENT;
  }
}