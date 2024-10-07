#define R 10
#define C 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Primo(int x);
void Inserisci(int v[], int x);
int Sostituisci(int v[]);
void CopiaMultipli(int v1[], int v2[], int x);
void CaricaMatrice(int m[][C]);
int Somma(int m[][C], int y);
int Cerca(int m[][C], int x, int k);
int ContaCompresi(int m[][C], int h, int k);


int main(){

    srand(time(NULL));

    int matrice[R][C];
    int v1[C], v2[C];

    Inserisci(v1, 4);

    printf("I numeri sostituiti sono %d\n", Sostituisci(v1));

    int num;
    scanf("%d", &num);
    CopiaMultipli(v1, v2, num);

    CaricaMatrice(matrice);

    int colonna;
    scanf("%d" &colonna);
    int somma = Somma(matrice, colonna);
    printf("La somma dei numeri primi nella colonna %d della matrice e' %d", colonna, somma);

    int riga, num2;
    scanf("%d", &riga);
    scanf("%d", &num2);

    if (Cerca(m, riga, num2) == 1) {
        printf("Numero trovato\n");
    }
    else {
        printf("Numero non trovato\n");
    }

    int compMIN, compMAX;
    scanf("%d", &compMIN);
    scanf("%d", &compMAX);

    int compresi = ContaCompresi(m, compMIN, compMAX);
    if(compresi > 1) {
        printf("I numeri presenti nella matrice compresi tra %d e %d sono %d", compMIN, compMAX, compresi);
    }else {
        printf("Nella matrice non ci sono numeri compresi tra %d e %d", compMIN, compMAX);
    }
    

}

int Primo(int x){
     if (num <= 1) {
        return 0;
    }
    for(int i=2; i < x/2; i++) {
        if(x%i==0) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

void Inserisci(int v[], int x){
    for(int i=0; i<C; i++) {
        v[i] = x + i;
    }
}

int Sostituisci(int v[]){
    int Sostituiti=0;
    for(int i=0; i<C; i++) {
        if(v[i]%2!=0) {
            v[i] = 0;
            Sostituiti++;
        }
    }
    return Sostituiti;
}

void CopiaMultipli(int v1[], int v2[], int x) {
    for (int i=0; i<C; i++) {

        if (v1[i]%x==0) {
            v2[i] = v1[i];
        } else {
            v2[i] = 0;
        }
    }
}

void CaricaMatrice(int m[][C]) {
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            m[i][j] = (rand() % (200 - 50 + 1)+50);
        }
    }
}

int Somma(int m[][C], int y) {
    int somma = 0;

    for (int i = 0; i < R; i++) {
        int num = m[i][y];
        if (Primo(num) == 0 ){
            somma += m[i][y];  
        }
    }
    return somma;  
}

int Cerca(m[][C], int x, int k) {
    for(int i=0; i<C; i++) {
        if(m[x][i]==k){
            return 1;
        }
    }
    return 0;
}

int ContaCompresi(int m[][C], int h, int k) {
    int compresi+0;
    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            if(h > m[i][j] && m[i][j] < k){
                compresi++;
            }
        }
    }

    if(compresi > 0){
        return compresi;
    }
}