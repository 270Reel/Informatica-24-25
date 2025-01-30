
#include "Rettangolo.h"
#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Rettangolo::Rettangolo(double base,double altezza):Quadrilatero(base,altezza,base,altezza){

}

double Rettangolo::Perimetro() {
    return (L1 + L2) * 2;
}

double Rettangolo::Area() {
    return L1 * L2;
}

double Rettangolo::Diagonale() {
    return sqrt(L3 * L3 + L4 * L4);
}

void Rettangolo::stampa() {
    cout << "Il valore della base e':      " << l1 << endl;
    cout << "Il valore dell'altezza e':    " << l2 << endl;
    cout << "Il valore del perimetro e':   " << Perimetro() << endl;
    cout << "Il valore dell'area e':       " << Area() << endl;
    cout << "Il valore della diagonale e': " << Diagonale() << endl;
}
