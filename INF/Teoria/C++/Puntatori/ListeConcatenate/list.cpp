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

void Lista::InserisciInCoda(int val){
    
    Nodo* temp = new Nodo;
    
    while(testa->next!=nullptr){
        testa=testa->next;
    }
    
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->valore = val;
    temp->next=nuovoNodo;
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

