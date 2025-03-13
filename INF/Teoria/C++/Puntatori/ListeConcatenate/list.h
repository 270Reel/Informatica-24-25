#ifndef LIST_H
#define LIST_H



class Nodo{

    public:

    int valore;
    Nodo* next;
};



class Lista{

    private:

    Nodo* testa;

    public:

    Lista();

    void InserisciInTesta(int val);
    void InserisciInCoda(int val);
    void Elimina(int val);
    void RicercaNodo(int val);
    void VisualizzaLista();
    void ConteggioNodi();
    void RimuoviDuplicati();
};



#endif