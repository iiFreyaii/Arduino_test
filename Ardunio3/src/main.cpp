#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // rs, en, d4, d5, d6, d7
int contrast = 6;
int counter = 0;

void setup()
{
  Serial.begin(9600);
  // pinMode(contrast, OUTPUT);
  // analogWrite(contrast, 150);
  lcd.begin(16, 2);
  // lcd.setCursor(0, 0);
  // lcd.print("HEllO WORLD");
}

void loop()
{
  lcd.clear();
  Serial.println(String(counter));
  lcd.setCursor(0, 1);
  lcd.print(String(counter));
  counter++;
  delay(800);
}