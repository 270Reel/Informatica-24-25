#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM_COGN 20
#define NUM_VOTI 4
#define NUM_STUD 3

typedef struct data {
    int giorno;
    int mese;
    int anno;
} data;

typedef struct Studente {
    char nome[30];
    char cognome[DIM_COGN];
    data dataNascita;
    int voti[NUM_VOTI];
} Studente;

void caricaTab(Studente t[]); //Carica i dati per un singolo studente
void stampaTab(Studente t[]); //Stampa la tabella di studenti
int ricercaCogn(Studente t[], char cog[]); //Cerca uno studente per cognome
int stampaMedia(Studente t[]); //Stampa la media voti per ogni studente e conta quante medie sono ≥ 6.
int studenti10(Studente t[]); //Conta gli studenti con almeno un voto pari a 10

int main() {

    Studente studente[NUM_STUD];

    caricaTab(studente);

    stampaTab(studente);


    char TrovaCognome[30];
    printf("Inserisci il cognome da cercare: ");
    scanf("%s", TrovaCognome);
    int trovato = ricercaCogn(studente, TrovaCognome);
    if(trovato == 1){
        printf("Cognome %s trovato!", TrovaCognome);
    }else{
        printf("Cognome non trovato");
    }
    printf("\n+---------------------------------------------------------+\n");

    int MediePositive = stampaMedia(studente);
    printf("+---------------------------------------------------------+\n");
    printf("%d alunni hanno una media >= a 6", MediePositive);

    int stud10 = studenti10(studente);
    printf("\n+---------------------------------------------------------+\n");
    if(stud10 > 1) {
        printf("%d alunni hanno almeno un voto pari a 10\n", stud10);
    }else{
        printf("%d solo studente ha almeno un voto pari a 10\n");
    }
    
}

void caricaTab(Studente t[]) {
    for(int i=0; i<NUM_STUD; i++) {
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", t[i].nome, t[i].cognome);

        printf("Inserisci la data di nascita dell'alunno (gg/mese/anno): ");
        scanf("%d %d %d", &t[i].dataNascita.giorno, &t[i].dataNascita.mese, &t[i].dataNascita.anno);

        printf("Inserisci i voti dello studente:\n");
        for(int j=0; j<NUM_VOTI; j++) {
            printf("Voto n°%d: ", j+1);
            scanf("%d", &t[i].voti[j]);
        }
    }
}

void stampaTab(Studente t[]) {
    for(int i=0; i<NUM_STUD; i++) {
        printf("\n+---------------------------------------------------------+\n");
        printf(" Nome e cognome :     %s %s                               \n", t[i].nome, t[i].cognome);
        printf(" Data di nascita:     %d/%d/%d                            \n", t[i].dataNascita.giorno, t[i].dataNascita.mese, t[i].dataNascita.anno);
        printf(" Voti dell' alunno:   ");
        for(int j=0; j<NUM_VOTI; j++) {
            printf("%d ", t[i].voti[j]);
        }
    }
    printf("\n+---------------------------------------------------------+\n");
}

int ricercaCogn(Studente t[], char cog[]) {
    for(int i=0; i<NUM_STUD; i++) {
        if(strcmp(t[i].cognome, cog)==0) {
            return 1;
        }else {
            return 0;
        }
    }
}

int stampaMedia(Studente t[]) {
    int MediePos=0;
    for(int i=0; i<NUM_STUD; i++) {
        int somma = 0;
        for(int j=0; j<NUM_VOTI; j++) {
            somma += t[i].voti[j];
        }
        int media = somma / NUM_VOTI;
        printf("%s %s media: %d\n", t[i].nome, t[i].cognome, media);
        if(media>=6) {
            MediePos++;
        }
    }
    return MediePos;
}

int studenti10(Studente t[]) {
    int cont=0;
    for(int i=0; i<NUM_STUD; i++) {
        for(int j=0; j<NUM_VOTI; j++) {
            if(t[i].voti[j] == 10) {
            cont++;
            }
        }
    }
    return cont;
}