#include <iostream>
#include <stdlib.h>
#include <time.h>
#define N 10

using namespace std;

void Carica(int vet[]);
int TrovaMax(int vet[]);

int main(){

    int vet[N];

    Carica(vet);

    int *p = TrovaMax(vet[]);
    cout<<"Il numero piu' grande si trova in posizione"
    
}

void Carica(int vet[]){
    for(int i=0; i<N; i++){
        vet[i] = rand() % 11;
    }
}

int TrovaMax(int vet[]){

}
