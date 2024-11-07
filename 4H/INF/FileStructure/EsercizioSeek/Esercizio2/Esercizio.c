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

void Carica(FILE *fileptr, Studente studenti[]);
void Stampa(FILE *fileptr, Studente studenti[]);
void CorreggiVoto(FILE *fileptr, Studente studenti[]);

int main() {
    srand(time(NULL));

    Studente studenti[NUM_STUD];

    FILE *fileptr = fopen("Studenti.dat", "wb");
    if (fileptr == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    Carica(fileptr, studenti);
    fclose(fileptr);

    fileptr = fopen("Studenti.dat", "rb");
    if (fileptr == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    Stampa(fileptr, studenti);
    fclose(fileptr);

    fileptr = fopen("Studenti.dat", "r+b");
    if (fileptr == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    CorreggiVoto(fileptr, studenti);
    fclose(fileptr);

    fileptr = fopen("Studenti.dat", "rb");
    if (fileptr == NULL) {
        perror("Errore nell'apertura del file");
        return 1;
    }
    Stampa(fileptr, studenti);
    fclose(fileptr);

    return 0;
}

void Carica(FILE *fileptr, Studente studenti[]) {
    for (int i = 0; i < NUM_STUD; i++) {
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", studenti[i].nome, studenti[i].cognome);

        for (int j = 0; j < NUM_VOTI; j++) {
            studenti[i].voti[j] = rand() % 11;  // Voti casuali da 0 a 10
            printf("Voto %d: %d\n", j + 1, studenti[i].voti[j]);
        }

        fwrite(&studenti[i], sizeof(Studente), 1, fileptr);
    }
}

void Stampa(FILE *fileptr, Studente studenti[]) {
    printf("\n+---------------------------------------------------------+\n");
    
    for (int i = 0; i < NUM_STUD; i++) {
        printf("Nome e cognome  : %s %s\n", studenti[i].nome, studenti[i].cognome);
        printf("Voti dell'alunno: ");
        
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", studenti[i].voti[j]);
        }
        printf("\n+---------------------------------------------------------+\n");
    }
}

void CorreggiVoto(FILE *fileptr, Studente studenti[]) {
    char cognome[20];

    printf("Qual'e' il cognome di cui vuoi cambiare i voti? ");
    scanf("%s", cognome);

    for (int i = 0; i < NUM_STUD; i++) {
        if (strcmp(cognome, studenti[i].cognome) == 0) {

            int posizione = i * sizeof(Studente);

            printf("Voti correnti di %s %s: ", studenti[i].nome, studenti[i].cognome);
            for (int j = 0; j < NUM_VOTI; j++) {
                printf("%d ", studenti[i].voti[j]);
            }
            printf("\n");

            for (int j = 0; j < NUM_VOTI; j++) {
                printf("Nuovo voto %d: ", j + 1);
                scanf("%d", &studenti[i].voti[j]);
            }

            fseek(fileptr, posizione, SEEK_SET);
            fwrite(&studenti[i], sizeof(Studente), 1, fileptr);

            printf("Voti aggiornati per %s %s.\n", studenti[i].nome, studenti[i].cognome);
        }
    }
}
