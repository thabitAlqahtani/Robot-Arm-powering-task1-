#include <Servo.h>
int x,y,z,a,b;
Servo oneM;
Servo twoM;
Servo threeM;
Servo fourM;
Servo fiveM;

void setup(){
  oneM.attach(7);
  twoM.attach(6);
  threeM.attach(5);
  fourM.attach(4);
  fiveM.attach(3);}

  void loop(){
    x=analogRead(A0);
    x=map(x,0,1000,0,90);
    
    y=analogRead(A1);
    y=map(y,0,1000,0,90);
    
    z=analogRead(A2);
    z=map(z,0,1000,0,90);
    
    a=analogRead(A3);
    a=map(a,0,1000,0,90);
    
    b=analogRead(A4);
    b=map(b,0,1000,0,90);
    
    oneM.write(x);
    twoM.write(y);
    threeM.write(z);
    fourM.write(a);
    fiveM.write(b);}