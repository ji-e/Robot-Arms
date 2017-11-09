
#include<Servo.h>

const int POT= A0; 
const int POT1= A1;
const int POT2= A2; 
const int POT3= A3; 
const int POT4= A4; 
int val,val1,val2, val3, val4= 0; 
Servo servo; 
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
void setup() {
  pinMode(POT,INPUT); 
   pinMode(POT1,INPUT); 
     pinMode(POT2,INPUT); 
      pinMode(POT3,INPUT); 
       pinMode(POT4,INPUT); 
  servo.attach(9); 
  servo1.attach(10); 
    servo2.attach(11); 
     servo3.attach(6); 
      servo4.attach(5); 
  Serial.begin(9600);
  
}

void loop(){

  int val= analogRead(POT); 

  Serial.print(val);
Serial.print("/0/");
  int angle= map(val,0,1023,0,180);

  servo.write(angle);

  //delay(100);
  
  int val1= analogRead(POT1); 

  Serial.print(val1);
    Serial.print("/1/");

  int angle1= map(val1,0,1023,,0);

  servo1.write(angle1);

 // delay(100);
 
  int val2= analogRead(POT2); 

  Serial.print(val2);
  Serial.println("/2/");

  int angle2= map(val2,110,430,100,0);

  servo2.write(angle2);

 // delay(100);

 int val3= analogRead(POT3); 

  Serial.print(val3);
Serial.print("/3/");
  int angle3= map(val,0,1023,0,180);

  servo3.write(angle3);

  //delay(100);
   int val4= analogRead(POT4); 

  Serial.print(val4);
Serial.print("/4/");
  int angle4= map(val,0,1023,0,180);

  servo4.write(angle4);

  //delay(100);
  
  
  
  
}

