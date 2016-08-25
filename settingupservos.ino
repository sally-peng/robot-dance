 #include <Servo.h> 
  Servo servoRight;
  Servo servoLeft; 

void setup() {
  servoLeft.attach(13);   
  servoRight.attach(12);
  servoLeft.writeMicroseconds(1500);  
  servoRight.writeMicroseconds(1500);
 
}

void loop() {
  servoLeft.writeMicroseconds(1750);
  servoRight.writeMicroseconds(1500);
  delay(2000);
  for(int x=7;x<12;x++){
    servoLeft.writeMicroseconds(1800);
    servoRight.writeMicroseconds(1450);
    delay(140);
    servoLeft.writeMicroseconds(1750);
    servoRight.writeMicroseconds(1500);
    delay(155);
  }
  servoLeft.writeMicroseconds(170);
  servoRight.writeMicroseconds(1800);
  delay(1500);
}
