#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"

using namespace std;

int main() {
    
    Quadrilatero Q1(9,3,6,5);
    Rettangolo R1(5,7);

    cout << "[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    Q1.stampa();

    cout << endl;

    cout << "[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    return 0;
}