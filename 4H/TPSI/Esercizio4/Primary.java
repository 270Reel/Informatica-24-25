public class Primary {
    public static void main(String[] args) {
        // Creazione di tre oggetti di tipo Secondary
        Secondary a1 = new Secondary();
        Secondary a2 = new Secondary();
        Secondary a3 = new Secondary();
        Secondary a5 = new Secondary();
        
        // Istanza di Tertiary
        Tertiary a4 = new Tertiary();

        // Stampa dei valori dei contatori
        a1.stampaContatore1(); // Output: Valore del primo contatore: 1
        a5.stampaContatore1(); // Stampa il valore del primo contatore
        a2.stampaContatore2(); // Stampa il valore del secondo contatore
        a3.stampaContatore3(); // Stampa il valore del terzo contatore
        Tertiary.mostraStatico(); // Mostra il valore del contatore statico
    }
}
