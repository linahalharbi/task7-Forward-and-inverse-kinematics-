const float L1= 30; //length 1 
const float L2= 30; // length 2
float Q1,Q2,M,q1,q2; // angles to calculate 
int Q=20;
#include <Servo.h>
Servo myservo;

void setup()
{
  myservo.attach(9);
 Serial.begin(9600);
  delay(1000);
}
void loop()
{
trigono_xy(2, 4); //input x,y
Serial.print("Q1= ");
Serial.print(Q1);
Serial.print("Q2= ");
Serial.print(Q2);
Serial.println();
}

void trigono_xy(float x, float y)
{
 
 M=(sq(x)+sq(y)-sq(L1)-sq(L2))/(2*L1*L2);
 q2=acos(M);
 Q2=q2*180/PI;
 Q1=Q+Q2;
Serial.print(Q1);
 myservo.write(Q1);
 myservo.write(Q2);
 
 delay(1000);
  
  
}