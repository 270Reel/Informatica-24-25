import java.util.GregorianCalendar;
import java.util.Calendar;

public class FirstSecondaryClass {

    public void printCurrentTimeWithGregorianCalendar() {

        GregorianCalendar calendar = new GregorianCalendar();
        
        int year = calendar.get(Calendar.YEAR);
        int month = calendar.get(Calendar.MONTH) + 1;
        int day = calendar.get(Calendar.DAY_OF_MONTH);
        int hour = calendar.get(Calendar.HOUR_OF_DAY);
        int minute = calendar.get(Calendar.MINUTE);
        int second = calendar.get(Calendar.SECOND);
        

        System.out.printf("Current Time (GregorianCalendar): %02d/%02d/%04d - %02d:%02d:%02d%n", 
                          day, month, year, hour, minute, second);
    }
}