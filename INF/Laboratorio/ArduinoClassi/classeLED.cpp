class LED {
    
  private:
    int pin;             // Pin del LED
    bool stato;          // Stato del LED (acceso o spento)

  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) {
        pin = p;
        pinMode(pin, OUTPUT);
        stato = false;  // Imposta lo stato iniziale del LED come spento
    }

    // Metodo per accendere il LED
    void accendi() {
        digitalWrite(pin, HIGH);
        stato = true;
    }

    // Metodo per spegnere il LED
    void spegni() {
        digitalWrite(pin, LOW);
        stato = false;
    }

    // Metodo che inverte lo stato del LED
    void inverti() {
        stato = !stato;  // Inverte lo stato
        digitalWrite(pin, stato);
    }

    // Metodo per fare lampeggiare il LED per un numero di volte
    void lampeggio(int nLampeggi) {
      for (int i = 0; i < nLampeggi; i++) {
        digitalWrite(pin, HIGH);
        delay(500);
        digitalWrite(pin, LOW);
        delay(500);
      }
    }

    void test(int numeroTest) {
      for (int i = 0; i < numeroTest; i++) {

        accendi(); delay(2000); spegni(); delay(2000);

        inverti(); delay(2000); inverti();

        lampeggio();

      }
    }
};  // Aggiungi il punto e virgola qui per terminare la dichiarazione della classe

// Crea un oggetto LED sulla porta 11
LED led(11);

void setup() {
  // Oggetto LED già inizializzato nel costruttore
}

void loop() {
  led.test(1); // Esegui il test con 3 inversioni
  delay(10000);
}