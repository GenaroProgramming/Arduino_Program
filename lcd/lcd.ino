#include <LiquidCrystal.h>

LiquidCrystal lcd (7, 6, 5, 4, 3, 2);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(2, 0);
  lcd.print("Hola mundo");
  //lcd.scrollDisplayLeft();
  delay(800);














