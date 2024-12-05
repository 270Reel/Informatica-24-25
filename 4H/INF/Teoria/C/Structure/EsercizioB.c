#include <stdio.h>

struct Tempo {
    int ore;
    int minuti;
    int secondi;
};

int main() {
    struct Tempo t1, t2, diff;

    printf("Inserisci il primo tempo (ore minuti secondi): ");
    scanf("%d %d %d", &t1.ore, &t1.minuti, &t1.secondi);

    printf("Inserisci il secondo tempo (ore minuti secondi): ");
    scanf("%d %d %d", &t2.ore, &t2.minuti, &t2.secondi);

    int t1_secondiTotali = t1.ore * 3600 + t1.minuti * 60 + t1.secondi;
    int t2_secondiTotali = t2.ore * 3600 + t2.minuti * 60 + t2.secondi;

    int diff_secondiTotali = t1_secondiTotali - t2_secondiTotali;

    if (diff_secondiTotali < 0) {
        diff_secondiTotali = -diff_secondiTotali;
    }

    diff.ore = diff_secondiTotali / 3600;
    diff_secondiTotali = diff_secondiTotali % 3600;
    diff.minuti = diff_secondiTotali / 60;
    diff.secondi = diff_secondiTotali % 60;

    // Stampa il risultato
    printf("Differenza: %d ore, %d minuti, %d secondi\n", diff.ore, diff.minuti, diff.secondi);

    return 0;
}
