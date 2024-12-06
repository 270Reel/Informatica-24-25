#include <iostream>

using namespace std;

class Rettangolo {
    
    Rettangolo(double altezza, double base){
        this->altezza = altezza;
        this->base = base;
    }

    private:
    double altezza;
    double base;

    public:

    void setAltezza(double x) {
        altezza = x;
    }

    void setBase(double y) {
        base = y;
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

    Rettangolo r1;

    double x, y;

    cout<<"Inserisci l'altezza del rettangolo"<<endl;
    cin>>x;
    r1.setAltezza(x);

    cout<<"Inserisci la base del rettangolo"<<endl;
    cin>>y;
    r1.setBase(y);

    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r1.stampa();
}

