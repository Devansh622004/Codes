class base4{
    base4(){
        System.out.println("BASE CLASS CONSTRUCTOR CALLED.");
    }
}

class derived4 extends base4{
    derived4(){
        System.out.println("DERIVED CLASS CONSTRUCTOR CALLED.");
    }
}

public class constructors_in_inheritance {
    public static void main(String[] args){
        derived4 obj = new derived4();
    }
}
