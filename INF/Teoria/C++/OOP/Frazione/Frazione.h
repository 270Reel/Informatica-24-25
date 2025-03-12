#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione {
private:
    int num;
    int den;
    static int MCD(int a, int b);  // Metodo statico per calcolare il massimo comune divisore

public:
    // Costruttore
    Frazione(int num, int den);

    // Getters
    int getNum();
    int getDen();

    // Setters
    void setNum(int num);
    void setDen(int den);

    // Metodi di utilità
    void semplifica();  // Semplifica la frazione
    void stampa();  // Stampa la frazione
};

#endif
