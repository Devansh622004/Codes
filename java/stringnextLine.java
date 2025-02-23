import java.util.Scanner;

public class stringnextLine {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER A STRING: ");
        String str1 = sc.nextLine();              // USING nextLine() RETURNS THE TEXT whole statement including spaces until next line is encountered.
        System.out.println("STRING1 : " + str1);
        String str2 = sc.next();
        System.out.println("STRING2 : " + str2);  // USING next() RETURNS THE TEXT UNTIL FIRST SPACE IS NOT ENCOUNTERED.
    }
}
