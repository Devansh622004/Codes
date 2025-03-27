import java.util.Scanner;

public class array_lenght {
    public static void main(String[] args){
        int arr[] = {1, 2, 3, 4};
        int i;
        for(i = 0; i < arr.length; i++){
            System.out.println(arr[i]);
        }
        // ANOTHER TYPE OF ARRAY CREATION:-
        int arr2[] = new int[4];
        System.out.println("ENTER ARRAY ELEMENTS:- ");
        Scanner sc = new Scanner(System.in);
        for(int b = 0; b < arr2.length; b++){
            int x;
            x = sc.nextInt();
            arr2[b] = x;
        }
        int a;
        for(a = 0; a < arr2.length; a++){
            System.out.println(arr2[a]);
        }
    }
}
