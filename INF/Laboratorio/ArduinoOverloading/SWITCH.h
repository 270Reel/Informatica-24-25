#ifndef SWITCH_H
#define SWITCH_H

class SWITCH {
private:
  int pin;

public:
  // Costruttore
  SWITCH(int pin);

  // Metodo per verificare la pressione del pulsante
  bool press();
};

#endif
