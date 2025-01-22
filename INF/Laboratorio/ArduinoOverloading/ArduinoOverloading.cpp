class LED {
  private:
    int pin;             
    bool stato;          

  public:
    // Costruttore: inizializza il pin e lo imposta come output
    LED(int p) {
        pin = p;
        pinMode(pin, OUTPUT);
        stato = false;  
    }

    // Accendi il LED
    void accendi() {
        digitalWrite(pin, HIGH);
        stato = true;
    }

    // Accendi il LED per un determinato periodo di tempo e poi spegnilo
    void accendi(int durata) {
        digitalWrite(pin, HIGH);
        delay(durata);
        digitalWrite(pin, LOW);
        stato = false;
    }

    // Spegni il LED
    void spegni() {
        digitalWrite(pin, LOW);
        stato = false;
    }

    // Accendi il LED per un determinato periodo di tempo e poi spegnilo
    void spegni(int ritardo) {
        accendi();
        delay(ritardo);
        spegni();
    }

    // Inverti lo stato del LED (se acceso, spegni; se spento, accendi)
    void inverti() {
        stato = !stato; 
        digitalWrite(pin, stato ? HIGH : LOW);
    }

    // Fai lampeggiare il LED un certo numero di volte (durata predefinita)
    void lampeggio(int nLampeggi) {
        for (int i = 0; i < nLampeggi; i++) {
            accendi();
            delay(500);
            spegni();
            delay(500);
        }
    }

    // Fai lampeggiare il LED un certo numero di volte con una durata personalizzata
    void lampeggio(int numero, int durata) {
        for (int i = 0; i < numero; i++) {
            accendi();
            delay(durata);                  
            spegni();
            delay(durata);                  
        }
    }

  void test(){
    lampeggio(3, 500);
    delay(3000);
    accendi(2000);
    delay(3000);
    accendi();
    spegni(2000);
  }
};

class SWITCH {
  private:
    int pin;

  public:

    SWITCH(int pin) {
        this->pin = pin;
        pinMode(pin, INPUT_PULLUP);
    }

  bool press() {
    if (digitalRead(pin) == LOW) {
        return true;
    } else {
        return false;
    }
}

};

// Creazione di oggetti LED sulle porte specificate
LED led1(7);
LED led2(9);
LED led3(11);
LED led4(13);

// Creazione di oggetti SWITCH sulle porte specificate
SWITCH switch1(6);
SWITCH switch2(8);
SWITCH switch3(10);
SWITCH switch4(12);

void setup() {
}

void loop() {
  led1.test();
  delay(7000);
}