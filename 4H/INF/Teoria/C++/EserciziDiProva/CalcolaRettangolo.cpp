#include <iostream>

    double setAltezza(double x);
    double setBase(double y);
    double Perimetro();
    double Area();
    void stampa();

using namespace std;


class Rettangolo {

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
    Rettangolo r2;

    double x, y;

    cout<<"Inserisci l'altezza del rettangolo"<<endl;
    cin>>x;
    r1.setAltezza(x);

    cout<<"Inserisci la base del rettangolo"<<endl;
    cin>>y;
    r1.setBase(y);

    cout<<"Inserisci l'altezza del secondo rettangolo"<<endl;
    cin>>x;
    r2.setAltezza(x);

    cout<<"Inserisci la base del secondo rettangolo"<<endl;
    cin>>y;
    r2.setBase(y);

    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r1.stampa();
    cout<<endl;
    cout<<"[VALORI DEL SECONDO RETTANGOLO]"<<endl;
    cout<<"-------------------------------------"<<endl;
    r2.stampa();
}

