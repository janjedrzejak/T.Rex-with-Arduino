#include <Servo.h>

Servo serwo;

void setup() {
  Serial.begin(9600);
  serwo.attach(2);
}

void wyslij(int odczyt) {
  Serial.println(odczyt);
}

int analog=0;
int i = 0;
void loop() {
  
  analog=analogRead(A3);
  wyslij(analog);
  if(analog>80) {
    //delay(50);
    for (i = 0; i <= 60; i += 1) {
      serwo.write(i);
      delay(10);
    }
  }
  delay(60);
}
