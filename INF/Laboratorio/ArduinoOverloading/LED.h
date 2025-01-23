#ifndef LED_H
#define LED_H

class LED {
private:
  int pin;
  bool stato;

public:
  // Costruttore
  LED(int pin);

  // Metodi accensione
  void accendi();
  void accendi(int durata);

  // Metodi spegnimento
  void spegni();
  void spegni(int ritardo);

  // Metodi inverti
  void inverti();
  void inverti(int nLampeggi);

  // Metodo lampeggio
  void lampeggio(int numero, int durata);

  // Metodi test
  void test1();
  void test2();
  void test3();
};

#endif
