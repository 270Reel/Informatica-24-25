#include <iostream>
#include "Rettangolo.h"

int main() {
    // Test del costruttore di default
    Rettangolo r1;
    std::cout << "Rettangolo 1 (default): Base = " << r1.getBase() 
              << ", Altezza = " << r1.getAltezza() 
              << ", Perimetro = " << r1.calcolaPerimetro() 
              << ", Area = " << r1.calcolaArea() 
              << ", Diagonale = " << r1.calcolaDiagonale() 
              << std::endl;

    // Test del costruttore con un parametro
    Rettangolo r2(5);
    std::cout << "Rettangolo 2 (un parametro): Base = " << r2.getBase() 
              << ", Altezza = " << r2.getAltezza() 
              << ", Perimetro = " << r2.calcolaPerimetro() 
              << ", Area = " << r2.calcolaArea() 
              << ", Diagonale = " << r2.calcolaDiagonale() 
              << std::endl;

    // Test del costruttore con due parametri
    Rettangolo r3(3, 4);
    std::cout << "Rettangolo 3 (due parametri): Base = " << r3.getBase() 
              << ", Altezza = " << r3.getAltezza() 
              << ", Perimetro = " << r3.calcolaPerimetro() 
              << ", Area = " << r3.calcolaArea() 
              << ", Diagonale = " << r3.calcolaDiagonale() 
              << std::endl;

    // Modifica delle dimensioni
    r3.setBase(6);
    r3.setAltezza(8);
    std::cout << "Rettangolo 3 modificato: Base = " << r3.getBase() 
              << ", Altezza = " << r3.getAltezza() 
              << ", Perimetro = " << r3.calcolaPerimetro() 
              << ", Area = " << r3.calcolaArea() 
              << ", Diagonale = " << r3.calcolaDiagonale() 
              << std::endl;

    return 0;
}
