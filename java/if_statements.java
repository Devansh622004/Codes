import java.util.Scanner;

public class if_statements {
    public static void main(String[] args){
        System.out.println("ENTER TWO NO.");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(a > b)
        {
            System.out.println(a + " IS GREATER THAN " + b);
        }
    }
}
