class LED
{

private:
  int pin;    // Pin del LED
  bool stato; // Stato del LED (acceso o spento)

public:
  // Costruttore: imposta la modalità del pin del LED come output
  LED(int p)
  {
    pin = p;
    pinMode(pin, OUTPUT);
    stato = false; // Imposta lo stato iniziale del LED come spento
  }

  // Metodo per accendere il LED
  void accendi()
  {
    digitalWrite(pin, HIGH);
    stato = true;
  }

  // Metodo per spegnere il LED
  void spegni()
  {
    digitalWrite(pin, LOW);
    stato = false;
  }

  // Metodo che inverte lo stato del LED
  void inverti()
  {
    stato = !stato; // Inverte lo stato
    digitalWrite(pin, stato);
  }

  // Metodo per fare lampeggiare il LED per un numero di volte
  void lampeggio(int nLampeggi)
  {
    for (int i = 0; i < nLampeggi; i++)
    {
      digitalWrite(pin, HIGH);
      delay(500);
      digitalWrite(pin, LOW);
      delay(500);
    }
  }

  void test1(int numeroTest)
  {
    lampeggio(numeroTest);
  }

  void test2(int numeroTest)
  {
    for (int i = 0; i < numeroTest; i++)
    {
      inverti();
      delay(2000);
    }
  }
};

// Crea un oggetto LED sulla porta 11
LED led(11);

void setup()
{
  led.test1(3);
  delay(6000);
  led.test2(3);
}

void loop()
{
}