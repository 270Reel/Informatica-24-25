#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>
#include <cmath>

class Quadrilatero {
protected:
    double L1, L2, L3, L4;

public:
    Quadrilatero(double L1, double L2, double L3, double L4);
    double Perimetro();
    double Area();
    void stampa();
};

#endif
