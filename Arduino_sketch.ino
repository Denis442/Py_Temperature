#include <avr/io.h>
#include <util/delay.h>



int Temp = A0;

void setup(){
  Serial.begin(9600);
  
  }
void loop()
{
int reading = analogRead(Temp);
float volt = reading * 5.0/1024;  

float temper = (5 * reading * 100.0) / 1024;

Serial.print(temper); Serial.println("");
delay(1000);
}
