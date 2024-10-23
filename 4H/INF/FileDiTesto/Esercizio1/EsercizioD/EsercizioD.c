#include <stdio.h>

int main() {

    FILE *numeri;
    FILE *numeriDispari;
    FILE *numeriPari;
    int num;

    numeri = fopen("testo.txt", "r");
    if (numeri == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }
    numeriPari = fopen("testo.txt", "r");
    if (numeriPari == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    numeriDispari = fopen("testo.txt", "r");
    if (numeriDispari == NULL) {
        printf("Errore nell'apertura del file numeriDispari.txt\n");
        return 1;
    }

    while((num = fgetc(numeriPari)) != EOF) {
        int statoNumero=0;
        if(ch)

        
    }

    fclose(numeri);
    fclose(numeriDispari);
    fclose(numeriPari);
    return 0;
}