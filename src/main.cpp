#include <Arduino.h>

bool isEven(int number);
void setup() {
  Serial.begin(9600);
  int sNumber = 6;

  Serial.printf("Pruefe Zahl %i: ", sNumber);
  Serial.println(isEven(sNumber));
}

void loop() {
  // put your main code here, to run repeatedly:
}

bool isEven(int number) {
  if(number%2 == 0) {
    return true;
  }
  return false;
}