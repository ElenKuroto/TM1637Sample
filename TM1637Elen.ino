#include <Arduino.h>
#include <TM1637Display.h>

#define CLK 2
#define DIO 3
TM1637Display tm1637(CLK, DIO);

void setup() {
  // put your setup code here, to run once:
  tm1637.setBrightness(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  tm1637.showNumberDec(1234);
}
