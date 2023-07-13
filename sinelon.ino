/*void sinelon() {

  const uint8_t THIS_BEAT = 23;
  const uint8_t THAT_BEAT = 28;
  const uint8_t THIS_FADE = 2; // How quickly does it fade? Lower = slower fade rate.
    
  // a colored dot sweeping back and forth, with fading trails
  fadeToBlackBy(ledsLeft, N_PIXELS, THIS_FADE);
  int pos1 = beatsin16(THIS_BEAT, 0, N_PIXELS - 1);
  int pos2 = beatsin16(THAT_BEAT, 0, N_PIXELS - 1);
  ledsLeft[(pos1 + pos2) / 2] += CHSV(myhue, 255, 255);
  EVERY_N_MILLISECONDS(20) {
    myhue++;
  }
  
  // Copy left LED array into right LED array
  for (uint8_t i = 0; i < N_PIXELS; i++) {
    ledsRight[i] = ledsLeft[i];
  }
  
  FastLED.show();
}*/

void sinelon()
{
  // a colored dot sweeping back and forth, with fading trails
  fadeToBlackBy( ledsLeft, N_PIXELS, 20);
  int pos = beatsin16( 13, 0, N_PIXELS-1 );
  ledsLeft[pos] += CHSV( gHue, 255, 192);
  ledsRight[pos] += CHSV( gHue, 255, 192);//1

  FastLED.show();  
  FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
}
