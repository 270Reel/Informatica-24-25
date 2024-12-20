#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    int cateto1 = 3;
    int cateto2 = 4;

    double ipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);

    pid_t pid = fork();

    if (pid == 0) {
        double perimetro = cateto1 + cateto2 + ipotenusa;
        printf("(PID: %d) Processo Figlio : Perimetro = %.2f\n", getpid(), perimetro);
    } else {
        double area = (cateto1 * cateto2) / 2.0;
        printf("(PID: %d) Processo Padre : Area = %.2f\n", getpid(), area);
    }

    return 0;
}
