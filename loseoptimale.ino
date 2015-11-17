#include <Servo.h>

Servo monServo1;
Servo monServo2;


void setup()
{
    monServo1.attach(9, 1000, 2000);
    monServo1.write(90);  // positionne le servomoteur à 90° (position neutre)
    monServo2.attach(10, 1000, 2000);
    monServo2.write(0);  // positionne le servomoteur à 90° (position neutre)

   

}

void loop()
{

START();
FINGER();
 

 
}

void START()
{
  
  
  
  monServo2.write(140);
  delay(1000);
  monServo2.write(90);
  delay(500);

}

void FINGER()
{
  delay(1000);
  monServo1.write(150);
  delay(35500);
  monServo1.write(90);
  delay(1000);

}



