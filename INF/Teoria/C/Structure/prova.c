#include <stdio.h>
#define N 30

struct Indirizzo {

    char via[N];
    char citta[N];
    char provincia[N];
};

struct DataDiNascita {

    int giorno;
    int mese;
    int anno;
};

struct Persona {

    char nome[N];
    char cognome[N];

    //Dichiarazione di altre due strutture all'interno di una struttura
    struct Indirizzo indirizzo;
    struct DataDiNascita dataDiNascita;
};

int main() {

    //Definizione della struttura 'Persona'
    struct Persona p;

    //Chiedo all'utente di inserire i dati
    printf("Inserisci il nome della persona:     ");
    scanf("%s", p.nome);

    printf("Inserisci il cognome della persona:  ");
    scanf("%s", p.cognome);

    printf("Inserisci la via:                    ");
    scanf("%s", p.indirizzo.via);    

    printf("Inserisci la citta':                 ");
    scanf("%s", p.indirizzo.citta);

    printf("Inserisci la provincia:              ");
    scanf("%s", p.indirizzo.provincia);
    
    printf("Inserisci il giorno di nascita:      ");
    scanf("%d", &p.dataDiNascita.giorno);

    printf("Inserisci il mese di nascita:        ");
    scanf("%d", &p.dataDiNascita.mese);
    
    printf("Inserisci l'anno di nascita:         ");
    scanf("%d", &p.dataDiNascita.anno);
    printf("\n");

    //Stampo i dati inseriti

    StampaInformazioni(p);
    return 0;
}

void StampaInformazioni(struct p) {
    printf("Nome e cognome della persona inserita:   %s %s\n", p.nome, p.cognome);
    printf("Indirizzo della persona inserita:        %s - Citta': %s - Provincia(%s)\n", p.indirizzo.via, p.indirizzo.citta, p.indirizzo.provincia);
    printf("Data di nascita della persona inserita:  %d/%d/%d\n", p.dataDiNascita.giorno, p.dataDiNascita.mese, p.dataDiNascita.anno);
}