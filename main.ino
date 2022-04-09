#include <Arduino.h>
#define fron_sens 0   // A0
#define back_sens 1   // A1
#define fronpin 13
#define backpin 12
int fronSenVal = 0;
int backSenVal = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(fronpin, OUTPUT);
  pinMode(backpin, OUTPUT);
}

void loop()
{
  fronSenVal = analogRead(fron_sens);
  backSenVal = analogRead(back_sens);

  if (fronSenVal < 1000)
  {
    digitalWrite(fronpin, HIGH); // turn the LED on (HIGH is the voltage level)
    // Serial.println("El valor es: " + str);
    delay(1000);
    digitalWrite(fronpin, LOW);
  }
  else if (backSenVal < 1000)
  {
    digitalWrite(backpin, HIGH);
    delay(1000);
    digitalWrite(backpin, LOW);
  }
}