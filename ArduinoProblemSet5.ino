#include <Servo.h>
Servo servo;

void setup(){
	servo.attach(5);	//Servo 5'e bağlı
}

void loop(){
  for(int a=0; a<=180; a=a+15){
  	servo.write(a);
    delay(1000);
  }
  for(int a=180; a>=0; a=a-30){
  	servo.write(a);
    delay(1000);
  }
}
