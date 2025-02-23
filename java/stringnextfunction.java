import java.util.Scanner;

public class stringnextfunction {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER FIRST STRING: ");
        String str1 = sc.next();                   // USING next() RETURNS THE TEXT UNTIL FIRST SPACE IS NOT ENCOUNTERED.
        System.out.println("STRING 1: " + str1);

        System.out.println("ENTER SECOND STRING: ");
        String str2 = sc.next();
        System.out.println("STRING 2: " + str2);

        System.out.println("STRING 1 + STRING 2: " + str1 + " " + str2);
    }
}
