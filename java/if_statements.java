import java.util.Scanner;

class if_statements {
    public static void main(String[] args){
        System.out.println("ENTER TWO NO.");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(a > b)System.out.println(a + " IS GREATER THAN " + b);
        else System.out.println(a + " IS NOT GREATER THAN " + b);
    }
}
