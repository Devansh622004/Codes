import java.util.Scanner;

public class greaterofallelementsofarray {
    public static void main(String[] args){
        int arr[] = new int[4];
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER ALL ELEMENTS OF ARRAY: ");
        for(int i = 0; i < 4; i++){
            int x;
            x = sc.nextInt();
            arr[i] = x;
        }
        int big = arr[0];
        for(int i = 1; i < 4; i++){
            if(arr[i] > big) {
                big = arr[i];
            }
        }
        System.out.println(big + " IS THE GREATEST AMONG ALL ELEMENTS.");
    }
}
