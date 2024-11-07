#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_STUD 2
#define NUM_VOTI 5

typedef struct {
    char nome[20];
    char cognome[20];
    int voti[NUM_VOTI];
} Studente;

void Carica(FILE *fileptr);
void Stampa(FILE *fileptr);
void CorreggiVoto(FILE *fileptr);

int main() {
    srand(time(NULL));
    
    FILE *fileptr = fopen("Studenti.txt", "wb");
    Carica(fileptr);
    fclose(fileptr);

    fileptr = ("Studenti.txt", "rb");
    Stampa(fileptr);
    fclose(fileptr);

    fileptr = ("Studenti.txt", "w+");
    CorreggiVoto(fileptr);
    fclose(fileptr);

    return 0;
}

void Carica(FILE *fileptr) {
    for (int i = 0; i < NUM_STUD; i++) {
        Studente buffer;
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", buffer.nome, buffer.cognome);

        for (int j = 0; j < NUM_VOTI; j++) {
            buffer.voti[j] = rand() % 11;
            printf("Voto %d: %d\n", j + 1, buffer.voti[j]);
        }

        fwrite(&buffer, sizeof(Studente), 1, fileptr);
    }
}

void Stampa(FILE *fileptr) {
    Studente buffer;
    printf("\n+---------------------------------------------------------+\n");
    
    while (fread(&buffer, sizeof(Studente), 1, fileptr) == 1) {
        printf("Nome e cognome  : %s %s\n", buffer.nome, buffer.cognome);
        printf("Voti dell'alunno: ");
        
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", buffer.voti[j]);
        }
        printf("\n+---------------------------------------------------------+\n");
    }
}

void CorreggiVoto(FILE *fileptr) {
    Studente buffer;
    while (fread(&buffer, sizeof(Studente), 1, fileptr) == 1) {
        for(int i=0; i<NUM_VOTI; i++) {
            if(buffer.voti[i] < 4) {
                fseek()
            }
        }
    }
}