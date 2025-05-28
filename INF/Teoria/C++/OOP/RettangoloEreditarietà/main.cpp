#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"
#include "Rombo.h"

int main()
{
    Quadrilatero qrd(10, 8, 4, 1);
    qrd.stampa();

    Rettangolo ret(5, 3);
    ret.stampa();

    Quadrato qdr(5);
    qdr.stampa();

    Rombo rmb(7);
    rmb.stampa();

    return 0;
}
