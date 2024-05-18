#include <Arduino.h>
//串口发送"led_on_i",点亮第i个led,单片机返回i_ON;
//串口发送"led_off_i",熄灭第i个led,单片机返回一次i_off;
String sString = "";
String x="";
int i;
String Control[]={"led_on_","led_off_"};



void setup() {
 Serial.begin(9600);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    sString=Serial.readStringUntil('\n');//读入串口发送的字符串
    if(sString.length()==9&&sString.substring(0,7)==Control[0]){
     x=sString.substring(7,8);
      i=x.toInt();
      digitalWrite(i,HIGH);
      Serial.print(i);
      Serial.println("_ON");
    }
    if(sString.length()==10&&sString.substring(0,8)==Control[1]){
     x=sString.substring(8,9);
      i=x.toInt();
      digitalWrite(i,LOW);
      Serial.print(i);
      Serial.println("_OFF");
  }
}
}
