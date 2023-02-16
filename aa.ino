#include <Servo.h>

Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

const int output26 = 26;
const int output12=12;
const int output14 = 14;
const int output27=27;
const int output25 = 25;
const int output33=3;
void setup() {
  servo01.attach(26);
  servo02.attach(27);
}

void loop() {
  
  servo01.write(180);
  servo02.write(0);
    delay(500);
  servo01.write(170);
  servo02.write(10);
    delay(500);
  servo01.write(170);
    delay(500);

}
