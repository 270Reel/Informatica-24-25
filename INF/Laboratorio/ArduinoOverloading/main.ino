#include "LED.h"
#include "SWITCH.h"

// Creazione di oggetti LED
LED led1(7);
LED led2(9);
LED led3(11);
LED led4(13);

// Creazione di oggetti SWITCH
SWITCH switch1(6);
SWITCH switch2(8);
SWITCH switch3(10);
SWITCH switch4(12);

void setup() {
    // Inizializzazione degli oggetti già gestita nei costruttori
}

void loop() {
  if (switch1.press()) {
    led1.test1();
    led1.test2();
    led1.test3();
  }

  if (switch2.press()) {
    led2.test1();
    led2.test2();
    led2.test3();
  }

  if (switch4.press()) {
    led3.test1();
    led3.test2();
    led1.test3();
  }

  if (switch4.press()) {
    led4.test1();
    led4.test2();
    led4.test3();
  }
}
