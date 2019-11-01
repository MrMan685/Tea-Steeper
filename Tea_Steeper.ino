//www.elegoo.com
//2016.12.08
#include <Servo.h>

Servo myservo;  
int pos = 0;   
unsigned long minutes = 60000;                   //Time variable
void setup() {
  delay(3000);                                  //20 seconds to setup after plugging in
  Serial.begin(9600);
  myservo.attach(9); 
}
void loop() {
  if (millis() < minutes * 2) {                  //sets 2 minute timer
    for (pos = 0; pos <= 60; pos += 1) {         //first position
      myservo.write(pos);              
      delay(15);                                 //time until second position                       
    }
    for (pos = 60; pos >= 0; pos -= 1) {         //second position
      myservo.write(pos);             
      delay(15);                                 //time until first position                       
    }   
  }
  else{                                          //timer is done
  }
 }
