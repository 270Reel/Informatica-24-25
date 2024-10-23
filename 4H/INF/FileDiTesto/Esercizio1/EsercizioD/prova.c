#include <stdio.h>

int main() {

    FILE *file;
    int num;

    file = fopen("testo.txt", "r");
    if (file == NULL) {
        printf("Errore nell'apertura del file.\n");
        return 1;
    }

    while ((num = fgetc(file)) != EOF) {

        printf("%c", num);
    }

    fclose(file);
    return 0;
}
