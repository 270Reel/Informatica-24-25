#ifndef QUADRATO_H
#define QUADRATO_H

#include "Quadrilatero.h"

//Classe Quadrato sotto classe di Quadrilatero
class Quadrato : public Quadrilatero{

public:

    //Costruttore
    Quadrato(double lato);

    //Metodi calcolatori
    double Perimetro();
    double Area();
    double Diagonale();

    //Metodo stampa
    void stampa();
};

#endif
