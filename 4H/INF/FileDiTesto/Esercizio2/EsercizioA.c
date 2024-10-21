#include <stdio.h>

int main() {

    FILE* testoIN;
    FILE* testoOUT;
    char ch;

    // Apri il file di input in modalità lettura
    testoIN = fopen("IN.txt", "r");
    if(testoIN == NULL) {
        printf("Errore nell'apertura del file IN.txt\n");
        return 1;
    }

    // Apri il file di output in modalità scrittura
    testoOUT = fopen("OUT.txt", "w");
    if(testoOUT == NULL) {
        printf("Errore nell'apertura del file OUT.txt\n");
        fclose(testoIN); // Chiudi il file di input se c'è un errore
        return 1;
    }

    
    /*while(fgetc(testoIN) !=  EOF) {
        ch = fgetc(testoIN)
        fputc(ch, testoOUT);
    }*/


    // Copia il contenuto carattere per carattere
    while((ch = fgetc(testoIN)) != EOF) {
        fputc(ch, testoOUT);
    }

    // Chiudi entrambi i file
    fclose(testoIN);
    fclose(testoOUT);

    // Facoltativo: rileggi il file di output per stamparlo a schermo
    testoOUT = fopen("OUT.txt", "r");
    if(testoOUT == NULL) {
        printf("Errore nell'apertura del file OUT.txt per la lettura\n");
        return 1;
    }

    // Stampa il contenuto di OUT.txt
    while((ch = fgetc(testoOUT)) != EOF) {
        printf("%c", ch);
    }

    // Chiudi il file di output
    fclose(testoOUT);

    return 0;
}
