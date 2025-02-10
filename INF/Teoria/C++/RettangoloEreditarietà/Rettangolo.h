#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include "Quadrilatero.h"

//Classe Rettangolo sotto classe di Quadrilatero
class Rettangolo : public Quadrilatero {

public:

    //Costruttore
    Rettangolo(double base, double altezza);

    //Metodi calcolatori
    double Perimetro();
    double Area();
    double Diagonale();

    //Getters
    double getBase();
    double getAltezza();

    //Setters
    void setBase(double base);
    void setAltezza(double altezza);

    //Metodo stampa
    void stampa();
};

#endif
