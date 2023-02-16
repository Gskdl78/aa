#include <Servo.h>

Servo myserv0;  // 建立一個Servo物件
Servo myserv1;
Servo myserv2;
Servo myserv3;
void setup() {
  myserv0.attach(9);  
  myserv1.attach(8);
  myserv2.attach(7);
  myserv3.attach(6);
}

void loop() {
    myserv0.write(0);
    myserv1.write(180);
    myserv2.write(0);
   delay(100);

  myserv1.write(170);
   delay(100);
     myserv1.write(160);
   delay(100);
       myserv1.write(150);
   delay(100);
       myserv1.write(140);
   delay(100);
       myserv1.write(130);
   delay(100);
       myserv1.write(120);
   delay(100);

       myserv1.write(110);
   delay(100);
       myserv1.write(100);
   delay(100);
       myserv1.write(90);
   delay(1000);

    myserv2.write(50);
    delay(1000);
    myserv3.write(0);
    delay(1000);
    myserv3.write(180);
    delay(1000);
    
     
       
       myserv1.write(100);
   delay(100);
       myserv1.write(110);
   delay(100);
      myserv1.write(120);
   delay(100);

  myserv1.write(130);
   delay(100);
     myserv1.write(140);
   delay(100);
       myserv1.write(150);
   delay(100);
       myserv1.write(160);
   delay(100);
       myserv1.write(170);
   delay(100);
       myserv1.write(180);
   delay(1000);
     myserv2.write(0);
    delay(1000);
     myserv0.write(20);
   delay(1000);
   

  myserv1.write(170);
   delay(100);
     myserv1.write(160);
   delay(100);
       myserv1.write(150);
   delay(100);
       myserv1.write(140);
   delay(100);
       myserv1.write(130);
   delay(100);
       myserv1.write(120);
   delay(100);

       myserv1.write(110);
   delay(100);
       myserv1.write(100);
   delay(100);
       myserv1.write(90);
   delay(1000);
     myserv2.write(30);
    delay(1000);
     myserv3.write(0);
    delay(1000);
    myserv3.write(180);
    delay(1000);
  

     myserv1.write(90);
   delay(100);
       myserv1.write(100);
   delay(100);
       myserv1.write(110);
   delay(100);
      myserv1.write(120);
   delay(100);

  myserv1.write(130);
   delay(100);
     myserv1.write(140);
   delay(100);
       myserv1.write(150);
   delay(100);
       myserv1.write(160);
   delay(100);
       myserv1.write(170);
   delay(100);
       myserv1.write(180);
   delay(100);
    myserv0.write(0);
   delay(1000);
}
