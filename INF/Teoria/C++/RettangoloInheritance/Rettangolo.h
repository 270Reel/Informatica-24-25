#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include "Quadrilatero.h"

class Rettangolo : public Quadrilatero {

public:
    Rettangolo(double base, double altezza);
    double Perimetro();
    double Area();
    double Diagonale();
    void stampa();
};

#endif
