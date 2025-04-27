class base{
    int a, b;
    void get(int m, int n){
        a = m;
        b = n;
    }
    void sum(){
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("THE SUM = " + (a+b));
    }
}

class derived extends base{
    int c;
    void get2(int o){
        c = o;
    }
    void sum2(){
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        System.out.println("c = " + c);
        System.out.println("THE SUM = " + (a+b+c));
    }
}

public class inheritence {
    public static void main(String[] args){
        derived obj = new derived();
        // ACCESSING BASE CLASS METHODS.
        obj.get(2, 3);
        obj.sum();

        System.out.println("**************************************************************************************");

        // ACCESSING DERIVED CLASS METHODS.
        obj.get2(5);
        obj.sum2();
    }
}
