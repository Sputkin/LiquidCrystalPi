#include "LiquidCrystal.h"


const int rs = 7, en = 0, d4 = 1, d5 = 2, d6 = 3, d7 = 4;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


uint8_t p1[9] = {
  0x0,
  0xf,
  0x1f,
  0x13,
  0x3,
  0x3,
  0x6,
  0xc,
};


uint8_t p2[9] = {
  0x0,
  0x1f,
  0x1f,
  0xc,
  0xc,
  0xc,
  0x6,
  0x3,
};


void setup() {
  lcd.createChar(0,p1);
  lcd.createChar(1,p2);
  lcd.begin(16, 2);

  lcd.write((uint8_t)0);


  lcd.write((uint8_t)1);


}

void loop(){
}

int main(){
   setup();


   while(1){
      loop();
   }
}
