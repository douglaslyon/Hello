/*
  Test Library - Hello World

 Demonstrates the deployment of a library with examples

 Library originally added 15 Nov 2020
 by Douglas Lyon

This example code is in the public domain.

 http://www.docjava.com/

*/

#include "Hello.h"
Hello h;

void setup() {
     Serial.begin(9600);
     Serial.println("Hello world!");
     Serial.println(h.getHi());
}

void loop() {
}

