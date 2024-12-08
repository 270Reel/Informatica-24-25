public class MainClass {
    public static void main(String[] args) {
        
        FirstSecondaryClass firstObj = new FirstSecondaryClass();
        SecondSecondaryClass secondObj = new SecondSecondaryClass();
        
        firstObj.printCurrentTimeWithGregorianCalendar();
        
        secondObj.printCurrentTimeWithSimpleDateFormat();
    }
}