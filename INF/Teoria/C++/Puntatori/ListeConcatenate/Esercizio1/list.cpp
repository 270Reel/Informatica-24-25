#include <iostream>
#include "list.h"

Lista::Lista()
{
    testa = nullptr;
}

void Lista::InserisciInTesta(int val)
{

    Nodo *nuovoNodo = new Nodo;

    nuovoNodo->valore = val;
    nuovoNodo->next = testa;
    testa = nuovoNodo;
}

void Lista::InserisciInCoda(int val)
{

    Nodo *nuovoNodo = new Nodo;
    nuovoNodo->valore = val;
    nuovoNodo->next = nullptr;

    Nodo *temp = testa;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = nuovoNodo;
}

void Lista::VisualizzaLista()
{
    Nodo *temp = testa;

    while (temp != nullptr)
    {
        std::cout << "[" << temp->valore << "|" << temp->next << "]" << "-----";
        temp = temp->next;
    }

    std::cout << "[|]" << std::endl;
}

bool Lista::Elimina(int val)
{

    Nodo *temp = testa;

    while (temp->next != nullptr)
    {
        if (temp->next->valore == val)
        {

            Nodo *daEliminare = temp->next;
            temp->next = temp->next->next;
            delete daEliminare;
            return true;
        }
        temp = temp->next;
    }
}

int Lista::ConteggioNodi()
{

    Nodo *temp = testa;
    int numeroNodi = 0;

    while (temp != nullptr)
    {
        numeroNodi++;
        temp = temp->next;
    }

    return numeroNodi;
}

bool Lista::RicercaNodo(int val)
{
    Nodo *temp = testa;

    while (temp != nullptr)
    {
        if (temp->valore == val)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int Lista::RimuoviDuplicati()
{
    Nodo *temp = testa;
    int nodiRimossi;

    while (temp != nullptr)
    {
        if (temp->valore == temp->next->valore)
        {
            temp->next = temp->next->next;
            nodiRimossi++;
        }
        temp = temp->next;
    }
    return nodiRimossi;
}
