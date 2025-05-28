/******************************************************************************************
 * @file SWITCH.h
 * @brief libreria switch
 *
 * @author <Andrea Spampinato>
 * @version 1.0 30/01/25 Prima versione
 */
#ifndef SWITCH_H
#define SWITCH_H

class SWITCH
{
private:
  int pin;

public:
  // Costruttore
  SWITCH(int pin);

  /**
   * @brief Verifica la pressione del pulsante
   * @param Numero di lampeggi
   */
  bool press();
};

#endif
