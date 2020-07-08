// forward kinematic 
//to find position of the end-effector 
const float L1= 10; //length 1 
const float L2= 15; // length 2
float Q1,Q2,x,y,q1,q2; // angles to calculate //CLACULATE THE POSITION END-EFFECTOR 
int Q=20;
#include <Servo.h>
Servo myservo;

void setup()
{
  myservo.attach(9); //servo attach to D9
 Serial.begin(9600);
  delay(1000);
}
void loop()
{

Serial.print("Q1= ");
Serial.print(q1);
Serial.print("Q2= ");
Serial.print(q2);
Serial.println();

 Q1=q1*PI/180; 
 Q2=q2*PI/180;
 x=(L1*cos(Q1))+(L2*cos(Q1+Q2));
 y=(L1*sin(Q1))+(L2*sin(Q1+Q2));



 myservo.write(q1);
 myservo.write(q2);
 
 delay(1000);
  
  
}