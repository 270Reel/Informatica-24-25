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

int main() {

    Studente buffer[NUM_STUD];
    FILE* fileptr = fopen("testo.txt", "wb"); 
    srand(time(NULL));

    for(int i=0; i<N; i++){
        Carica(buffer[i]);
    }
}