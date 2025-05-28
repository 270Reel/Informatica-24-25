#include "Frazione.h"
#include <iostream>

using namespace std;

int main()
{
    Frazione frazione1(20, 5);

    frazione1.semplifica(); // Semplifica la frazione
    frazione1.stampa();     // Stampa il risultato

    return 0;
}
