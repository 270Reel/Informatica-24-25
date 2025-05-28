#include "Rombo.h"

Rombo::Rombo(double lato) : Quadrilatero(lato, lato, lato, lato) {}

double Rombo::Perimetro()
{
    return L1 * 4;
}

double Rombo::Area()
{
    return (L1 * L1) / 2;
}

void Rombo::stampa()
{
    std::cout << "[               VALORI DEL ROMBO            ]" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "Il valore del lato e':        " << L1 << std::endl;
    std::cout << "Il valore del perimetro e':   " << Perimetro() << std::endl;
    std::cout << "Il valore dell'area e':       " << Area() << std::endl;
}