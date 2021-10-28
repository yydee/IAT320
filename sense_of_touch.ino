////////////////////////////////////////////////////////////////////////////
// Circuit Playground Capacitive Touch Tones
//
// Play a tone for each touch pad.
// Using 4th octave note frequencies, to nearest 1Hz.
// https://www.seventhstring.com/resources/notefrequencies.html
//
// Author: Carter Nelson
// MIT License (https://opensource.org/licenses/MIT)
//
// NeoPixel Tutorial: https://learn.adafruit.com/circuit-playground-lesson-number-0/neopixels

#include <Adafruit_CircuitPlayground.h>

#define CAP_THRESHOLD   500

uint8_t pads[] = {3, 2, 0, 1, 12, 6, 9, 10};
uint8_t numberOfPads = sizeof(pads)/sizeof(uint8_t);

////////////////////////////////////////////////////////////////////////////
void takeAction(uint8_t pad) {
  Serial.print("PAD "); Serial.print(pad); Serial.print(" playing note: ");
  switch (pad) {
    case 3:
      Serial.println("C");
      CircuitPlayground.playTone(523, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 255, 0, 0);
      CircuitPlayground.setPixelColor(1, 255, 0, 0);
      CircuitPlayground.setPixelColor(2, 255, 0, 0);
      CircuitPlayground.setPixelColor(3, 255, 0, 0);
      CircuitPlayground.setPixelColor(4, 255, 0, 0);
      CircuitPlayground.setPixelColor(5, 255, 0, 0);
      CircuitPlayground.setPixelColor(6, 255, 0, 0);
      CircuitPlayground.setPixelColor(7, 255, 0, 0);
      CircuitPlayground.setPixelColor(8, 255, 0, 0);
      CircuitPlayground.setPixelColor(9, 255, 0, 0);
      break;
    case 2:
      Serial.println("D");
      CircuitPlayground.playTone(587, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 255, 70, 0);
      CircuitPlayground.setPixelColor(1, 255, 70, 0);
      CircuitPlayground.setPixelColor(2, 255, 70, 0);
      CircuitPlayground.setPixelColor(3, 255, 70, 0);
      CircuitPlayground.setPixelColor(4, 255, 70, 0);
      CircuitPlayground.setPixelColor(5, 255, 70, 0);
      CircuitPlayground.setPixelColor(6, 255, 70, 0);
      CircuitPlayground.setPixelColor(7, 255, 70, 0);
      CircuitPlayground.setPixelColor(8, 255, 70, 0);
      CircuitPlayground.setPixelColor(9, 255, 70, 0);
      break;
    case 0:
      Serial.println("E");
      CircuitPlayground.playTone(659, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 255, 221, 0);
      CircuitPlayground.setPixelColor(1, 255, 221, 0);
      CircuitPlayground.setPixelColor(2, 255, 221, 0);
      CircuitPlayground.setPixelColor(3, 255, 221, 0);
      CircuitPlayground.setPixelColor(4, 255, 221, 0);
      CircuitPlayground.setPixelColor(5, 255, 221, 0);
      CircuitPlayground.setPixelColor(6, 255, 221, 0);
      CircuitPlayground.setPixelColor(7, 255, 221, 0);
      CircuitPlayground.setPixelColor(8, 255, 221, 0);
      CircuitPlayground.setPixelColor(9, 255, 221, 0);
      break;
    case 1:
      Serial.println("F");
      CircuitPlayground.playTone(699, 100, false);      
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 0, 255, 0);
      CircuitPlayground.setPixelColor(1, 0, 255, 0);
      CircuitPlayground.setPixelColor(2, 0, 255, 0);
      CircuitPlayground.setPixelColor(3, 0, 255, 0);
      CircuitPlayground.setPixelColor(4, 0, 255, 0);
      CircuitPlayground.setPixelColor(5, 0, 255, 0);
      CircuitPlayground.setPixelColor(6, 0, 255, 0);
      CircuitPlayground.setPixelColor(7, 0, 255, 0);
      CircuitPlayground.setPixelColor(8, 0, 255, 0);
      CircuitPlayground.setPixelColor(9, 0, 255, 0);
      break;
    case 6:
      Serial.println("G");
      CircuitPlayground.playTone(784, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 0, 255, 255);
      CircuitPlayground.setPixelColor(1, 0, 255, 255);
      CircuitPlayground.setPixelColor(2, 0, 255, 255);
      CircuitPlayground.setPixelColor(3, 0, 255, 255);
      CircuitPlayground.setPixelColor(4, 0, 255, 255);
      CircuitPlayground.setPixelColor(5, 0, 255, 255);
      CircuitPlayground.setPixelColor(6, 0, 255, 255);
      CircuitPlayground.setPixelColor(7, 0, 255, 255);
      CircuitPlayground.setPixelColor(8, 0, 255, 255);
      CircuitPlayground.setPixelColor(9, 0, 255, 255);
      break;
    case 9:
      Serial.println("A");
      CircuitPlayground.playTone(880, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 0, 0, 255);
      CircuitPlayground.setPixelColor(1, 0, 0, 255);
      CircuitPlayground.setPixelColor(2, 0, 0, 255);
      CircuitPlayground.setPixelColor(3, 0, 0, 255);
      CircuitPlayground.setPixelColor(4, 0, 0, 255);
      CircuitPlayground.setPixelColor(5, 0, 0, 255);
      CircuitPlayground.setPixelColor(6, 0, 0, 255);
      CircuitPlayground.setPixelColor(7, 0, 0, 255);
      CircuitPlayground.setPixelColor(8, 0, 0, 255);
      CircuitPlayground.setPixelColor(9, 0, 0, 255);
      break;
    case 10:
      Serial.println("B");
      CircuitPlayground.playTone(988, 100, false);
      CircuitPlayground.setBrightness(10);
      CircuitPlayground.setPixelColor(0, 255, 0, 255);
      CircuitPlayground.setPixelColor(1, 255, 0, 255);
      CircuitPlayground.setPixelColor(2, 255, 0, 255);
      CircuitPlayground.setPixelColor(3, 255, 0, 255);
      CircuitPlayground.setPixelColor(4, 255, 0, 255);
      CircuitPlayground.setPixelColor(5, 255, 0, 255);
      CircuitPlayground.setPixelColor(6, 255, 0, 255);
      CircuitPlayground.setPixelColor(7, 255, 0, 255);
      CircuitPlayground.setPixelColor(8, 255, 0, 255);
      CircuitPlayground.setPixelColor(9, 255, 0, 255);
      break;
    default:
      Serial.println("THIS SHOULD NEVER HAPPEN.");
  }
}

////////////////////////////////////////////////////////////////////////////
boolean capButton(uint8_t pad) {
  // Check if capacitive touch exceeds threshold.
  if (CircuitPlayground.readCap(pad) > CAP_THRESHOLD) {
    return true;  
  } else {
    return false;
  }
}

////////////////////////////////////////////////////////////////////////////
void setup() {
  // Initialize serial.
  Serial.begin(9600); 
  
  // Initialize Circuit Playground library.
  CircuitPlayground.begin();

}

////////////////////////////////////////////////////////////////////////////
void loop() {
  // Loop over every pad.
  for (int i=0; i<numberOfPads; i++) {
    
    // Check if pad is touched.
    if (capButton(pads[i])) {
      
      // Do something.
      takeAction(pads[i]);
    }
  }
}
