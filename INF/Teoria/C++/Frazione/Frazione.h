#ifndef FRAZIONE_H
#define FRAZIONE_H

class Frazione{
    private:
        int num;
        int den;
    public:
        
        //Costruttore
        Frazione(int num, int den);

        //Getters
        int getNum();
        int getDen();

        //Setters
        void setNum(int num);
        void setDen(int den);
};
#endif