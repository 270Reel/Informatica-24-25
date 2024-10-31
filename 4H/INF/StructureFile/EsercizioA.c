#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUD 1
#define NUM_VOTI 5

typedef struct profiloStudente {
    char nome[20];
    char cognome[20];
    int voti[NUM_VOTI];
} Studente;

void Carica(Studente buffer[], FILE *fileptr);
void Stampa(Studente buffer[], FILE *fileptr);

int main(int argc, char* argv[]) {
    srand(time(NULL));
    
    FILE *fileptr = fopen("TabellaStudenti.txt", "wb");
    
    Studente buffer[NUM_STUD];

    Carica(buffer, fileptr);
    fclose(fileptr); // Chiude il file dopo la scrittura

    // Riapre il file in modalità lettura per la stampa
    fileptr = fopen("TabellaStudenti.txt", "rb");
    
    Stampa(buffer, fileptr);
    fclose(fileptr); // Chiudiamo il file dopo la lettura

    return 0;
}

void Carica(Studente buffer[], FILE *fileptr) {
    for (int i = 0; i < NUM_STUD; i++) {
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", buffer[i].nome, buffer[i].cognome);

        // Genera casualmente i voti
        for (int j = 0; j < NUM_VOTI; j++) {
            buffer[i].voti[j] = rand() % 11;
            printf("Voto %d: %d\n", j + 1, buffer[i].voti[j]);
        }

        // Scrive i dati dello studente nel file
        fwrite(&buffer[i], sizeof(Studente), 1, fileptr);
    }
}

void Stampa(Studente buffer[], FILE *fileptr) {
    fread(buffer, sizeof(Studente), NUM_STUD, fileptr);
        for (int i = 0; i < NUM_STUD; i++) {
            printf("\n+---------------------------------------------------------+\n");
            printf(" Nome e cognome :     %s %s                               \n", buffer[i].nome, buffer[i].cognome);
            printf(" Voti dell'alunno:   ");
            for (int j = 0; j < NUM_VOTI; j++) {
                printf("%d ", buffer[i].voti[j]);
            }
            printf("\n+---------------------------------------------------------+\n");
        }
}
