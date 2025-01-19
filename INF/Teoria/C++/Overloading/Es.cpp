#include <iostream>
#include <cmath>

using namespace std;

class Rettangolo 
{
    private:
        
    double altezza;
    double base;

    public:

    Rettangolo(){
        altezza = 0;
        base    = 0;
    }

    Rettangolo(double altezza){
        this->altezza = altezza;
        base          = altezza;

    }

    Rettangolo(double altezza,double  base){
        this->altezza = altezza;
        this->base    = base;
    }

    ~Rettangolo() {
        cout << "Distruttore chiamato" <<endl;
    }

    void setBase(double base) {
        this->base = base;
    }

    double Perimetro() {
        return (base + altezza) * 2;
    }

    double Area() {
        return base * altezza;
    }

    double Diagonale() {
        return sqrt((base*base) + (altezza*altezza));
    }

    void stampa() {
        cout<<"Il valore dell'altezza e' "<<altezza<<endl;
        cout<<"Il valore della base e' "<<base<<endl;
        cout<<"Il valore delle perimetro e' "<<Perimetro()<<endl;
        cout<<"Il valore dell'area e' "<<Area()<<endl;
        cout<<"Il valore della diagonale "<<Diagonale()<<endl;
    }
};

int main() {

    Rettangolo r1;
    cout<<"[VALORI DEL PRIMO RETTANGOLO]"<<endl;
    cout<<"-----------------------------"<<endl;
    r1.stampa();


    Rettangolo r2(3);
    cout<<endl<<"[VALORI DEL SECONDO RETTANGOLO]"<<endl;
    cout<<"-----------------------------"<<endl;
    r2.stampa();

    Rettangolo r3(7,9);
    cout<<endl<<"[VALORI DEL TERZO RETTANGOLO]"<<endl;
    cout<<"-----------------------------"<<endl;
    r3.stampa();


}