#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {
    
    protected:

    double L1,L2,L3,L4;

    public:

    Quadrilatero(double l1,double l2,double l3,double l4);
    double Perimetro();
    double Area();
    void stampa();
};

#endif

