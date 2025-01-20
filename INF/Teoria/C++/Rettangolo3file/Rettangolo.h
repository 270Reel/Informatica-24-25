#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include <iostream>
#include <cmath>

class Rettangolo {
private:
    double base;
    double altezza;

public:
    // Costruttore che pone a zero base e altezza
    Rettangolo();

    // Costruttore con 1 parametro
    Rettangolo(double lato);

    // Costruttore con 2 parametri
    Rettangolo(double base, double altezza);

    // Distruttore
    ~Rettangolo();

    // Metodi setter
    void setBase(double base);
    void setAltezza(double altezza);

    // Metodi getter
    double getBase() const;
    double getAltezza() const;

    // Altri metodi
    double calcolaPerimetro() const;
    double calcolaArea() const;
    double calcolaDiagonale() const;
};

#endif // RETTANGOLO_H
