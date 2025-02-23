import java.util.Scanner;

public class sum_of_two_no {
    public static void main(String[] args){
        System.out.println("TAKING INPUT FROM USER.");
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER NO. 1: ");
        int a = sc.nextInt();
        System.out.println("ENTER NO. 2: ");
        int b = sc.nextInt();
        int sum = a + b;
        System.out.println("THE SUM OF TWO ENTERED NO. IS: " + sum);
    }
}
