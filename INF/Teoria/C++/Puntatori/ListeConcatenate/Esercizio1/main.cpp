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
        int num = rand() % 1001;
        lista.InserisciInTesta(num);
    }
    lista.VisualizzaLista();
    std::cout << "[La lista e' formata da: " << lista.ConteggioNodi() << " nodi]" << std::endl;

    std::cout << "Inserisci quanti nodi vuoi inserire in coda:" << "\t";
    std::cin >> nodiDaCreare;
    for (int i = 0; i < nodiDaCreare; i++)
    {
        int num = rand() % 1001;
        lista.InserisciInCoda(num);
    }
    lista.VisualizzaLista();
    std::cout << "[La lista e' formata da: " << lista.ConteggioNodi() << " nodi]" << std::endl;

    std::cout << "Inserisci il valore da eliminare:" << "\t";
    int nodoDaEliminare;
    std::cin >> nodoDaEliminare;

    if (lista.Elimina(nodoDaEliminare))
    {
        std::cout << "Elementi della list aggiornati:" << "\t";
        lista.VisualizzaLista();
    }
    else
    {
        std::cout << "Nessun elemento della lista e' stato aggiornato" << std::endl;
        lista.VisualizzaLista();
    }

    return 0;
}