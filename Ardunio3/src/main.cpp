#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);//rs, en, d4, d5, d6, d7
int contrast = 6;

void setup() {
  pinMode(contrast, OUTPUT); // 配置 引脚模式为输出模式
  analogWrite(contrast,140);
  lcd.begin(16, 2); //   初始化lcd ，并定义LCD1602的规格
 //   lcd 显示字符串
  lcd.setCursor(1,0); 
  lcd.print("^---^   ^---^");
  lcd.setCursor(0,1); 
  lcd.print("(*&~&*) ('g^g')");
}
//（排针焊反了，线乱乱的、、、、、、、
void loop() {
 
}
