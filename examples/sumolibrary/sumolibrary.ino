#include <Sumo.h>
Sumo robot;

void setup() {}

void loop()
{
  robot.forward(100,100,1000);
  robot.reverse(100,100,1000);
  robot.rotate(250);
}
