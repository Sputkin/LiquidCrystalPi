#include <LiquidCrystal.h>
#include <wiringPi.h>
#include <stdio.h>

// initialize the library by associating any needed LCD interface pin
// with the raspberry pin number it is connected to

const int rs = 7, en = 0, d4 = 1, d5 = 2, d6 = 3, d7 = 4;


LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  lcd.begin(16, 2);
  lcd.print(" > H e l l o");
  lcd.setCursor(0,1);
  lcd.print("   W o r l d");
}

void loop() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}

int main(){

   setup();

   while(1){
      loop();
   }

}
