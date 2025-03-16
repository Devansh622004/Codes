import java.util.Scanner;

public class concatenate {
    public static void main(String[] args){
        System.out.println("ENTER FIRST NO. : ");
        Scanner sc = new Scanner(System.in);
        String x = sc.nextLine();
        System.out.println("ENTER SECOND NO. : ");
        String y = sc.nextLine();
        String str = x + y;
        System.out.println(x + " + " + y + " = " + str);
        // OR
        System.out.printf("THE CONCATENATED STRING IS: %s", str);
        // OR
        System.out.format("\nTHE CONCATENATED STRING IS: %s", str);
    }
}
