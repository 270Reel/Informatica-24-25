#include "Quadrilatero.h"

Quadrilatero::Quadrilatero(double L1, double L2, double L3, double L4) {
    this->L1 = L1;
    this->L2 = L2;
    this->L3 = L3;
    this->L4 = L4;
}

double Quadrilatero::Perimetro() {
    return L1 + L2 + L3 + L4;
}

double Quadrilatero::Area() {
    double s = (L1 + L2 + L3 + L4) / 2;
    return sqrt((s - L1) * (s - L2) * (s - L3) * (s - L4));
}

void Quadrilatero::stampa() {
    std::cout<<"[           VALORI DEL QUADRILATERO         ]"<<std::endl;
    std::cout<<"---------------------------------------------"<<std::endl;
    std::cout << "Primo lato:                 " << L1 << std::endl;
    std::cout << "Secondo lato:               " << L2 << std::endl;
    std::cout << "Terzo lato:                 " << L3 << std::endl;
    std::cout << "Quarto lato:                " << L4 << std::endl;
    std::cout << "Il valore del perimetro e': " << Perimetro() << std::endl;
    std::cout << "Il valore dell'area e':     " << Area() << std::endl << std::endl;
}
