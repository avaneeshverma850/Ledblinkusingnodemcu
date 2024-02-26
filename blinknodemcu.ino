#include<ESP8266WiFi.h>
#define led  D5
#define led1 D6
#define led2 D7
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(1000);

}
