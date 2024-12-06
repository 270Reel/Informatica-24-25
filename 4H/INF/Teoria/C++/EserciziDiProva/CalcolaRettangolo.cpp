#include <iostream>

using namespace std;

class Rettangolo {
    
    private:

    double altezza;
    double base;

    public:

        Rettangolo(double altezza, double base){
        this->altezza = altezza;
        this->base = base;
    }

    double Perimetro() {
        return (base + altezza) * 2;
    }

    double Area() {
        return base * altezza;
    }

    void stampa() {

        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
    }
};

int main() {

    double base, altezza;
    
    cout<<"Inserisci il valore dell'altezza"<<endl;
    cin>>altezza;

    cout<<"Inserisci il valore della base"<<endl;
    cin>>base;

    Rettangolo r1(altezza, base);


    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r1.stampa();
}

