void bpm()
{
  // colored stripes pulsing at a defined Beats-Per-Minute (BPM)
  uint8_t BeatsPerMinute = 62;
  CRGBPalette16 palette = PartyColors_p;
  uint8_t beat = beatsin8( BeatsPerMinute, 64, 255);
  for( int i = 0; i < N_PIXELS; i++) { //9948
    ledsLeft[i] = ColorFromPalette(palette, gHue+(i*2), beat-gHue+(i*10));
    ledsRight[i] = ColorFromPalette(palette, gHue+(i*2), beat-gHue+(i*10));//1
  }

  FastLED.show();  
  FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
}