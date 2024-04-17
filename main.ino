#include <Stepper.h>


const int stepsPerRevolution = 2038;
const int pResistorL = A0;
const int pResistorR = A1;
const int ledLPin=10;
const int ledRPin=12;
     




int L;      
int R;
int diff = L-R;
int margin = 50;
Stepper myStepper = Stepper(stepsPerRevolution, 2, 4, 3, 5);


void setup(){
 pinMode(ledLPin, OUTPUT);
 pinMode(ledRPin, OUTPUT);
 pinMode(pResistorL, INPUT);
 pinMode(pResistorR, INPUT);
}


void loop(){
  L = analogRead(pResistorL);
  R = analogRead(pResistorR);
 
 






  if(diff>margin)
{
  diff=L-R;
 digitalWrite(ledLPin, HIGH);
 myStepper.setSpeed(10);
  myStepper.step(-stepsPerRevolution);
 {
{
}
 }
}
  else
  {
    diff = R-L;
  if(diff>margin);
  {
    diff = R-L;
    digitalWrite(ledRPin, HIGH);
   myStepper.setSpeed(10);
  myStepper.step(stepsPerRevolution);
  }
  }
}


 


