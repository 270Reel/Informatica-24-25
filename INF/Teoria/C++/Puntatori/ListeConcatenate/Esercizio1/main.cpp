#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main()
{

    srand(time(NULL));

    Lista lista;

    std::cout << "Inserisci quanti nodi vuoi inserire in testa:" << "\t";
    int nodiDaCreare;
    std::cin >> nodiDaCreare;
    for (int i = 0; i < nodiDaCreare; i++)
    {
        int num = rand() % 100;
        lista.InserisciInTesta(num);
    }
    lista.VisualizzaLista();
    std::cout << "[La lista e' formata da: " << lista.ConteggioNodi() << " nodi]" << std::endl;

    std::cout << "Inserisci quanti nodi vuoi inserire in coda:" << "\t";
    std::cin >> nodiDaCreare;
    for (int i = 0; i < nodiDaCreare; i++)
    {
        int num = rand() % 2;
        lista.InserisciInCoda(num);
    }
    lista.VisualizzaLista();
    std::cout << "[La lista e' formata da: " << lista.ConteggioNodi() << " nodi]" << std::endl;

    std::cout<<"Nodi duplicati eliminati(se presenti)"<<std::endl;
    lista.RimuoviDuplicati();
    lista.VisualizzaLista();
    
    std::cout << "Inserisci il valore da eliminare:" << "\t";
    int nodoDaEliminare;
    std::cin >> nodoDaEliminare;

    if (lista.Elimina(nodoDaEliminare))
    {
        std::cout << "Elementi della list aggiornati:" << std::endl;
        lista.VisualizzaLista();
    }
    else
    {
        std::cout << "Nessun elemento della lista e' stato aggiornato" << std::endl;
        lista.VisualizzaLista();
    }

    std::cout<<"Inserisci il nodo da cercare:"<<"\t";
    int nodoDaCercare; std::cin>>nodoDaCercare;
    if(lista.RicercaNodo(nodoDaCercare)){std::cout<<"Elemento della lista trovato!";}
    
    return 0;
}