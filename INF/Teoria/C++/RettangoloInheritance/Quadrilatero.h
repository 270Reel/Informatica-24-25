#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>
#include <cmath>

//Classe Padre
class Quadrilatero {

//Variabili accessibili solo dalle classi figlio
protected:
    double L1, L2, L3, L4;

public:

    //Costruttore
    Quadrilatero(double L1, double L2, double L3, double L4);

    //Metodi calcolatori
    double Perimetro();
    double Area();
    
    //Metodo stampa
    void stampa();
};

#endif
