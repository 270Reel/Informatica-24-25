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
int RicercaCognome(FILE *fileptr, char cogn[]);
void StampaInformazioni(FILE *fileptr);

int main() {
    srand(time(NULL));
    
    FILE *fileptr = fopen("Studenti.dat", "wb");
    Carica(fileptr);
    fclose(fileptr);

    fileptr = fopen("Studenti.dat", "rb");
    Stampa(fileptr);
    fclose(fileptr);

    /*fileptr = fopen("Studenti.dat", "rb");
    char cogn[20];
    printf("Inserisci il cognome da cercare: ");
    scanf("%s", cogn);
    int CognomeTrovato = RicercaCognome(fileptr, cogn);

    if (CognomeTrovato == 1) {
        printf("Cognome trovato!\n\n");
    } else {
        printf("Cognome non trovato.\n\n");
    }
    fclose(fileptr);

    fileptr = fopen("Studenti.dat", "rb");
    StampaInformazioni(fileptr);
    fclose(fileptr);*/

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

int RicercaCognome(FILE *fileptr, char cogn[]) {
    Studente buffer;
    while (fread(&buffer, sizeof(Studente), 1, fileptr) == 1) {
        if (strcmp(buffer.cognome, cogn) == 0) {
            return 1;
        }
    }
    return 0;
}

void StampaInformazioni(FILE *fileptr) {
    Studente buffer;
    
    while (fread(&buffer, sizeof(Studente), 1, fileptr) == 1) {
        int max_voto = 0, min_voto = 10, somma = 0;
        
        for (int i = 0; i < NUM_VOTI; i++) {
            somma += buffer.voti[i];
            if (buffer.voti[i] > max_voto) { max_voto = buffer.voti[i]; }
            if (buffer.voti[i] < min_voto) { min_voto = buffer.voti[i]; }
        }
        
        int media = somma / NUM_VOTI;
        printf("%s %s                ",buffer.nome, buffer.cognome);
        printf("Media: %d | Voto più alto: %d | Voto più basso: %d\n",media, max_voto, min_voto);
    }
}
