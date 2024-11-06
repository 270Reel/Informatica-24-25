#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_STUD 2
#define NUM_VOTI 5

typedef struct {
    char nome[20];
    char cognome[20];
    int voti[NUM_VOTI];
} Studente;

void Carica(Studente buffer[], FILE *fileptr);
void Stampa(Studente buffer[], FILE *fileptr);
int  RicercaCognome(Studente buffer[], FILE *fileptr,int cogn);

int main(int argc, char* argv[]) {

    srand(time(NULL));
    
    FILE *fileptr = fopen("TabellaStudenti.txt", "wb");
    
    Studente buffer[NUM_STUD];

    Carica(fileptr);
    fclose(fileptr); // Chiude il file dopo la scrittura

    // Riapre il file in modalità lettura per la stampa
    fileptr = fopen("TabellaStudenti.txt", "rb");
    
    Stampa(fileptr);
    fclose(fileptr); // Chiudiamo il file dopo la lettura

    fileptr = fopen("TabellaStudenti.txt", "rb");

    char cogn[20];
    printf("Inserisci il cognome da cercare: "); scanf("%s", cogn);
    int CognomeTrovato = RicercaCognome(fileptr, cogn);



    return 0;
}

void Carica(FILE *fileptr) {
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

void Stampa(FILE *fileptr) {
    int i=0;
    Studente buffer[NUM_STUD];
        while(!feof(fileptr) && i<NUM_STUD){
            fread(buffer, sizeof(Studente),1, fileptr);
            printf("\n+---------------------------------------------------------+\n");
            printf(" Nome e cognome :     %s %s                               \n", buffer[i].nome, buffer[i].cognome);
            printf(" Voti dell'alunno:    ");
            for (int j = 0; j < NUM_VOTI; j++) {
                printf("%d ", buffer[i].voti[j]);
            }
            printf("\n+---------------------------------------------------------+\n");
            i++;
        }
}

int RicercaCogn(char cog[]) {
    for(int i=0; i<NUM_STUD; i++) {
        if(strcmp(buffer[i].cognome, cog)==0) {
            return 1;
        }else {
            return 0;
        }
    }
}
