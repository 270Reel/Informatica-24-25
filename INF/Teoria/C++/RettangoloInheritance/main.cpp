#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"

int main() {
    Rettangolo ret(5, 3);
    ret.stampa();

    Quadrilatero qrd(10,8,4,1);
    qrd.stampa();

    Quadrato qdr(5);
    qdr.stampa();

    return 0;
}
