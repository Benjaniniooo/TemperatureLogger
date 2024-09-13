#include "Button.hpp"

#include "utility.hpp"

Button b = Button(100, 220, 100, 140, RGB(255, 0, 0), RGB(0, 255, 0));

void setup(){
  Serial.begin(9600);

  displayInitialise();
}

void loop(){
    b.render();
    b.render();
}