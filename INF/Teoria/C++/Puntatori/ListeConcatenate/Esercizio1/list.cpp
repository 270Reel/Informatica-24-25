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

    if (testa == nullptr)
    {
        testa = nuovoNodo;
        return;
    }

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
    if (testa == nullptr) // Lista vuota
        return false;

    if (testa->valore == val)
    {
        Nodo *daEliminare = testa;
        testa = testa->next;
        delete daEliminare;
        return true;
    }

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

    return false;
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
            return true;
        temp = temp->next;
    }

    return false;
}

int Lista::RimuoviDuplicati()
{
    if (testa == nullptr)
        return 0;

    int nodiRimossi = 0;
    Nodo *temp = testa;

    while (temp != nullptr)
    {
        Nodo *check = temp;

        while (check->next != nullptr)
        {
            if (check->next->valore == temp->valore)
            {
                // Rimuoviamo il nodo duplicato
                Nodo *daEliminare = check->next;
                check->next = check->next->next;
                delete daEliminare;
                nodiRimossi++;
            }
            else
            {
                check = check->next;
            }
        }

        temp = temp->next;
    }

    return nodiRimossi;
}
