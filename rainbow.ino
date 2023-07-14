/*void rainbow(uint8_t rate) {
  static uint8_t leftHue = 0;
  static uint8_t rightHue = 0;
  
  fill_rainbow(ledsLeft, N_PIXELS, leftHue, 7);
  fill_rainbow(ledsRight, N_PIXELS, rightHue, 7);
  
  EVERY_N_MILLISECONDS(20) {
    leftHue = (leftHue + rate) % 255;
    rightHue = (rightHue - rate) % 255;
  }
   
  FastLED.show();
}*/


void rainbow() 
{
//  if(buttonPushCounter==6){ FastLED.delay(2000/FRAMES_PER_SECOND); FastLED.setBrightness(50);}
//  else{ FastLED.delay(1000/FRAMES_PER_SECOND); FastLED.setBrightness(BRIGHTNESS);}
  fill_rainbow( ledsLeft, N_PIXELS, gHue, 5);
   fill_rainbow( ledsRight, N_PIXELS, gHue, 5);//1
  FastLED.show();
 // FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
}

void rainbowWithGlitter() 
{
  // built-in FastLED rainbow, plus some random sparkly glitter
  //FastLED.setBrightness(BRIGHTNESS);
  rainbow();
  addGlitterr(80);
}
