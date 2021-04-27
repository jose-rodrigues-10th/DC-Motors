
#include <Servo.h>

Servo servo_1;

void setup(){

  Serial.begin(9600);
  
  pinMode(A0, INPUT);
  servo_1.attach(2);
  servo_1.write(0);  
   
}

void loop(){
  int potenPin = A0;
  
  int potenValue = analogRead(potenPin);

  int poten = map(potenValue,0,1023,180,0);

  servo_1.write(poten);
}
