// INVOKE OVERRIDEN METHOD INSIDE DERIVED CLASS USING SUPER KEYWORD.

class base3{
    void area(double r){
        System.out.println("AREA OF CIRCLE IS = " + (3.14*r*r));
    }
}

class derived3 extends base2{
    void area(double r){
        super.area(r);
        System.out.println("AREA OF SQUARE IS = " + (r*r));
    }
}

public class super_keyword2 {
    public static void main(String[] args){
        derived3 obj = new derived3();
        obj.area(2.0);
    }
}

