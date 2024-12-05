#include <stdio.h>

int main() {

    FILE* testo;
    char ch;

    //Apriamo il file e controlliamo la corretta apertura
    testo = fopen("test.txt", "r");
    if(testo != NULL) {
        printf("Apertura del file andata a buon fine!\n");
    } else {
        printf("Apertura del file non andata a buon fine :( \n");
        return 1;
    }

    //Leggiamo e stampiamo tutti i caratteri
    //presenti nel file
    while(!feof(testo)) {
        ch = fgetc(testo);
        if(ch != EOF) {
            printf("%c", ch);
        }
    }
    

    fclose(testo);
    return 0;
}