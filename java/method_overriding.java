class base2{
     void area(double r){
        System.out.println("AREA OF CIRCLE IS = " + (3.14*r*r));
    }
}

class derived2 extends base2{
    void area(double r){
        System.out.println("AREA OF SQUARE IS = " + (r*r));
    }
}

public class method_overriding {
    public static void main(String[] args){
        derived2 obj = new derived2();
        obj.area(2.0);
    }
}
