#include <Arduino.h>

int reading;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    reading = Serial.read();
    Serial.println(reading);

    if(reading == 48){
      digitalWrite(LED_BUILTIN,HIGH);
    } else {
      digitalWrite(LED_BUILTIN,LOW);
    }

  }
}
