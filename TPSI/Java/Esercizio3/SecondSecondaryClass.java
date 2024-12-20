import java.util.GregorianCalendar;
import java.text.SimpleDateFormat;
import java.util.Date;

public class SecondSecondaryClass {

    public void printCurrentTimeWithSimpleDateFormat() {
    	
        GregorianCalendar calendar = new GregorianCalendar();
        Date currentDate = calendar.getTime();
        
        SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy - HH:mm:ss");
        
        System.out.println("Current Time (SimpleDateFormat): " + dateFormat.format(currentDate));
    }
}