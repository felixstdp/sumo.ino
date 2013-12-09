#include <Arduino.h>
#include "Sumo.h"

Sumo::Sumo(){
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void sumo::forward(int l, int r, int t)
{
  analogWrite(9,l);
  analogWrite(10,r);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(t);
}

void sumo::reverse(int l, int r, int t)
{
  analogWrite(9,l);
  analogWrite(10,r);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(t);
}

void sumo::brake(int t)
{
  analogWrite(9,0);
  analogWrite(10,0);
  delay(t);
}

void sumo::rotate(int t)
{
  analogWrite(9,100);
  analogWrite(10,100);
  if (t>0) {
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
  }
  else
  {
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
  }
  delay(abs(t));
}

    Status
    API
    Training
    Shop
    Blog
    About

    © 2013 GitHub, Inc.
    Terms
    Privacy
    Security
    Contact

