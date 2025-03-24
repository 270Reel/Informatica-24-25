#include <iostream>
#include "list.h"


Lista::Lista(){
    testa=nullptr;
}

void Lista::InserisciInTesta(int val){

    Nodo* nuovoNodo = new Nodo;

    nuovoNodo->valore = val;
    nuovoNodo->next = testa;
    testa = nuovoNodo;
    
}

void Lista::InserisciInCoda(int val) {

    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->valore = val;

    Nodo* temp = testa;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = nuovoNodo;
}

void Lista::VisualizzaLista() {
    Nodo* temp = testa;

    if (temp == nullptr) {
        std::cout << "Lista vuota!" << std::endl;
        return;
    }

    while (temp != nullptr) {
        std::cout << "[" << temp->valore << "|" << temp->next << "]" << "-----";
        temp = temp->next;
    }

    std::cout <<"[|]"<<std::endl;
}


void Lista::Elimina(int val) {

    if (testa == nullptr) {
        return;
    }

    Nodo* temp = testa;

    while (temp->next != nullptr) {
        if (temp->next->valore == val) {

            Nodo* daEliminare = temp->next;
            temp->next = temp->next->next;
            delete daEliminare;
            return;
        }
        temp = temp->next;
    }

}


int Lista::ConteggioNodi(){
    Nodo* temp = testa; int numeroNodi=0;
    
    
    while(temp != nullptr){
        numeroNodi++;
        temp = temp->next;
    }
    
    return numeroNodi;
}

bool Lista::RicercaNodo(int val) {
    Nodo* temp = testa;

    while (temp != nullptr) {
        if (temp->valore == val) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int Lista::RimuoviDuplicati(){
    Nodo* temp = testa;

    while(temp != nullptr){
        
    }
}







