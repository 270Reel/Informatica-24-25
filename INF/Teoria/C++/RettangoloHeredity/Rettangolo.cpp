#include "Rettangolo.h"


Rettangolo::Rettangolo(double base, double altezza) 
    : Quadrilatero(base, altezza, base, altezza) {}

double Rettangolo::Perimetro() {
    return 2 * (L1 + L2); 
}

double Rettangolo::Area() {
    return L1 * L2;
}

double Rettangolo::Diagonale() {
    return sqrt(L1 * L1 + L2 * L2);
}

void Rettangolo::stampa() {
    std::cout << "Il valore della base e':      " << L1 << std::endl;
    std::cout << "Il valore dell'altezza e':    " << L2 << std::endl;
    std::cout << "Il valore del perimetro e':   " << Perimetro() << std::endl;
    std::cout << "Il valore dell'area e':       " << Area() << std::endl;
    std::cout << "Il valore della diagonale e': " << Diagonale() << std::endl;
}
