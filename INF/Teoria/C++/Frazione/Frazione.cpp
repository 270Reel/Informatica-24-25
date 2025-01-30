#include "Frazione.h"
#include <iostream>

using namespace std;

// Costruttore
Frazione::Frazione(int num, int den) {
    if (den == 0) {
        cout << "Errore: il denominatore non può essere zero. Assegnato valore 1 di default.\n";
        den = 1;
    }
    this->num = num;
    this->den = den;
    semplifica(); // Semplifica direttamente la frazione dopo la creazione
}

// Getter
int Frazione::getNum() { return num; }
int Frazione::getDen() { return den; }

// Setter
void Frazione::setNum(int num) { 
    this->num = num; 
    semplifica(); // Ogni modifica semplifica la frazione automaticamente
}

void Frazione::setDen(int den) {
    if (den == 0) {
        cout << "Errore: il denominatore non può essere zero. Operazione annullata.\n";
        return;
    }
    this->den = den;
    semplifica();
}

// Metodo statico per calcolare il massimo comune divisore (MCD)
int Frazione::MCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Metodo per semplificare la frazione
void Frazione::semplifica() {
    int mcd = MCD(num, den);
    num /= mcd;
    den /= mcd;
}

// Metodo per stampare la frazione
void Frazione::stampa() {
    cout << "Frazione semplificata = " << num << "/" << den << endl;
}
