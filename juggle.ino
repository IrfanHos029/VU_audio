/*const uint8_t FADE_RATE = 2; // How long should the trails be. Very low value = longer trails.

void juggle() { // Several colored dots, weaving in and out of sync with each other
  const uint8_t NUM_DOTS = 4; // Number of dots in use.
  const uint8_t HUE_INC = 16; // Incremental change in hue between each dot.
  static uint8_t thishue = 0; // Starting hue.
  static uint8_t curhue = 0;
  const uint8_t basebeat = 5;
  
  curhue = thishue; // Reset the hue values.
  fadeToBlackBy(ledsLeft, N_PIXELS, FADE_RATE);
  for (int i = 0; i < NUM_DOTS; i++) {
    ledsLeft[beatsin16(basebeat + i + NUM_DOTS, 0, N_PIXELS - 1)] |= CHSV(curhue, 255, 255);
    curhue += HUE_INC;
  }

  // Copy left LED array into right LED array
  for (uint8_t i = 0; i < N_PIXELS; i++) {
    ledsRight[i] = ledsLeft[i];
  }

  FastLED.show();
}*/

void juggle() {
  // eight colored dots, weaving in and out of sync with each other
  fadeToBlackBy( ledsLeft, N_PIXELS, 20);
  fadeToBlackBy( ledsRight, N_PIXELS, 20);
  uint8_t dothue = 0;
  for( int i = 0; i < 8; i++) {
    ledsLeft[beatsin16( i+7, 0, N_PIXELS-1 )] |= CHSV(dothue, 200, 255);
    ledsRight[beatsin16( i+7, 0, N_PIXELS-1 )] |= CHSV(dothue, 200, 255);//1
    dothue += 32;
  }

  FastLED.show();  
  FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }

}
