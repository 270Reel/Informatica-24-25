#include "Rettangolo.h"

// Costruttore che pone a zero base e altezza
Rettangolo::Rettangolo() : base(0), altezza(0) {}

// Costruttore con 1 parametro
Rettangolo::Rettangolo(double lato) : base(lato), altezza(lato) {}

// Costruttore con 2 parametri
Rettangolo::Rettangolo(double base, double altezza) : base(base), altezza(altezza) {}

// Distruttore
Rettangolo::~Rettangolo() {
    std::cout << "Hai chiamato il distruttore" << std::endl;
}

// Metodi setter
void Rettangolo::setBase(double base) {
    this->base = base;
}

void Rettangolo::setAltezza(double altezza) {
    this->altezza = altezza;
}

// Metodi getter
double Rettangolo::getBase() const {
    return base;
}

double Rettangolo::getAltezza() const {
    return altezza;
}

// Calcola il perimetro
double Rettangolo::calcolaPerimetro() const {
    return 2 * (base + altezza);
}

// Calcola l'area
double Rettangolo::calcolaArea() const {
    return base * altezza;
}

// Calcola la diagonale
double Rettangolo::calcolaDiagonale() const {
    return std::sqrt(base * base + altezza * altezza);
}
