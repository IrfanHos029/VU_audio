/*void twinkle() {
  if (random(25) == 1) {
    uint16_t i = random(N_PIXELS);
    ledsLeft[i] = CRGB(random(256), random(256), random(256));
  }

  if (random(25) == 1) {
    uint16_t i = random(N_PIXELS);
    ledsRight[i] = CRGB(random(256), random(256), random(256));
  }

  fadeToBlackBy(ledsLeft, N_PIXELS, FADE_RATE);
  fadeToBlackBy(ledsRight, N_PIXELS, FADE_RATE);
  
  FastLED.show();
  delay(10);
}*/


void addGlitterr( fract8 chanceOfGlitter) 
{
  if(buttonPushCounter==6){FastLED.setBrightness(200);}
  else{FastLED.setBrightness(BRIGHTNESS);}
  if( random8() < chanceOfGlitter) {
    ledsLeft[ random16(N_PIXELS) ] += CRGB::White;
    ledsRight[ random16(N_PIXELS) ] += CRGB::White; //1
  }

  FastLED.show();  
  FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
}