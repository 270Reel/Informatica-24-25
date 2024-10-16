#include <stdio.h>

int main() {

    FILE* testo;
    
    testo = fopen("test.txt", "r");

    char contenuto[1000];

    fgets(contenuto, 1000, testo);
    printf("%s", contenuto);

    if(testo != 0) {
        printf("Apertura del file andata a buon fine!\n");
    }else {
        printf("Apertura del file non andata a buon fine :(\n");
    }

    return 0;

}