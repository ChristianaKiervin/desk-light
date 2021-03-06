/*Minimal Sketch retrieved from: https://github.com/thehookup/WS2812B_RGB_Classroom_Timer/blob/master/FastLED_Minimal.ino */

#define FASTLED_INTERRUPT_RETRY_COUNT 0
#define FASTLED_ESP8266_RAW_PIN_ORDER

/******************  LIBRARY SECTION *************************************/
#include <FastLED.h>
/*****************  LED LAYOUT AND SETUP *********************************/
#define NUM_LEDS 60
/*****************  DECLARATIONS  ****************************************/
CRGB leds[NUM_LEDS];
/*****************  GLOBAL VARIABLES  ************************************/
const int ledPin = 4; //marked as D2 on the board  
/*****************  SETUP FUNCTIONS  ****************************************/
void setup() 
{
  Serial.begin(115200);
  FastLED.addLeds<WS2812B, ledPin, RGB>(leds, NUM_LEDS);
}
/*****************  MAIN LOOP  ****************************************/
void loop() 
{
  leds[11] = CHSV (96, 255, 192);   //Test functionality by lighting up a single LED
  FastLED.show();
}


void setup() {
    
}

void loop() {
    
}
