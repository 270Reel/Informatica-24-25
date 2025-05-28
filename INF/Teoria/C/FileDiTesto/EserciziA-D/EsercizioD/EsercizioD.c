#include <stdio.h>

int main()
{
    FILE *fileNumeri, *filePari, *fileDispari;
    int numero;

    // Apriamo il file in modalità lettura
    fileNumeri = fopen("numeri.txt", "r");
    if (fileNumeri == NULL)
    {
        printf("Errore nell'apertura del file numeri.txt!\n");
        return 1;
    }

    // Apriamo il file in modalità scrittura
    filePari = fopen("pari.txt", "w");
    if (filePari == NULL)
    {
        printf("Errore nell'apertura del file pari.txt!\n");
        fclose(fileNumeri);
        return 1;
    }

    // Apriamo il file in modalità scrittura
    fileDispari = fopen("dispari.txt", "w");
    if (fileDispari == NULL)
    {
        printf("Errore nell'apertura del file dispari.txt!\n");
        fclose(fileNumeri);
        fclose(filePari);
        return 1;
    }

    // Leggiamo i numeri dal file
    while (fscanf(fileNumeri, "%d", &numero) != EOF)
    {

        if (numero % 2 == 0)
        {
            // Scriviamo il numero pari nel file pari.txt
            fprintf(filePari, "%d ", numero);
        }
        else
        {
            // Scriviamo il numero dispari nel file dispari.txt
            fprintf(fileDispari, "%d ", numero);
        }
    }

    fclose(fileNumeri);
    fclose(filePari);
    fclose(fileDispari);

    printf("Operazione completata! Tutti i numeri sono stati copiati correttamente\n");

    return 0;
}
