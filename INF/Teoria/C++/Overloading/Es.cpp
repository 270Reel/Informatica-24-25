#include <iostream>

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

    Rettangolo(altezza){
        this->altezza = altezza;
        base          = altezza;

    }

    Rettangolo(altezza, base){
        this->altezza = altezza;
        this->base    = base;
    }

    ~Rettangolo() {
        cout << "Distruttore chiamato" <<endl;
    }

    void setBase(base) {
        this->base = base;
    }

    
    void setBase(base) {
        this->base = base;
    }
}

int main() {

    Rettangolo r1;
    Rettangolo r2(3);
    Rettangolo r3(7,9);


}