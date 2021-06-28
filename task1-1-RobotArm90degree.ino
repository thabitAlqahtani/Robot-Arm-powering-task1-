#include <Servo.h>

Servo oneM;
Servo twoM;
Servo threeM;
Servo fourM;
Servo fiveM;
void setup(){
  oneM.attach(2);
  oneM.write(90);
 
  twoM.attach(3);
  twoM.write(90);
  
  threeM.attach(4);
  threeM.write(90);
  
  fourM.attach(5);
  fourM.write(90);
  
  fiveM.attach(7);
  fiveM.write(90);
  
  delay(1000);
  
  oneM.write(0);
  twoM.write(0);
  threeM.write(0);
  fourM.write(0);
  fiveM.write(0);
  
  delay(1000);}

void loop(){}