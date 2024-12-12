class LED {
    private:
        int pin;
        bool stato;

    public:
        LED(int pin) {
            this->pin = pin;
            pinMode(pin, OUTPUT);
            stato = false;
        }

        bool accendi() {
            digitalWrite(pin, HIGH);
            return true;
        }

        bool spegni() {
            digitalWrite(pin, LOW);
            return false;
        }
};

class SWITCH {
    private:
        int pin;
        bool stato;

    public:
        SWITCH(int pin) {
            this->pin = pin;
            pinMode(pin, INPUT_PULLUP);
            stato = false;
        }

        bool press() {
            if (digitalRead(pin) == LOW) {
                stato = true;
            } else {
                stato = false;
            }
            return stato;
        }
};

LED pinBLU(12);
LED pinGRE(13);
SWITCH pinSw(8);

void setup() {
}

void loop() {
  
    if (pinSw.press()) {
        pinBLU.spegni();
        pinGRE.accendi();
    } else {
        pinBLU.accendi();
        pinGRE.spegni();
    }
    delay(5000);
}
