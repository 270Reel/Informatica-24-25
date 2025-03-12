#ifndef ROMBO_H
#define ROMBO_H

#include "Quadrilatero.h"

//Classe Rettangolo sotto classe di Quadrilatero
class Rombo : public Quadrilatero {

public:

    //Costruttore
    Rombo(double lato);

    //Metodi calcolatori
    double Perimetro();
    double Area();

    

    //Metodo stampa
    void stampa();
};

#endif
