#include <iostream>
#include "list.h"

using namespace std;

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

void Lista::Elimina(int val){
    
}

