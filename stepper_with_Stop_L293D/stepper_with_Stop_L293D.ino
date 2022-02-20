 #include <Stepper.h>
 #define STEPS 400  
 boolean Button = false ;
 
 Stepper stepper(STEPS, 8, 9, 10, 11);
  
 void setup() {
  pinMode(2, INPUT) ;
 }

 void loop() {
  
  int Button = digitalRead(2) ;

  if ( Button == true ) {
  stepper.setSpeed(30);   
  stepper.step(400);   
  Button = !Button ; 
  }
     
   else {
  stepper.setSpeed(0);  
  stepper.step(0);   
   }
 }
