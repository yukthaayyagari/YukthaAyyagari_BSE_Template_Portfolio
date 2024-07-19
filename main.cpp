/*!
 * @file  i2c.ino
 * @brief Control the voice recognition module via I2C
 * @n  Get the recognized command ID and play the corresponding reply audio according to the ID;
 * @n  Get and set the wake-up state duration
 * @copyright  Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence  The MIT License (MIT)
 * @author  [qsjhyy](yihuan.huang@dfrobot.com)
 * @version  V1.0
 * @date  2022-04-02
 * @url  https://github.com/DFRobot/DFRobot_DF2301Q
 */
#include "DFRobot_DF2301Q.h"
#include <Adafruit_NeoPixel.h>

#define STRIP1PIN 6
// #define STRIP2PIN 7
// #define STRIP3PIN 8
// #define STRIP4PIN 9
#define BRIGHTNESS 50 
Adafruit_NeoPixel strip1 = Adafruit_NeoPixel(72, STRIP1PIN, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel strip2= Adafruit_NeoPixel(30, STRIP2PIN, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel strip3 = Adafruit_NeoPixel(30, STRIP3PIN, NEO_GRB + NEO_KHZ800);
// Adafruit_NeoPixel strip4 = Adafruit_NeoPixel(61, STRIP4PIN, NEO_GRB + NEO_KHZ800);

//I2C communication
DFRobot_DF2301Q_I2C asr;

void setup() {
  #if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
  #endif
  // END of Trinket-specific code.

  strip1.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip1.show();            // Turn OFF all pixels ASAP
  strip1.setBrightness(BRIGHTNESS);

  Serial.begin(115200);

  // pinMode(Led, OUTPUT);    //Init LED pin to output mode
  // digitalWrite(Led, LOW);  //Set LED pin to low 

  // Init the sensor
  while (!(asr.begin())) {
    Serial.println("Communication with device failed, please check connection");
    delay(3000);
  }
  Serial.println("Begin ok!");

  /**
   * @brief Set voice volume
   * @param voc - Volume value(1~7)
   */
  asr.setVolume(4);

  /**
     @brief Set mute mode
     @param mode - Mute mode; set value 1: mute, 0: unmute
  */
  asr.setMuteMode(0);

  /**
     @brief Set wake-up duration
     @param wakeTime - Wake-up duration (0-255)
  */
  asr.setWakeTime(20);

  /**
     @brief Get wake-up duration
     @return The currently-set wake-up period
  */
  uint8_t wakeTime = 0;
  wakeTime = asr.getWakeTime();
  Serial.print("wakeTime = ");
  Serial.println(wakeTime);

  // asr.playByCMDID(1);   // Wake-up command

  /**
     @brief Play the corresponding reply audio according to the ID
     @param CMDID - command word ID
  */
  //asr.playByCMDID(23);  // Command word ID
}

void loop() {
  /**
     @brief Get the ID corresponding to the command word 
     @return Return the obtained command word ID, returning 0 means no valid ID is obtained
  */
  uint8_t CMDID = asr.getCMDID();
  switch (CMDID) {
    case 103:                                                  //If the command is “Turn on the light”
      Serial.println("received'Turn on the light',command flag'103'");  //Serial transmits "received"Turn on the light",command flag"103
      colorWipe(strip1.Color(255,   0,   0)     , 50); // Red
      colorWipe(strip1.Color(  0, 255,   0)     , 50); // Green
      colorWipe(strip1.Color(  0,   0, 255)     , 50); // Blue
      colorWipe(strip1.Color(  0,   0,   0, 255), 50); // True white (not RGB white)

      whiteOverRainbow(75, 5);

      pulseWhite(5);

      rainbowFade2White(3, 3, 1);

      break;

    case 104:                                                  //If the command is “Turn off the light”
      Serial.println("received'Turn off the light', command flag '104' ");  //The serial transmits "received"Turn off the light",command flag"104""
      strip1.clear(); 
      // strip2.clear(); 
      // strip3.clear(); 
      // strip4.clear(); 
      break;

    // case 119:
    //   Serial.println("received'Set to green',command flag'119'"); //The serial transmits "received"Set to green",command flag"119""
    //   for (int i=0; i<72;i++){
    //     strip1.setPixelColor(i, 0, 255, 0); //code that sets all the led pixels to red
    //   }
    //   for (int i=0; i<30;i++){
    //     strip2.setPixelColor(i, 0, 255, 0); //code that sets all the led pixels to red
    //   }
    //   for (int i=0; i<30;i++){
    //     strip3.setPixelColor(i, 0, 255, 0); //code that sets all the led pixels to red
    //   }
    //   for (int i=0; i<61;i++){
    //     strip4.setPixelColor(i, 0, 255, 0); //code that sets all the led pixels to red
    //   }
      strip1.show();
      // strip2.show();
      // strip3.show();
      // strip4.show();
      delay(400);
      break;

    default:
      if (CMDID != 0) {
        Serial.print("CMDID = ");  //Printing command ID
        Serial.println(CMDID);
      }
      
  }

  
    
  delay(300);

}


void colorWipe(uint32_t color, int wait) {
  for(int i=0; i<strip1.numPixels(); i++) { // For each pixel in strip1...
    strip1.setPixelColor(i, color);         //  Set pixel's color (in RAM)
    strip1.show();                          //  Update strip to match
    delay(wait);                           //  Pause for a moment
  }
}

void whiteOverRainbow(int whiteSpeed, int whiteLength) {

  if(whiteLength >= strip1.numPixels()) whiteLength = strip1.numPixels() - 1;

  int      head          = whiteLength - 1;
  int      tail          = 0;
  int      loops         = 3;
  int      loopNum       = 0;
  uint32_t lastTime      = millis();
  uint32_t firstPixelHue = 0;

  for(;;) { // Repeat forever (or until a 'break' or 'return')
    for(int i=0; i<strip1.numPixels(); i++) {  // For each pixel in strip1...
      if(((i >= tail) && (i <= head)) ||      //  If between head & tail...
         ((tail > head) && ((i >= tail) || (i <= head)))) {
        strip1.setPixelColor(i, strip1.Color(0, 0, 0, 255)); // Set white
      } else {                                             // else set rainbow
        int pixelHue = firstPixelHue + (i * 65536L / strip1.numPixels());
        strip1.setPixelColor(i, strip1.gamma32(strip1.ColorHSV(pixelHue)));
      }
    }

    strip1.show(); // Update strip with new contents
    // There's no delay here, it just runs full-tilt until the timer and
    // counter combination below runs out.

    firstPixelHue += 40; // Advance just a little along the color wheel

    if((millis() - lastTime) > whiteSpeed) { // Time to update head/tail?
      if(++head >= strip1.numPixels()) {      // Advance head, wrap around
        head = 0;
        if(++loopNum >= loops) return;
      }
      if(++tail >= strip1.numPixels()) {      // Advance tail, wrap around
        tail = 0;
      }
      lastTime = millis();                   // Save time of last movement
    }
  }
}

void pulseWhite(uint8_t wait) {
  for(int j=0; j<256; j++) { // Ramp up from 0 to 255
    // Fill entire strip with white at gamma-corrected brightness level 'j':
    strip1.fill(strip1.Color(0, 0, 0, strip1.gamma8(j)));
    strip1.show();
    delay(wait);
  }

  for(int j=255; j>=0; j--) { // Ramp down from 255 to 0
    strip1.fill(strip1.Color(0, 0, 0, strip1.gamma8(j)));
    strip1.show();
    delay(wait);
  }
}

void rainbowFade2White(int wait, int rainbowLoops, int whiteLoops) {
  int fadeVal=0, fadeMax=100;

  // Hue of first pixel runs 'rainbowLoops' complete loops through the color
  // wheel. Color wheel has a range of 65536 but it's OK if we roll over, so
  // just count from 0 to rainbowLoops*65536, using steps of 256 so we
  // advance around the wheel at a decent clip.
  for(uint32_t firstPixelHue = 0; firstPixelHue < rainbowLoops*65536;
    firstPixelHue += 256) {

    for(int i=0; i<strip1.numPixels(); i++) { // For each pixel in strip1...

      // Offset pixel hue by an amount to make one full revolution of the
      // color wheel (range of 65536) along the length of the strip
      // (strip1.numPixels() steps):
      uint32_t pixelHue = firstPixelHue + (i * 65536L / strip1.numPixels());

      // strip1.ColorHSV() can take 1 or 3 arguments: a hue (0 to 65535) or
      // optionally add saturation and value (brightness) (each 0 to 255).
      // Here we're using just the three-argument variant, though the
      // second value (saturation) is a constant 255.
      strip1.setPixelColor(i, strip1.gamma32(strip1.ColorHSV(pixelHue, 255,
        255 * fadeVal / fadeMax)));
    }

    strip1.show();
    delay(wait);

    if(firstPixelHue < 65536) {                              // First loop,
      if(fadeVal < fadeMax) fadeVal++;                       // fade in
    } else if(firstPixelHue >= ((rainbowLoops-1) * 65536)) { // Last loop,
      if(fadeVal > 0) fadeVal--;                             // fade out
    } else {
      fadeVal = fadeMax; // Interim loop, make sure fade is at max
    }
  }

  for(int k=0; k<whiteLoops; k++) {
    for(int j=0; j<256; j++) { // Ramp up 0 to 255
      // Fill entire strip with white at gamma-corrected brightness level 'j':
      strip1.fill(strip1.Color(0, 0, 0, strip1.gamma8(j)));
      strip1.show();
    }
    delay(1000); // Pause 1 second
    for(int j=255; j>=0; j--) { // Ramp down 255 to 0
      strip1.fill(strip1.Color(0, 0, 0, strip1.gamma8(j)));
      strip1.show();
    }
  }

  delay(500); // Pause 1/2 second
}
