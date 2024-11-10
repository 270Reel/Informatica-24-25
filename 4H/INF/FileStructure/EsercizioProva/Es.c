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

void Carica(Studente buffer[]; FILE *fileptr);
void Stampa(FILE *fileptr);

int main() {
    srand(time(NULL));
    Studente buffer[NUM_STUD];
    FILE* fileptr = fopen("testo.txt", "wb"); 
    Carica(buffer, fileptr);

}

void Carica(Studente buffer[], FILE *fileptr) {
    for(int i=0; i<NUM_STUD; i++) {
        for(int j=0; j<NUM_VOTI; j++){
            buffer[i].voti[j] = rand() % 11;
        }
        fwrite(&buffer, sizeof(Studente), 1, fileptr);
    }

}

void Stampa(FILE *fileptr) {
    Studente
    fseek(fileptr,1,SEEK_SET);
    while(fread(&buffer, sizeof(Studente))==!)
}