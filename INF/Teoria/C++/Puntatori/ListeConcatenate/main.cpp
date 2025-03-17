#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "list.h"


int main(){

    srand(time(NULL));

    Lista lista;
    
    std::cout<<"Inserisci quanti nodi vuoi inserire in testa:\t";
    int nodiDaCreare;
    std::cin>>nodiDaCreare;
    for (int i = 0; i < nodiDaCreare; i++)
    {
        int num = rand()%1001;
        lista.InserisciInTesta(num);
    }

    lista.VisualizzaLista();

    /*std::cout<<"Inserisci quanti nodi vuoi inserire in coda:\t";
    std::cin>>nodiDaCreare;
    for (int i = 0; i < nodiDaCreare; i++)
    {
        int num = rand()%1001;
        lista.InserisciInCoda(num);
    }

    lista.VisualizzaLista();*/

    std::cout<<std::endl<<"Il numero di nodi e'"<< lista.ConteggioNodi();
    
    

}