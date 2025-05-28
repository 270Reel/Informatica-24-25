#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>
#include <cmath>

// Classe Padre
class Quadrilatero
{

    // Variabili accessibili solo dalle classi figlio
protected:
    double L1, L2, L3, L4;

public:
    // Costruttore
    Quadrilatero(double L1, double L2, double L3, double L4);

    // Metodi calcolatori
    double Perimetro();
    // double Area();

    // Getters
    double getLato1();
    double getLato2();
    double getLato3();
    double getLato4();

    // Setters
    void setLato1(double lato);
    void setLato2(double lato);
    void setLato3(double lato);
    void setLato4(double lato);

    // Metodo stampa
    void stampa();
};

#endif
