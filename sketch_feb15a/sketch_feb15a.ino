#include <Servo.h>

Servo myservo;  // 建立一個Servo物件
Servo myserv1;
Servo myserv2;
void setup() {
  myservo.attach(9);  // 將SG90的信號線接到Arduino的D9腳位
  myserv1.attach(8);
  myserv2.attach(7);
}

void loop() {

  myservo.write(0);
  myserv1.write(145);
  myserv2.write(0);
  delay(1000);

  // 將SG90轉到90度
  myservo.write(10);
    delay(1000);
  myserv1.write(170);
   delay(1000);
  myserv2.write(80);
  delay(1000);
   myserv2.write(30);
    delay(1000);
    myserv2.write(0);
    delay(1000);
    myservo.write(0);
    delay(1000);
   
        myserv1.write(160);
   delay(500);

    myserv1.write(150);
   delay(1000);
}
