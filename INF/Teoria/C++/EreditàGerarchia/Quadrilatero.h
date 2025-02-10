#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>
#include <cmath>

//Classe Padre
class Quadrilatero {

//Variabili accessibili solo dalle classi figlio
private:
    double lato1, lato2, lato3,lato4;

public:

    //Costruttore
    Quadrilatero(double lato1, double lato2, double lato3, double lato4);
    Quadrilatero(double lato1, double lato2);

    //Metodi calcolatori
    double Perimetro();
    //double Area();

    //Getters
    int getLati(double lato1,double lato2,double lato3,double lato4);

    //Setters
    void setLato1(double lato);
    void setLato2(double lato);
    void setLato3(double lato);
    void setLato4(double lato);

    //Metodo stampa
    void stampa();
};

#endif
