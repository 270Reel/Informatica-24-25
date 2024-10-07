public class Primaria {

    public static void main(String[] args) {
        // Creazione di un oggetto della classe Secondaria
        Secondaria oggetto1 = new Secondaria();

        // Esegui una somma
        int risultatoSomma = oggetto1.somma(12, 37);
        System.out.println("Il risultato della somma è: " + risultatoSomma);

        // Esegui un prodotto
        int risultatoProdotto = oggetto1.prodotto(4, 9, 2);
        System.out.println("Il risultato del prodotto è: " + risultatoProdotto);
    }
}
