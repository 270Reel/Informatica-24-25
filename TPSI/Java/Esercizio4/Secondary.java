public class Secondary {
    static int contatore1 = 0;
    int contatore2 = 0;
    final int contatore3 = 0;

    public Secondary() {
        contatore1++;
        contatore2++;
    }

    public void stampaContatore1() {
        System.out.println("Valore del primo contatore: " + contatore1);
    }

    public void stampaContatore2() {
        System.out.println("Valore del secondo contatore: " + contatore2);
    }

    public void stampaContatore3() {
        System.out.println("Valore del terzo contatore: " + contatore3);
    }
}
