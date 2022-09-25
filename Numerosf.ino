
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel linea(8, 10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n1(28, 2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n2(28, 3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n3(28, 4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n4(28, 5, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n5(28, 6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n6(28, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n7(28, 8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel n8(28, 9, NEO_GRB + NEO_KHZ800);

long previousMillis = 0;        
long intervalOn = 1000;          
long intervalOff = 1000; 

int pingo = 11;
int pinreset = 12;
int botonr =  0;

int minutos = 15;
int segundos = 0;

void fn1(int num)
 {
   n1.setBrightness(100);
   n1.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n1.setPixelColor(rn3, 0, 0, 255);
   n1.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n1.setPixelColor(rn3, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n1.setPixelColor(rn1, 0, 0, 255);
   n1.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n1.setPixelColor(rn2, 0, 0, 255);
   n1.show();
  }
 }
 }
 void fn2(int num)
 {
   n2.setBrightness(100);
   n2.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n2.setPixelColor(rn3, 0, 0, 255);
   n2.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n2.setPixelColor(rn3, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n2.setPixelColor(rn1, 0, 0, 255);
   n2.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n2.setPixelColor(rn2, 0, 0, 255);
   n2.show();
  }
 }
 }
 void fn3(int num)
 {
   n3.setBrightness(100);
   n3.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n3.setPixelColor(rn3, 0, 0, 255);
   n3.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n3.setPixelColor(rn3, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n3.setPixelColor(rn1, 0, 0, 255);
   n3.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n3.setPixelColor(rn2, 0, 0, 255);
   n3.show();
  }
 }
 }
 void fn4(int num)
 {
   n4.setBrightness(100);
   n4.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n4.setPixelColor(rn3, 0, 0, 255);
   n4.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n4.setPixelColor(rn3, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n4.setPixelColor(rn1, 0, 0, 255);
   n4.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n4.setPixelColor(rn2, 0, 0, 255);
   n4.show();
  }
 }
 }
void fn5(int num)
 {
   n5.setBrightness(100);
   n5.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n5.setPixelColor(rn3, 0, 0, 255);
   n5.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n5.setPixelColor(rn3, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n5.setPixelColor(rn1, 0, 0, 255);
   n5.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n5.setPixelColor(rn2, 0, 0, 255);
   n5.show();
  }
 }
 }
void fn6(int num)
 {
   n6.setBrightness(100);
   n6.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n6.setPixelColor(rn3, 0, 0, 255);
   n6.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n6.setPixelColor(rn3, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n6.setPixelColor(rn1, 0, 0, 255);
   n6.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n6.setPixelColor(rn2, 0, 0, 255);
   n6.show();
  }
 }
 }
 void fn7(int num)
 {
   n7.setBrightness(100);
   n7.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n7.setPixelColor(rn3, 0, 0, 255);
   n7.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n7.setPixelColor(rn3, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n7.setPixelColor(rn1, 0, 0, 255);
   n7.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n7.setPixelColor(rn2, 0, 0, 255);
   n7.show();
  }
 }
 }
 void fn8(int num)
 {
   n8.setBrightness(100);
   n8.clear();
   if(num == 2)
 {
   for(int rn1 = 4; rn1 < 25; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
 } 
 else if(num == 1)
 {
   for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 16; rn2 < 20; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 3)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 12; rn2 < 24; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 4)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 12; rn2 < 20; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
  for(int rn3 = 24; rn3 < 28; rn3++)
  {
   n8.setPixelColor(rn3, 0, 0, 255);
   n8.show();
  }
 }
 else if(num ==5)
 {
   for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
   for(int rn2 = 12; rn2 < 16; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
   for(int rn3 = 20; rn3 < 28; rn3++)
  {
   n8.setPixelColor(rn3, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 6)
 {
  for(int rn1 = 0; rn1 < 16; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 20; rn2 < 28; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 7)
 {
  for(int rn1 = 0; rn1 < 4; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 16; rn2 < 24; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 8)
 {
  for(int rn1 = 0; rn1 < 28; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 9)
 {
  for(int rn1 = 0; rn1 < 8; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 12; rn2 < 28; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 else if(num == 0)
 {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n8.setPixelColor(rn1, 0, 0, 255);
   n8.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n8.setPixelColor(rn2, 0, 0, 255);
   n8.show();
  }
 }
 }
 void rfn()
  {
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n8.setPixelColor(rn1, 255, 0, 0);
   n8.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n7.setPixelColor(rn2, 255, 0, 0);
   n7.show();
  }
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n7.setPixelColor(rn1, 255, 0, 0);
   n7.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n7.setPixelColor(rn2, 255, 0, 0);
   n7.show();
  }
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n6.setPixelColor(rn1, 255, 0, 0);
   n6.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n6.setPixelColor(rn2, 255, 0, 0);
   n6.show();
  }
  for(int rn1 = 0; rn1 < 12; rn1++)
  {
   n5.setPixelColor(rn1, 255, 0, 0);
   n5.show();
  }
  for(int rn2 = 16; rn2 < 28; rn2++)
  {
   n5.setPixelColor(rn2, 255, 0, 0);
   n5.show();
  }
 }
 
 
void setup() {
 
Serial.begin(9600);
  linea.begin();
  linea.show();
  n1.begin();
  n1.show();
  n2.begin();
  n2.show();
  n3.begin();
  n3.show();
  n4.begin();
  n4.show();
  n5.begin();
  n5.show();
  n6.begin();
  n6.show();
  n7.begin();
  n7.show();
  n8.begin();
  n8.show();
  pinMode(pingo, INPUT);
  pinMode(pinreset, INPUT);
}

void loop() {
  unsigned long currentMillis = millis();
  if (segundos == 0) {
    if(currentMillis - previousMillis > intervalOff) {
           
            previousMillis = currentMillis;   
            minutos--;
            segundos = 59;
    }
 } else {
    if(currentMillis - previousMillis > intervalOn) {
           previousMillis = currentMillis;   
          segundos--;
    }
 }
 int tt = (minutos + segundos);
 if (tt == 0)
 {
  rfn();
 }
  int decena = (segundos/10);
  int unidad = (segundos - decena*10);
  int decenam = (minutos/10);
  int unidadm = (minutos - decenam*10);
  fn8(unidad);
  fn7(decena);
  fn6(unidadm);
  fn5(decenam);

  botonr = digitalRead(pinreset);

  if (botonr == LOW) 
  {
   minutos = 15;
   segundos = 0;
   delay(2000);
  }
  linea.setBrightness(100);
  
  for(int r1 = 0; r1 < 8; r1++)
 {
  linea.setPixelColor(r1, 255, 255, 0);
  linea.show();
 }
}
  
  
 
