#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dichiarazione dei puntatori ai file
    FILE *inputFile, *outputFile;
    char ch;

    // Apertura del file di input in modalità lettura
    inputFile = fopen("IN.txt", "r");
    if (inputFile == NULL) {
        printf("Errore nell'apertura del file IN.txt\n");
        return 1;
    }

    // Apertura del file di output in modalità scrittura
    outputFile = fopen("OUT.txt", "w");
    if (outputFile == NULL) {
        printf("Errore nell'apertura del file OUT.txt\n");
        fclose(inputFile);  // Chiudere il file di input prima di uscire
        return 1;
    }

    // Lettura e copia carattere per carattere
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(ch, outputFile);
    }

    // Chiusura dei file
    fclose(inputFile);
    fclose(outputFile);

    printf("Copia completata con successo!\n");

    return 0;
}
