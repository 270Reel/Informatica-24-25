#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// Variabile globale che memorizza quale LED lampeggiare
int led = 0;

// Funzione che simula il lampeggio dei LED
void lampeggia_led(int led) {
    int i;
    float intervallo = 0.0;

    // Scegli l'intervallo di tempo in base al colore del LED
    if (led == 1) {
        printf("Lampeggio LED verde\n");
        intervallo = 0.3;  // LED verde: intervallo 0.3 secondi
    } else if (led == 2) {
        printf("Lampeggio LED rosso\n");
        intervallo = 0.7;  // LED rosso: intervallo 0.7 secondi
    } else if (led == 3) {
        printf("Lampeggio LED giallo\n");
        intervallo = 1.2;  // LED giallo: intervallo 1.2 secondi
    }

    // Esegui 10 lampeggi
    for (i = 0; i < 10; i++) {
        printf("LED acceso\n");
        usleep(intervallo * 1000000);  // Aspetta per l'intervallo
        printf("LED spento\n");
        usleep(intervallo * 1000000);  // Aspetta per l'intervallo
    }
}

int main() {
    char comando;
    pid_t pid;

    // Ciclo principale per prendere comandi
    while (1) {
        printf("Inserisci comando (v: verde, r: rosso, g: giallo, q: quit): ");
        comando = getchar();  // Leggi il comando
        getchar();  // Consuma il carattere '\n' che resta nella buffer

        if (comando == 'q') {
            printf("Programma terminato.\n");
            break;  // Esci dal ciclo se l'utente inserisce 'q'
        }

        // Imposta il valore della variabile 'led' in base al comando
        if (comando == 'v') {
            led = 1;  // LED verde
        } else if (comando == 'r') {
            led = 2;  // LED rosso
        } else if (comando == 'g') {
            led = 3;  // LED giallo
        } else {
            printf("Comando non valido. Riprovare.\n");
            continue;  // Chiedi di nuovo il comando se non valido
        }

        // Crea un processo figlio per lampeggiare il LED
        pid = fork();
        if (pid < 0) {
            perror("Errore nella creazione del processo");
            exit(1);  // Termina in caso di errore
        }

        if (pid == 0) {
            // Processo figlio: esegue il lampeggio del LED
            lampeggia_led(led);
            exit(0);  // Termina il processo figlio
        } else {
            // Processo padre: aspetta che il figlio termini
            wait(NULL);
        }
    }

    return 0;
}
